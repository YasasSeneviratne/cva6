//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/27/2023 09:02:42 AM
// Design Name: 
// Module Name: rm_lane_allocator
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module rm_lane_allocator#(
	parameter NUM_LANES=4,
	parameter NUM_EVENTS=10
	)(
	input 						clk_i,
	input 						rst_ni,
	input [6:0]					opcode,
	input  logic [riscv::VLEN-1:0]    		pc_i,
	input  logic                         		entry_queued_i, 
	input ariane_pkg::lane_ctrl	[NUM_EVENTS-1:0]	reset_monitor, //reset monitor ctrl
	input logic					flush_i,	
	//input 						commit_ack,
	output ariane_pkg::runtime_monitor_ctrl		monitor_o	
	);
	logic						monitor;
	logic [$clog2(NUM_LANES)-1:0]			lane_o;

	logic [NUM_LANES-1:0] 				alloc_mem;
	logic [NUM_LANES-1:0][riscv::VLEN-1:0] 		pc_mem;
	logic						some_lane_reset;
	logic [$clog2(NUM_LANES)-1:0]			nxt_reset_lane;

	assign monitor_o.lane 			= (some_lane_reset  && monitor && &alloc_mem)? nxt_reset_lane: ((monitor)? lane_o: '0);
	assign monitor_o.monitor_ins 		= monitor;     


	logic overflow;

	assign overflow = (&alloc_mem) && monitor && ~some_lane_reset;

	always_comb begin
	//check if the instuction is monitored
		monitor = 1'b0;
		//if((opcode==riscv::OpcodeStore || opcode==riscv::OpcodeLoad) && entry_queued_i) begin
		if(opcode==riscv::OpcodeStore && entry_queued_i) begin
		//if((opcode==riscv::OpcodeLoad) && entry_queued_i) begin
			monitor = 1'b1;
		end
	
	//assign next available lant to the instruction
		lane_o = '0;
		for(int i=0; i<NUM_LANES; i++) begin
			if(alloc_mem[i]==1'b0) begin
				lane_o = i;
				break;
			end
		end

		nxt_reset_lane = '0;
		some_lane_reset = 0;
		for(int i=0; i<NUM_EVENTS; i++) begin
			if(reset_monitor[i].reset_lane) begin
				nxt_reset_lane = reset_monitor[i].lane;
				some_lane_reset = 1;
				break;
			end	
		end
	end
	
	always_ff @(posedge clk_i or negedge rst_ni) begin: set_alloc
		if (~rst_ni) begin
			for(int i=0; i<NUM_LANES; i++) begin
				alloc_mem[i]	<= 1'b0;
				pc_mem[i]	<= {riscv::VLEN{1'b0}};
			end
		end else begin
			if(monitor && !(&alloc_mem) && ~flush_i) begin
				alloc_mem[lane_o] 	<= 1'b1;
				pc_mem[lane_o]		<= pc_i;
			end
			
//			if(commit_ack == 1'b1 && commit_monitor.monitor_ins == 1'b1) begin
//				alloc_mem[commit_monitor.lane] 	<= 1'b0;
//				pc_mem[commit_monitor.lane]	<= {riscv::VLEN{1'b0}};
//			end
			for(int i=0; i<NUM_EVENTS; i++) begin
				if (reset_monitor[i].reset_lane) begin
					alloc_mem[reset_monitor[i].lane] 	<= 1'b0;
				        pc_mem[reset_monitor[i].lane]		<= '0;
                                end
				////if all lanes are filled but there is a lane to be reset next cycle and 
				////current instruction need to be monitord then  assign that lane to incomming insctuction
				//if (reset_monitor[i].reset_lane && monitor && &alloc_mem) begin
				//	alloc_mem[reset_monitor[i].lane] 	<= 1'b1;
				//	pc_mem[reset_monitor[i].lane]          	<= pc_i;
				//end
			end

			
			//if all lanes are filled but there is a lane to be reset next cycle and 
			//current instruction need to be monitord then  assign that lane to incomming insctuction
			if (some_lane_reset && monitor && (&alloc_mem) && ~flush_i) begin
				alloc_mem[nxt_reset_lane] 	<= 1'b1;
				pc_mem[nxt_reset_lane]         	<= pc_i;
			end
		end	
	end
endmodule

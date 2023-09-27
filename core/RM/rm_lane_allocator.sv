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
	parameter NUM_EVENTS=10,
        parameter NUM_MONITORED_INS = 2
	)(
	input 						clk_i,
	input 						rst_ni,
	input [6:0]					opcode,
	input  logic [riscv::VLEN-1:0]    		pc_i,
	input  logic                         		entry_queued_i, 
	input ariane_pkg::lane_ctrl	[NUM_EVENTS-1:0]	reset_monitor, //reset monitor ctrl
        input logic [NUM_LANES-1:0]                     lane_reset_i,
	input logic					flush_i,	
	//input 						commit_ack,
	output ariane_pkg::runtime_monitor_ctrl		monitor_o	
	);
       
        ariane_pkg::monitored_itype 			itype_o;
	logic						monitor;
        //To gurantee ordering alloc_mem == 10 must be prioratized
	logic [$clog2(NUM_LANES)-1:0]			lane0_o; 
	logic [$clog2(NUM_LANES)-1:0]			lane1_o; 
	logic [$clog2(NUM_LANES)-1:0]			lane_o_00; 
	logic [$clog2(NUM_LANES)-1:0]			lane_o_01;
	logic						has_01_lane;
	logic						two_lane_o;
	logic						last_ins_o;

	logic [NUM_LANES-1:0][1:0]			alloc_mem; //Each lane is allocated two instruction 
	logic [NUM_LANES-1:0][1:0][riscv::VLEN-1:0]	pc_mem;
	logic						some_lane_reset;
	logic [NUM_LANES-1:0]				nxt_reset_lane_mask;
	logic [$clog2(NUM_LANES)-1:0]			nxt_reset_lane;
	logic						all_lanes_occupied; //All lanes are full except one slot
        logic [31:0] tmp_cnt;

	assign monitor_o.lane0 			= lane0_o;//(some_lane_reset  && monitor && &alloc_mem)? nxt_reset_lane_mask: ((monitor)? lane_o_00: '0);
	assign monitor_o.lane1 			= lane1_o;
	assign monitor_o.idx 			= (has_01_lane && nxt_reset_lane_mask[lane_o_01])? lane_o_01: lane_o_00;
	assign monitor_o.p_idx 			= lane_o_01;
        assign monitor_o.two_lane               = (has_01_lane && ~nxt_reset_lane_mask[lane_o_01]) ; // if the allocation is happaning to 1st location then that instrucion will be in two lanes
	assign monitor_o.monitor_ins 		= monitor;     
	assign monitor_o.pc 			= pc_i;     
        assign monitor_o.itype                  = itype_o;
        assign monitor_o.last_ins               = last_ins_o;
        assign monitor_o.tmp_cnt               = tmp_cnt;

	logic overflow;

	assign overflow = !has_01_lane && all_lanes_occupied && ~some_lane_reset;
        assign last_ins_o = alloc_mem[lane0_o][0] & ~alloc_mem[lane0_o][1];

        assign some_lane_reset = |nxt_reset_lane_mask;
        //assign lane0_o = (monitor && has_01_lane)? lane_o_01 : ((monitor)? lane_o_00 : '0)  ;
        //assign lane1_o = (monitor && has_01_lane)? lane_o_00 : '0;
        assign lane0_o = (monitor && has_01_lane)? lane_o_01 : ((monitor)? lane_o_00 : '0)  ;
        assign lane1_o = (monitor && has_01_lane)? lane_o_00 : '0;
        assign two_lane_o = (monitor && has_01_lane)? 1'b1 : 1'b0;

        assign	nxt_reset_lane_mask = lane_reset_i;

	always_comb begin
	//check if the instuction is monitored and identify instruction type
                itype_o  = ariane_pkg::SW_RM;
		monitor = 1'b0;
		if(entry_queued_i) begin
                	case(opcode)
                	    riscv::OpcodeStore:begin
                	        itype_o = ariane_pkg::SW_RM;
			        monitor = 1'b1;
                            end
                	    riscv::OpcodeLoad:begin
                	        itype_o = ariane_pkg::LW_RM; 
			        monitor = 1'b1;
                            end
                	endcase
                end
	//find next available lane for the monitored instruction
		lane_o_00 = '0;
		for(int i=0; i<NUM_LANES; i++) begin
			if(alloc_mem[i]==2'b00) begin
				lane_o_00 = i;
				break;
			end
		end

		lane_o_01 = '0;
                has_01_lane = 1'b0;
		for(int i=0; i<NUM_LANES; i++) begin
			if(alloc_mem[i]==2'b01) begin
				lane_o_01 = i;
                                has_01_lane = 1'b1;
				break;
			end
		end
        // reset handling
                nxt_reset_lane = '0;
		for(int i=0; i<NUM_EVENTS; i++) begin
			//if(reset_monitor[i].reset_lane) begin
			if(lane_reset_i[i]) begin
                                //nxt_reset_lane = reset_monitor[i].lane0;
                                nxt_reset_lane = i;
				break;
			end	
		end

//		nxt_reset_lane_mask = '0;
//		for(int i=0; i<NUM_EVENTS; i++) begin
//			if(reset_monitor[i].reset_lane) begin
//                                if(reset_monitor[i].two_lane) begin
//				nxt_reset_lane_mask[reset_monitor[i].lane1] = 1'b1;
//                                end else  begin
//				nxt_reset_lane_mask[reset_monitor[i].lane0] = 1'b1;
//                                end
//			end	
//		end

                all_lanes_occupied = 1'b1;
                for(int i=0; i<NUM_LANES; i++) begin
                        all_lanes_occupied = alloc_mem[i][0] &  all_lanes_occupied;
                end
	end
	
	always_ff @(posedge clk_i or negedge rst_ni) begin: set_alloc
		if (~rst_ni) begin
			for(int i=0; i<NUM_LANES; i++) begin
				alloc_mem[i]	<= '0;
				pc_mem[i]	<= '0;
                                tmp_cnt <= '0;
			end
		end else begin
                        tmp_cnt <= tmp_cnt + 32'd1;
			//for(int i=0; i<NUM_EVENTS; i++) begin
			for(int i=0; i<NUM_LANES; i++) begin
				//if (reset_monitor[i].reset_lane) begin
				if ( lane_reset_i[i]) begin


                                        //if(reset_monitor[i].two_lane) begin
					//	alloc_mem[reset_monitor[i].lane1] 	<= '0;
				        //	pc_mem[reset_monitor[i].lane1]		<= '0;
					//end 
					//else begin
					//alloc_mem[reset_monitor[i].lane0] 	<= '0;
				        //pc_mem[reset_monitor[i].lane0]		<= '0;
                                        //end
					alloc_mem[i] 	<= '0;
				        pc_mem[i]		<= '0;
                                end
			end

			if(monitor  && ~flush_i && ~all_lanes_occupied) begin
                                if(has_01_lane && nxt_reset_lane_mask[lane_o_01]) begin
					alloc_mem[lane_o_01][0] 	<= 1'b1;
					pc_mem[lane_o_01][0]		<= pc_i;
                                end
                                else if (has_01_lane) begin
					alloc_mem[lane_o_01][1] 	<= 1'b1;
					pc_mem[lane_o_01][1]		<= pc_i;
					
                                        alloc_mem[lane_o_00][0] 	<= 1'b1;
					pc_mem[lane_o_00][0]		<= pc_i;

                                end
                                else  begin
					alloc_mem[lane_o_00][0] 	<= 1'b1;
					pc_mem[lane_o_00][0]		<= pc_i;
		                end
			end
			//if all lanes are filled but there is a lane to be reset next cycle and 
			//current instruction need to be monitord then  assign that lane to incomming insctuction
                        if (some_lane_reset && monitor && all_lanes_occupied && ~flush_i) begin
					alloc_mem[lane_o_01][1] 	<= 1'b1;
					pc_mem[lane_o_01][1]		<= pc_i;
					
                                        alloc_mem[nxt_reset_lane][0] 	<= 1'b1;
					pc_mem[nxt_reset_lane][0]	<= pc_i;

                        end	
		end	
	end
endmodule

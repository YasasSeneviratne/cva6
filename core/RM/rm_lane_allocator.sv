`timescale 1ns / 1ps
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
	parameter NUM_LANES=4
	)(
	input 					clk_i,
	input 					rst_ni,
	input [6:0]				opcode,
	input  logic [riscv::VLEN-1:0]    	pc_i,
 
	input runtime_monitor_ctrl		commit_monitor, //commited monitor ctrl	
	input 					commit_ack,
	output logic runtime_monitor_ctrl	monitor_o	
	);
	logic					monitor;
	logic [NUM_LANES-1:0]			lane_o;

	logic [NUM_LANES-1:0] 			lane_allocation;
	logic [NUM_LANES-1:0] 			alloc_mem;
	logic [NUM_LANES-1:0][riscv::VLEN-1:0] 	pc_mem;

	assign monitor_o.lane 			= lane_o;
	assign monitor_o.monitor_ins 		= monitor;      

	always_comb begin
	//check if the instuction is monitored
		monitor = 1'b0;
		if(opcode==riscv::OpcodeStore || opcode==riscv::OpcodeLoad) begin
			monitor = 1'b1;
		end
	
	//assign next available lant to the instruction
		lane_o = {NUM_LANES{1'b0}};
		for(int i=0; i<NUM_LANES; i++) begin
			if(lane_allocation[i]==1'b0)
				lane_o = i;
				break;
		end	
	end
	
	always_ff @(posedge clk_i or negedge rst_ni) begin: set_alloc
		if (~rst_ni) begin
			for(int i=0; i<NUM_LANES; i++) begin
				alloc_mem[i]	<= 1'b0;
				pc_mem[i]	<= {riscv::VLEN{1'b0}};
			end
		end else begin
			if(monitor) begin
				alloc_mem[lane_0] 	<= 1'b1;
				pc_mem[lane_0]		<= pc_i;
			end
			
			if(commit_ack == 1'b1 && commit_monitor.monitor_ins == 1'b1) begin
				alloc_mem[commit_monitor.lane] 	<= 1'b0;
				pc_mem[commit_monitor.lane]	<= {riscv::VLEN{1'b0}};
			end
		end	
	end
endmodule

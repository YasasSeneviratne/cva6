module rm_lane#(
	parameter NUM_EVENTS	= 	10,
	parameter NUM_RULES	= 	10
	)(
	input						clk_i,
	input logic [NUM_EVENTS-1:0]			lane_vector_i,
	input logic 					lane_reset_i,
	output 	[NUM_RULES-1:0] 			monitor_o
	);


	logic [3:0] c0_i;
	logic [3:0] c1_i;

	assign 	c0_i = {lane_vector_i[0],lane_vector_i[4],lane_vector_i[5],lane_vector_i[3]};
	assign 	c1_i = {lane_vector_i[1],lane_vector_i[2],lane_vector_i[3],lane_vector_i[0]};

	Top_ModuleC0 c0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c0_i),
	.run(1'b1),
	.ltl0c0(monitor_o[0]),
	.ltl1c0(monitor_o[1])
	);

	Top_ModuleC1 c1(
	.clk(clk_i), 
	.reset(lane_reset_i),  
	.symbols(c1_i),
	.run(1'b1), 
	.ltl0c1(monitor_o[2]),
	.ltl1c1(monitor_o[3]),  
	.ltl2c1(monitor_o[4])  
	);	

endmodule

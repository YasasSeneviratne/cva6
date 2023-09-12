module rm_lane#(
	parameter NUM_EVENTS		= 	10,
	parameter NUM_RULES		= 	10,
        parameter NUM_MONITORED_INS     =       2
	)(
	input							clk_i,
	input logic [NUM_MONITORED_INS-1:0][NUM_EVENTS-1:0]	lane_vector_i,
	input logic 						lane_reset_i,
	output 	[NUM_RULES-1:0] 				monitor_o
	);


	logic [3:0] c0_i;
	logic [3:0] c1_i;
	logic [3:0] c2_i;
	logic [3:0] c3_i;

	assign 	c0_i = {lane_vector_i[0][0],lane_vector_i[0][4],lane_vector_i[0][5],lane_vector_i[0][3]};
	assign 	c1_i = {lane_vector_i[0][1],lane_vector_i[0][2],lane_vector_i[0][3],lane_vector_i[0][0]};
	assign 	c2_i = {lane_vector_i[1][0],lane_vector_i[1][4],lane_vector_i[1][5],lane_vector_i[1][3]};
	assign 	c3_i = {lane_vector_i[1][1],lane_vector_i[1][2],lane_vector_i[1][3],lane_vector_i[1][0]};

	//Instruction 0 monitor
	Top_ModuleC0 I0c0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c0_i),
	.run(1'b1),
	.ltl0c0(monitor_o[0]),
	.ltl1c0(monitor_o[1])
	);

	Top_ModuleC1 I0c1(
	.clk(clk_i), 
	.reset(lane_reset_i),  
	.symbols(c1_i),
	.run(1'b1), 
	.ltl0c1(monitor_o[2]),
	.ltl1c1(monitor_o[3]),  
	.ltl2c1(monitor_o[4])  
	);	


	//instruction 1 monitor
	Top_ModuleC0 I1c0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c2_i),
	.run(1'b1),
	.ltl0c0(monitor_o[5]),
	.ltl1c0(monitor_o[6])
	);

	Top_ModuleC1 I1c1(
	.clk(clk_i), 
	.reset(lane_reset_i),  
	.symbols(c3_i),
	.run(1'b1), 
	.ltl0c1(monitor_o[7]),
	.ltl1c1(monitor_o[8]),  
	.ltl2c1(monitor_o[9])  
	);	
endmodule

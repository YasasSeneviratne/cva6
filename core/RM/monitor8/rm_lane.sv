module rm_lane#(
	parameter NUM_EVENTS	= 	10,
	parameter NUM_RULES	= 	10
	)(
	input						clk_i,
	input logic [NUM_EVENTS-1:0]			lane_vector_i,
	input logic 					lane_reset_i,
	output 	[NUM_RULES-1:0] 			monitor_o
	);


	logic [7:0] c0_i;
	logic [7:0] c1_i;
	logic [7:0] c2_i;
	logic [7:0] c3_i;
	logic [7:0] c4_i;
	logic [7:0] c5_i;
	logic [7:0] c6_i;
	logic [7:0] c7_i;


	assign c0_i = {lane_vector_i[3],lane_vector_i[25],lane_vector_i[4],lane_vector_i[5],lane_vector_i[8],lane_vector_i[9],lane_vector_i[12],lane_vector_i[19]};
	assign c1_i = {1'b0,lane_vector_i[8],lane_vector_i[12],lane_vector_i[16],lane_vector_i[2],lane_vector_i[21],lane_vector_i[3],lane_vector_i[13]};
	assign c2_i = {lane_vector_i[5],lane_vector_i[17],lane_vector_i[2],lane_vector_i[8],lane_vector_i[20],lane_vector_i[3],lane_vector_i[26],lane_vector_i[15]};
	assign c3_i = {lane_vector_i[2],lane_vector_i[9],lane_vector_i[13],lane_vector_i[20],lane_vector_i[21],lane_vector_i[17],lane_vector_i[25],lane_vector_i[15]};
	assign c4_i = {lane_vector_i[21],lane_vector_i[15],lane_vector_i[2],lane_vector_i[4],lane_vector_i[5],lane_vector_i[20],lane_vector_i[22],lane_vector_i[23]};
	assign c5_i = {lane_vector_i[4],lane_vector_i[20],lane_vector_i[26],lane_vector_i[2],lane_vector_i[12],lane_vector_i[16],lane_vector_i[25],lane_vector_i[11]};
	assign c6_i = {lane_vector_i[7],lane_vector_i[11],lane_vector_i[19],lane_vector_i[20],lane_vector_i[21],lane_vector_i[26],lane_vector_i[22],lane_vector_i[23]};
	assign c7_i = {lane_vector_i[22],lane_vector_i[23],lane_vector_i[7],lane_vector_i[25],lane_vector_i[26],lane_vector_i[5],lane_vector_i[9],lane_vector_i[13]};

        Top_ModuleC0 c0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c0_i),
	.run(1'b1)
        ,.ltl0c0(monitor_o[0])
        ,.ltl1c0(monitor_o[1])   
        ,.ltl2c0(monitor_o[2])  
        ,.ltl3c0(monitor_o[3])  
        ,.ltl4c0(monitor_o[4])  
        ,.ltl5c0(monitor_o[5])  
        ,.ltl6c0(monitor_o[6])  
        ,.ltl7c0(monitor_o[7])  
        ,.ltl8c0(monitor_o[8])  
        ,.ltl9c0(monitor_o[9])  
        ,.ltl10c0(monitor_o[10]) 
          );


        Top_ModuleC1 c1(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c1_i),
	.run(1'b1)
        ,.ltl0c1(monitor_o[11])  
        ,.ltl1c1(monitor_o[12])  
        ,.ltl2c1(monitor_o[13])  
        ,.ltl3c1(monitor_o[14])  
        ,.ltl4c1(monitor_o[15])  
        ,.ltl5c1(monitor_o[16])  
        ,.ltl6c1(monitor_o[17])  
        ,.ltl7c1(monitor_o[18])  
        ,.ltl8c1(monitor_o[19])  
         );


        Top_ModuleC2 c2(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c2_i),
	.run(1'b1)
        ,.ltl0c2(monitor_o[20])  
        ,.ltl1c2(monitor_o[21])  
        ,.ltl2c2(monitor_o[22])  
        ,.ltl3c2(monitor_o[23])  
        ,.ltl4c2(monitor_o[24])  
        ,.ltl5c2(monitor_o[25])  
        ,.ltl6c2(monitor_o[26])  
        ,.ltl7c2(monitor_o[27])  
        ,.ltl8c2(monitor_o[28])  
        ,.ltl9c2(monitor_o[29])  
        );

	Top_ModuleC3 c3(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c3_i),
	.run(1'b1)
        ,.ltl0c3(monitor_o[30]) 
        ,.ltl1c3(monitor_o[31]) 
        ,.ltl2c3(monitor_o[32]) 
        ,.ltl3c3(monitor_o[33]) 
        ,.ltl4c3(monitor_o[34]) 
        ,.ltl5c3(monitor_o[35]) 
        ,.ltl6c3(monitor_o[36]) 
        ,.ltl7c3(monitor_o[37]) 
        ,.ltl8c3(monitor_o[38]) 
        ,.ltl9c3(monitor_o[39]) 
	);



	Top_ModuleC4 c4(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c4_i),
	.run(1'b1)
        ,.ltl0c4(monitor_o[40]) 
        ,.ltl1c4(monitor_o[41]) 
        ,.ltl2c4(monitor_o[42]) 
        ,.ltl3c4(monitor_o[43]) 
        ,.ltl4c4(monitor_o[44]) 
        ,.ltl5c4(monitor_o[45]) 
        ,.ltl6c4(monitor_o[46]) 
	);



	Top_ModuleC5 c5(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c5_i),
	.run(1'b1)
        ,.ltl0c5(monitor_o[47]) 
        ,.ltl1c5(monitor_o[48]) 
        ,.ltl2c5(monitor_o[49]) 
        ,.ltl3c5(monitor_o[50]) 
        ,.ltl4c5(monitor_o[51]) 
        ,.ltl5c5(monitor_o[52]) 
        ,.ltl6c5(monitor_o[53]) 
        ,.ltl7c5(monitor_o[54]) 
        ,.ltl8c5(monitor_o[55]) 
	);


	Top_ModuleC6 c6(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c6_i),
	.run(1'b1)
        ,.ltl0c6(monitor_o[56]) 
        ,.ltl1c6(monitor_o[57]) 
        ,.ltl2c6(monitor_o[58]) 
        ,.ltl3c6(monitor_o[59]) 
        ,.ltl4c6(monitor_o[60]) 
        ,.ltl5c6(monitor_o[61]) 
        ,.ltl6c6(monitor_o[62]) 
        ,.ltl7c6(monitor_o[63]) 
        ,.ltl8c6(monitor_o[64]) 
        ,.ltl9c6(monitor_o[65]) 
        ,.ltl10c6(monitor_o[66])
        ,.ltl11c6(monitor_o[67])
        ,.ltl12c6(monitor_o[68])
	);



	Top_ModuleC7 c7(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(c7_i),
	.run(1'b1)
        ,.ltl0c7(monitor_o[69]) 
        ,.ltl1c7(monitor_o[70]) 
        ,.ltl2c7(monitor_o[71]) 
        ,.ltl3c7(monitor_o[72]) 
        ,.ltl4c7(monitor_o[73]) 
        ,.ltl5c7(monitor_o[74]) 
        ,.ltl6c7(monitor_o[75]) 
        ,.ltl7c7(monitor_o[76]) 
        ,.ltl8c7(monitor_o[77]) 
	);
	
endmodule

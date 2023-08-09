module rm_monitor#(
	parameter NUM_LANES	= 	5,
	parameter NUM_EVENTS	= 	10,
	parameter NUM_RULES	= 	5
	)(
	input logic 					clk_i,
	input logic					rst_ni,
	input logic [NUM_EVENTS-1:0][NUM_LANES-1:0]	lane_vector_i,
	input logic [NUM_LANES-1:0]			lane_reset_i,
	output logic [NUM_EVENTS-1: 0][NUM_RULES-1:0]	monitor_o
	);

	genvar i;

	generate
		for(i=0;i<NUM_LANES;i++) begin
			rm_lane lane(
			.clk_i,
			.lane_vector_i(lane_vector_i[i]),
			.lane_reset_i(~rst_ni | lane_reset_i[i]),
			.monitor_o(monitor_o[i])
			);
		end
	endgenerate	
endmodule

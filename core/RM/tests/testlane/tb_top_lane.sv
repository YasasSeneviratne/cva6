module lanewrap#(
	parameter NUM_EVENTS    =      6, 
	parameter NUM_RULES    =      10 
	)(
	input						clk_i,
	input  [NUM_EVENTS-1:0]			lane_vector_i,
	input  					lane_reset_i,
	output 	[NUM_RULES-1:0] 			monitor_o
	);


	logic [NUM_EVENTS-1:0]			lane_vector_reg;
	logic 					lane_reset_reg;


	rm_lane #(
		.NUM_RULES,
		.NUM_EVENTS)
		dut(
		.lane_vector_i(lane_vector_reg),
		.lane_reset_i(lane_reset_reg),
		.*
		);	

	always_ff @(posedge clk_i) begin
		lane_vector_reg <= lane_vector_i;
		lane_reset_reg <= lane_reset_i;
	end

endmodule

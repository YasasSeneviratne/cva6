//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/26/2023 03:14:46 PM
// Design Name: Yasas Seneviratne
// Module Name: event_detector
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

module rm_event_router#(
	parameter NUM_LANES	= 	5,
	parameter NUM_EVENTS	= 	10
	)(
	input ariane_pkg::lane_ctrl [NUM_EVENTS-1:0]	events_i,
	output logic [NUM_EVENTS-1:0][NUM_LANES-1:0]	lane_vector_o,
	output logic [NUM_LANES-1:0]			lane_reset_o
	);

	always_comb begin
		lane_vector_o 	= '0;
		lane_reset_o	= '0;

		for(int i=0; i<NUM_EVENTS; i++) begin
			lane_vector_o[i][events_i[i].lane] = events_i[i].probe_val;
			lane_reset_o[events_i[i].lane] = lane_reset_o[events_i[i].lane] | events_i[i].reset_lane;
		end
	end
endmodule

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
	parameter NUM_LANES	        = 	5,
	parameter NUM_EVENTS	        = 	10,
        parameter NUM_MONITORED_INS     = 	2
	)(
	input ariane_pkg::lane_ctrl [NUM_EVENTS-1:0]	events_i,
	output logic [NUM_LANES-1:0][NUM_EVENTS-1:0]	lane_vector_o0,
	output logic [NUM_LANES-1:0][NUM_EVENTS-1:0]	lane_vector_o1,
        output logic [NUM_LANES-1:0][$clog2(NUM_EVENTS)-1:0]    itype1_o,
        output logic [NUM_LANES-1:0]                    valid0_o,
        output logic [NUM_LANES-1:0]                    valid1_o
	);

	always_comb begin
		lane_vector_o0 	= '0;
		lane_vector_o1 	= '0;
                itype1_o        = '0;
                valid0_o        = '0; 
                valid1_o        = '0;
                
		for(int i=0; i<NUM_EVENTS; i++) begin
			if(events_i[i].two_lane) begin
                        	lane_vector_o0[events_i[i].lane0][i] = events_i[i].probe_val; 
                        	lane_vector_o1[events_i[i].lane1][i] = events_i[i].probe_val;
                                
                                itype1_o[events_i[i].lane1]       = events_i[i].itype;
                                valid0_o[events_i[i].lane0]           = valid0_o[events_i[i].lane0] |  events_i[i].probe_val;
                                valid1_o[events_i[i].lane1]           = valid1_o[events_i[i].lane1] | events_i[i].probe_val;
                                
                        end 
                        else begin 
                        	lane_vector_o0[events_i[i].lane0][i] = events_i[i].probe_val; 
                                valid0_o[events_i[i].lane0]           = valid0_o[events_i[i].lane0] | events_i[i].probe_val;
                        end
		end
	end
endmodule

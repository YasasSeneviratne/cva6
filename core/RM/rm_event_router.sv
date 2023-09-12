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
	output logic [NUM_LANES-1:0][NUM_MONITORED_INS-1:0][NUM_EVENTS-1:0]	lane_vector_o,
	output logic [NUM_LANES-1:0]			lane_reset_o
	);

	always_comb begin
		lane_vector_o 	= '0;
		lane_reset_o	= '0;

		for(int i=0; i<NUM_EVENTS; i++) begin
			//lane_vector_o[events_i[i].lane0][events_i[i].itype][i] = events_i[i].probe_val;  
			////lane_reset_o[events_i[i].lane0] = lane_reset_o[events_i[i].lane0] | events_i[i].reset_lane;
			//lane_reset_o[events_i[i].lane0] = lane_reset_o[events_i[i].lane0] | events_i[i].reset_lane;
			if(events_i[i].two_lane) begin
                        	lane_vector_o[events_i[i].lane1][events_i[i].itype][i] = events_i[i].probe_val; 
                                //if(events_i[i].reset_type == 0) begin 
				//lane_reset_o[events_i[i].lane0] = lane_reset_o[events_i[i].lane0] | events_i[i].reset_lane;
		                //end else begin
				lane_reset_o[events_i[i].lane1] = lane_reset_o[events_i[i].lane1] | events_i[i].reset_lane;
                                //end
                         	//lane_vector_o[events_i[i].lane0][events_i[i].itype][i] = '0;  
			        //lane_reset_o[events_i[i].lane0] = 1'b0;
                        

                        end 
                        else begin 
				//NOTE remove else for inter instruction
				lane_vector_o[events_i[i].lane0][events_i[i].itype][i] = events_i[i].probe_val;  
                                //if(events_i[i].reset_type == 0) begin 
				lane_reset_o[events_i[i].lane0] = lane_reset_o[events_i[i].lane0] | events_i[i].reset_lane;
		                //end else begin
				//lane_reset_o[events_i[i].lane1] = lane_reset_o[events_i[i].lane1] | events_i[i].reset_lane;
                                //end
                        end
		end
	end
endmodule

`timescale 1ns / 1ps
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

//it is assumed the variables are single bit long
//when deploying they can be concatinated into one single signal
module rm_event_detector#(
	parameter NUM_VARS=10,
	parameter NUM_LANES=4
	)(
	input [NUM_VARS-1:0]	signal,
	input [NUM_VARS-1:0]	ref_val,
	input [NUM_LANES-1:0]	lane_i,
	input 			monitor_valid,
	output logic		lane_o,
	output logic		probe_o
	);
	
	always_comb begin
		lane_o = lane_i;
		probe_o = 1'b0;
		if(monitor_valid) begin
			probe_o = 1'b1;
			for(int i=0; i<NUM_VARS; i++)
				probe_o = probe_o && (signal[i]==ref_val[i]);
		end
	end
endmodule

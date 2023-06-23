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
	parameter NUM_VARS	=	10,
	parameter NUM_LANES	= 	5,
	parameter LEAF_EVENT	= 	0
	)(
	input [NUM_VARS-1:0]			signal,
	input [NUM_VARS-1:0]			ref_val,
	input ariane_pkg::runtime_monitor_ctrl 	rm_cnt_i,
	input logic				reset_lane_i,
	output ariane_pkg::lane_ctrl 		lane_cnt_o
	);

	logic [$clog2(NUM_LANES)-1:0] 	lane_o;
	logic 			probe_val;
	//logic			reset_lane;
	
	assign lane_cnt_o.probe_val 	= probe_val;
	assign lane_cnt_o.lane		= lane_o;
	assign lane_cnt_o.reset_lane	= (LEAF_EVENT && rm_cnt_i.monitor_ins) ? 1'b1: reset_lane_i;

	always_comb begin
		lane_o  = rm_cnt_i.lane;
		probe_val = 1'b0;
		if (rm_cnt_i.monitor_ins) begin
			probe_val = 1'b1;
			for(int i=0; i<NUM_VARS; i++)
				probe_val = probe_val && (signal[i]==ref_val[i]);
		end
	end

endmodule

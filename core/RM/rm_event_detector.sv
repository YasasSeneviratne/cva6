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
//module rm_event_detector#(
//	parameter NUM_VARS	=	10,
//	parameter NUM_LANES	= 	5,
//	parameter LEAF_EVENT	= 	0
//	)(
//	input [NUM_VARS-1:0]			signal,
//	input [NUM_VARS-1:0]			ref_val,
//	input ariane_pkg::runtime_monitor_ctrl 	rm_cnt_i,
//	input logic				reset_lane_i,
//	input logic 				leaf_reset_trigger, //external signal is needed know when rm cntrol changed in leaf event
//	output ariane_pkg::lane_ctrl 		lane_cnt_o
//	);
//
//	logic [$clog2(NUM_LANES)-1:0] 	lane_o;
//	logic 			probe_val;
//	//logic			reset_lane;
//	
//	assign lane_cnt_o.probe_val 	= probe_val;
//	assign lane_cnt_o.lane		= lane_o;
//	assign lane_cnt_o.reset_lane	= (LEAF_EVENT && rm_cnt_i.monitor_ins && leaf_reset_trigger) ? 1'b1: (( rm_cnt_i.monitor_ins) ? reset_lane_i: 1'b0);
//
//	always_comb begin
//		lane_o  = rm_cnt_i.lane;
//		probe_val = 1'b0;
//		if (rm_cnt_i.monitor_ins) begin
//			probe_val = 1'b1;
//			for(int i=0; i<NUM_VARS; i++)
//				probe_val = probe_val && (signal[i]==ref_val[i]);
//		end
//	end
//
//endmodule

//single pulse per signal
module rm_event_detector#(
	parameter NUM_VARS			=	10,
	parameter NUM_LANES			= 	5,
	parameter NUM_MONITORED_INS		= 	2,
	parameter LEAF_EVENT			= 	0,
        parameter NUM_INS_WITH_THIS_LEAF 	= 	0
	)(
	input					clk_i,
	input					rst_ni,
	input [NUM_VARS-1:0]			signal,
	input [NUM_VARS-1:0]			ref_val,
	input ariane_pkg::runtime_monitor_ctrl 	rm_cnt_i,
	input logic				reset_lane_i,
	input logic 				leaf_reset_trigger, //external signal is needed know when rm cntrol changed in leaf event
        input logic [NUM_INS_WITH_THIS_LEAF-1:0][$clog2(NUM_MONITORED_INS)-1:0] reset_itypes, //The leaf event is only valid for the specifies itypes
	output ariane_pkg::lane_ctrl 		lane_cnt_o
	);

	logic [NUM_LANES-1:0] 	lane_probe_reg;
	logic 			probe_val;
	logic 			probe_val_o;
	logic			reset_o;
	logic			reset_o_reg;
	logic			reset_val;
	logic			valid_leaf_event;
        
	
	assign lane_cnt_o.probe_val 	= probe_val_o;
	assign lane_cnt_o.lane0		= rm_cnt_i.lane0;
	assign lane_cnt_o.lane1		= rm_cnt_i.lane1;
	assign lane_cnt_o.idx		= rm_cnt_i.idx;
	assign lane_cnt_o.two_lane      = rm_cnt_i.two_lane;
	assign lane_cnt_o.reset_lane	= reset_o;
        assign lane_cnt_o.itype         = rm_cnt_i.itype;
        assign lane_cnt_o.reset_type    = rm_cnt_i.monitor_ins & reset_lane_i;


	//assign reset_val         	= (valid_leaf_event && rm_cnt_i.monitor_ins && rm_cnt_i.last_ins && leaf_reset_trigger) ? 1'b1: (( rm_cnt_i.monitor_ins) ? reset_lane_i: 1'b0);
	assign reset_val         	= (valid_leaf_event && rm_cnt_i.monitor_ins && leaf_reset_trigger) ? 1'b1: (( rm_cnt_i.monitor_ins) ? reset_lane_i: 1'b0);

	assign probe_val_o =  (probe_val & ~lane_probe_reg[rm_cnt_i.lane0]);
        assign reset_o     =  reset_val & ~reset_o_reg; 
	

        always_comb begin
		probe_val = 1'b0;
		if (rm_cnt_i.monitor_ins) begin
			probe_val = 1'b1;
			for(int i=0; i<NUM_VARS; i++)
				probe_val = probe_val && (signal[i]==ref_val[i]);
		end
		
		valid_leaf_event = 1'b0;
		if (LEAF_EVENT) begin
                        for(int i=0; i<NUM_INS_WITH_THIS_LEAF; i++) begin
				if (rm_cnt_i.itype == reset_itypes[i])
					valid_leaf_event = 1'b1;
                        end
		end

	end



	always_ff @ (posedge clk_i or negedge rst_ni) begin: regval
	        if (~rst_ni) begin 
	        	lane_probe_reg <= '0;
                        reset_o_reg    <= 1'b0;
	        end
	        else  begin
	        	if(rm_cnt_i.monitor_ins == 1'b1) begin
	        	for(int i=0; i<NUM_LANES; i++) begin 
	        		if(i==rm_cnt_i.lane0)
	        			lane_probe_reg[i] <= probe_val;
	        		else
	        			lane_probe_reg[i] <= 1'b0;
	        	end
	        	end
	        	else begin
	        		lane_probe_reg <= '0; 
                        end
                        reset_o_reg <= reset_val;
	        end
	end 

endmodule

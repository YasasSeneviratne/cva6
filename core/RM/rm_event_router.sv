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
        input                                           clk_i,
        input                                           rst_ni,
	input ariane_pkg::lane_ctrl [NUM_EVENTS-1:0]	events_i,
        input  ariane_pkg::runtime_monitor_ctrl         monitor_i,
	output logic [NUM_LANES-1:0][NUM_MONITORED_INS-1:0][NUM_EVENTS-1:0]	lane_vector_o,
	output logic [NUM_LANES-1:0]			lane_reset_o
	);

        struct packed{
                ariane_pkg::monitored_itype                             itype;
                logic [$clog2(NUM_LANES)-1:0]                           lane0;
                logic [$clog2(NUM_LANES)-1:0]                           lane1;
                logic [1:0]                           			lane_mask;
                logic [$clog2(NUM_LANES)-1:0]                           parent_idx;
                logic                                                   has_parent;
                logic [$clog2(NUM_LANES)-1:0]                           child_idx;
                logic                                                   has_child;
                logic                                                   two_lane;
                logic                                                   valid;
                
        } [NUM_LANES-1:0] lane_mapping_q, lane_mapping_d; //looked up using lane0
        logic [NUM_LANES-1:0][1:0] lane_reset_q, lane_reset_d;
        logic [NUM_LANES-1:0][1:0] lane_mask_q, lane_mask_d;

        logic [NUM_LANES-1:0][$clog2(NUM_LANES)-1:0]                           next_parent;
        //logic [$clog2(NUM_LANES)-1:0]                                          head;
        logic [$clog2(NUM_LANES)-1:0]                                          queue_tail_q, queue_tail_d;
        logic [$clog2(NUM_LANES)-1:0]                                          queue_head;
        //logic                                                                  atleast_1_valid;
        logic [NUM_LANES-1:0]                                                  next_parent_valid;
        logic [NUM_LANES-1:0][$clog2(NUM_LANES)-1:0]                           next_child;
        logic [NUM_LANES-1:0]                                                  next_child_valid;
        logic [NUM_LANES-1:0]                           		       reset_mask;
      

        always_comb begin
                lane_mapping_d = lane_mapping_q;
                queue_tail_d = queue_tail_q;
                lane_reset_d = lane_reset_q;
                lane_mask_d = lane_mask_q;
               
                reset_mask = '0;
                for(int i=0; i<NUM_EVENTS; i++) begin
                      if(events_i[i].reset_lane && lane_mapping_q[events_i[i].idx].valid) begin
                            reset_mask[events_i[i].idx] = 1'b1;
                      end
                end

                

                next_parent = '0;
                next_child  = '0;
                next_parent_valid = '0;
                next_child_valid  = '0;
                for(int i=0; i<NUM_LANES; i++) begin
                      if(lane_mapping_q[i].valid && lane_mapping_q[i].has_parent ) begin
                            automatic logic [$clog2(NUM_LANES)-1:0] c_parent;
                            c_parent = lane_mapping_q[i].parent_idx;
                            for(int j=0; j<NUM_LANES; j++) begin
                                    if(lane_mapping_q[c_parent].valid && !reset_mask[c_parent]) begin
                                          next_parent_valid[i] = 1'b1;
                                          break;
                                    end
                                    if(lane_mapping_q[c_parent].has_parent)
                                          c_parent = lane_mapping_q[c_parent].parent_idx;
                            end
                            next_parent[i] = c_parent;
                      end
                      if(lane_mapping_q[i].valid && lane_mapping_q[i].has_child ) begin
                            automatic logic [$clog2(NUM_LANES)-1:0] c_child;
                            c_child = lane_mapping_q[i].child_idx;
                            for(int j=0; j<NUM_LANES; j++) begin
                                    if(lane_mapping_q[c_child].valid && !reset_mask[c_child]) begin
                                          next_child_valid[i] = 1'b1;
                                          break;
                                    end
                                    if(lane_mapping_q[c_child].has_child)
                                          c_child = lane_mapping_q[c_child].child_idx;
                            end
                            next_child[i]  = c_child;
                      end
                end

                //Restting the lanes and allocations
                for(int i=0; i<NUM_LANES; i++) begin
                      if(lane_reset_q[i] == lane_mask_q[i] && lane_mask_q[i]!=2'b00 )begin
                            lane_reset_d[i] = 2'b00;
                            lane_mask_d[i] = 2'b00;
                      end
                end

		for(int i=0; i<NUM_EVENTS; i++) begin
			if(events_i[i].two_lane) begin
                                if(events_i[i].reset_lane)  begin
                                      lane_reset_d[lane_mapping_q[events_i[i].idx].lane0][0] = 1'b1;
                                      lane_reset_d[lane_mapping_q[events_i[i].idx].lane1][1] = 1'b1;
                                end 
                        end 
                        else begin 
                                if(events_i[i].reset_lane) 
                                      lane_reset_d[lane_mapping_q[events_i[i].idx].lane0][0] = 1'b1;
                        end

		end
                ////////////////////////////////////

                for(int i=0; i<NUM_LANES; i++) begin
                      if(reset_mask[i]) begin
                            lane_mapping_d[i] = '0;

                            if (next_parent_valid[i] && next_child_valid[i]) begin
                                  lane_mapping_d[next_parent[i]].has_child = 1'b1;
                                  lane_mapping_d[next_parent[i]].child_idx = next_child[i];

                                  lane_mapping_d[next_child[i]].has_parent = 1'b1;
                                  lane_mapping_d[next_child[i]].parent_idx = next_parent[i];

                                  if(lane_mapping_q[next_parent[i]].two_lane) begin
                                      lane_reset_d[lane_mapping_d[next_child[i]].lane0][0]  = 1'b1;
                                      lane_reset_d[lane_mapping_d[next_parent[i]].lane1][0]  = 1'b0;
                             
                                      lane_mapping_d[next_child[i]].lane0 = lane_mapping_q[next_parent[i]].lane1;
                                  end
                                  else begin
                                      lane_reset_d[lane_mapping_d[next_child[i]].lane0][0]  = 1'b1;
                                      lane_reset_d[lane_mapping_d[next_parent[i]].lane0][0]  = 1'b0;

                                      lane_mapping_d[next_child[i]].lane0 = lane_mapping_q[next_parent[i]].lane0;
                                  end
                                  
                            end 
                            else if (next_parent_valid[i] && !next_child_valid[i]) begin
                                  lane_mapping_d[next_parent[i]].has_child = 1'b0;
                                  lane_mapping_d[next_parent[i]].child_idx = '0;

                                  lane_mapping_d[next_parent[i]].two_lane = 1'b0;

                                  lane_mapping_d[next_parent[i]].lane0 = 1'b0;

                            end
                            else if (!next_parent_valid[i] && next_child_valid[i]) begin
                                  lane_mapping_d[next_child[i]].has_parent = 1'b0;
                                  lane_mapping_d[next_child[i]].parent_idx = '0;

                                  //if(lane_mapping_d[next_child[i]].two_lane){ //This shouldnt be a check
                                      lane_mapping_d[next_child[i]].lane0 = lane_mapping_q[next_child[i]].lane1;  
                                      lane_mapping_d[next_child[i]].lane1 = '0;
                                  //}
  
                                  lane_mapping_d[next_child[i]].two_lane = 1'b0;
                                  
                            end
                      end
                end

                if(reset_mask[queue_tail_q] && next_parent_valid[queue_tail_q]) begin
                      queue_tail_d = next_parent[queue_tail_q];
                end
                

                queue_head = queue_tail_q;
                for(int i=0; i<NUM_LANES; i++) begin
                      if(lane_mapping_q[queue_head].valid && lane_mapping_q[queue_head].has_parent)
                              queue_head = lane_mapping_q[queue_head].parent_idx;
                      else
                              break;
                end
                 

                if(monitor_i.monitor_ins) begin
                      lane_mapping_d[monitor_i.idx].itype = monitor_i.itype;
                      lane_mapping_d[monitor_i.idx].lane0 = monitor_i.lane0;
                      lane_mapping_d[monitor_i.idx].lane1 = monitor_i.lane1;
                      lane_mapping_d[monitor_i.idx].two_lane = monitor_i.two_lane;


                      if(monitor_i.two_lane) begin
                            lane_mapping_d[monitor_i.idx].lane_mask = 2'b11;
                            lane_mapping_d[monitor_i.idx].has_child =  1'b0;
                            lane_mapping_d[monitor_i.idx].has_parent = 1'b1;
                            lane_mapping_d[monitor_i.idx].parent_idx = monitor_i.p_idx;
                            
                            lane_mapping_d[monitor_i.p_idx].child_idx = monitor_i.idx;
                            lane_mapping_d[monitor_i.p_idx].has_child = 1'b1;

                            lane_mask_d[monitor_i.lane0] = 2'b01 | lane_mask_q[monitor_i.lane0];
                            lane_mask_d[monitor_i.lane1] = 2'b10 | lane_mask_q[monitor_i.lane1];
                              
                      end
                      else if(!reset_mask[queue_tail_d] && lane_mapping_q[queue_tail_d].valid) begin
                            lane_mapping_d[monitor_i.idx].lane_mask = 2'b01;
                            lane_mapping_d[monitor_i.idx].parent_idx = queue_tail_d;
                            lane_mapping_d[monitor_i.idx].has_parent = 1'b1;
                            lane_mapping_d[monitor_i.idx].has_child =  1'b0;
 
                            lane_mapping_d[queue_tail_d].has_child = 1'b1;
                            lane_mapping_d[queue_tail_d].child_idx = monitor_i.idx;
 
                            lane_mask_d[monitor_i.lane0] = 2'b01;
                      end
                      else begin
                            lane_mapping_d[monitor_i.idx].lane_mask = 2'b01;
                            lane_mapping_d[monitor_i.idx].has_child =  1'b0;
                            lane_mapping_d[monitor_i.idx].has_parent =  1'b0;

                            lane_mask_d[monitor_i.lane0] = 2'b01;
                      end
                      queue_tail_d = monitor_i.idx;
                      lane_mapping_d[monitor_i.idx].valid = 1'b1;
                end

 
                //for(int i=0; i<NUM_LANES; i++) begin
                //      if(lane_reset_q[i] == lane_mask_q[i] && lane_mask_q[i]!=2'b00 )begin
                //            lane_reset_d[i] = 2'b0;
                //            lane_mask_d[i] = 2'b0;
                //      end
                //end
        end
   
        // probe value and reset routing
	always_comb begin
		lane_vector_o 	= '0;
		lane_reset_o	= '0;

		for(int i=0; i<NUM_EVENTS; i++) begin
			if(events_i[i].two_lane) begin
                        	lane_vector_o[lane_mapping_q[events_i[i].idx].lane0][lane_mapping_q[events_i[i].idx].itype][i] = events_i[i].probe_val; 
                        	lane_vector_o[lane_mapping_q[events_i[i].idx].lane1][lane_mapping_q[events_i[i].idx].itype][i] = events_i[i].probe_val; 
                        end 
                        else begin 
                        	lane_vector_o[lane_mapping_q[events_i[i].idx].lane0][lane_mapping_q[events_i[i].idx].itype][i] = events_i[i].probe_val; 
                        end

		end

                for(int i=0; i<NUM_LANES; i++) begin
                      if(lane_reset_q[i] == lane_mask_q[i] && lane_mask_q[i]!= 2'b00)
                            lane_reset_o[i] = 1'b1; 
                end
	end
        

        always_ff @(posedge clk_i or negedge rst_ni) begin 
                if (~rst_ni) begin
                       lane_mapping_q <= '0;
                       queue_tail_q <= 1'b0;
                       lane_reset_q <= '0;
                       lane_mask_q <= '0;
                end
                else begin
                       lane_mapping_q <= lane_mapping_d;
                       queue_tail_q <= queue_tail_d;
                       lane_reset_q <= lane_reset_d;
                       lane_mask_q <= lane_mask_d;

                       //for(int i=0; i<NUM_LANES; i++) begin
                       //      if(lane_reset_q[i] == lane_mask_q[i] && lane_mask_q[i]!=2'b00 )begin
                       //            lane_reset_q[i] <= 2'b0;
                       //            lane_mask_q[i] <= 2'b0;
                       //      end
                       //end
                end
        end 
endmodule

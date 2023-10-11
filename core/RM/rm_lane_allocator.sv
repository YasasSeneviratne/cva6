//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 05/27/2023 09:02:42 AM
// Design Name: 
// Module Name: rm_lane_allocator
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

module rm_lane_allocator#(
	parameter NUM_LANES=4,
	parameter NUM_EVENTS=10,
        parameter NUM_MONITORED_INS = 2
	)(
	input 						clk_i,
	input 						rst_ni,
	input [6:0]					opcode,
	input  logic [riscv::VLEN-1:0]    		pc_i,
	input  logic                         		entry_queued_i, 
	input ariane_pkg::lane_ctrl	[NUM_EVENTS-1:0]	reset_monitor, //reset monitor ctrl
	input logic					flush_i,	
	output logic [NUM_LANES-1:0]			lane_reset_o,
	output logic [NUM_LANES-1:0]			hault_lane_o,
	//input 						commit_ack,
	output ariane_pkg::runtime_monitor_ctrl		monitor_o	
	);
       
        ariane_pkg::monitored_itype 			itype_o;
	logic						monitor;
        //To gurantee ordering alloc_mem == 10 must be prioratized
	logic [$clog2(NUM_LANES)-1:0]			lane0_o; 
	logic [$clog2(NUM_LANES)-1:0]			lane1_o; 
	logic [$clog2(NUM_LANES)-1:0]			lane_o_00; 
	logic [$clog2(NUM_LANES)-1:0]			lane_o_01;
	logic [$clog2(NUM_LANES)-1:0]			prev_01_lane_d, prev_01_lane_q;
	logic						has_01_lane;
	logic						two_lane_o;
	logic						last_ins_o;

	logic [NUM_LANES-1:0][1:0]			alloc_mem_q, alloc_mem_d; //Each lane is allocated two instruction 
	logic [NUM_LANES-1:0][1:0]			reset_mem,reset_mem_d; //Each lane is allocated two instruction 
	logic [NUM_LANES-1:0][1:0][riscv::VLEN-1:0]	pc_mem_q, pc_mem_d;
	logic						some_lane_reset;
	logic [NUM_LANES-1:0]				nxt_reset_lane_mask;
	logic [NUM_LANES-1:0]				active_lane_mask;
	logic [NUM_LANES-1:0][$clog2(NUM_LANES)-1:0]	active_lane_queue_q, active_lane_queue_d;
	logic [NUM_LANES-1:0]				tp;
	logic [$clog2(NUM_LANES)-1:0]			nxt_reset_lane;
	logic						all_lanes_occupied; //All lanes are full except one slot
	logic						untracked_ordering_flag;
	
        //logic [$clog2(2*NUM_LANES)-1:0]			active_lane_count_d, active_lane_count_q;
        //logic [$clog2(NUM_LANES)-1:0]			single_lane_count_d, single_lane_count_q;
        logic [31:0] tmp_cnt;

	assign monitor_o.lane0 			= lane0_o;//(some_lane_reset  && monitor && &alloc_mem)? nxt_reset_lane_mask: ((monitor)? lane_o_00: '0);
	assign monitor_o.lane1 			= lane1_o;
        //assign monitor_o.two_lane               = (has_01_lane && ~nxt_reset_lane_mask[lane_o_01]) ; // if the allocation is happaning to 1st location then that instrucion will be in two lanes
        assign monitor_o.two_lane               = two_lane_o;// (has_01_lane  && ~nxt_reset_lane_mask[lane_o_01]);// || (nxt_reset_lane_mask[prev_01_lane] ||  alloc_mem[prev_01_lane][0]) ) ; // if the allocation is happaning to 1st location then that instrucion will be in two lanes
	assign monitor_o.monitor_ins 		= monitor;     
	assign monitor_o.pc 			= pc_i;     
        assign monitor_o.itype                  = itype_o;
        assign monitor_o.last_ins               = '0;
        assign monitor_o.tmp_cnt               = tmp_cnt;

	logic overflow;

	assign overflow = monitor && all_lanes_occupied && ~some_lane_reset;
        assign untracked_ordering_flag = monitor && !flush_i  && !two_lane_o && |(active_lane_mask & ~nxt_reset_lane_mask);

        assign some_lane_reset = |nxt_reset_lane_mask;
        //assign lane0_o = (monitor && has_01_lane)? lane_o_01 : ((monitor)? lane_o_00 : '0)  ;
        //assign lane1_o = (monitor && has_01_lane)? lane_o_00 : '0;
        //assign lane0_o = (monitor && has_01_lane)? lane_o_01 : ((monitor)? lane_o_00 : '0)  ;
        //assign lane1_o = (monitor && has_01_lane)? lane_o_00 : '0;
        //assign two_lane_o = (monitor && has_01_lane)? 1'b1 : 1'b0;

        //assign untracked_ordering_flag = (active_lane_count > 1) && monitor && !(has_01_lane && ~nxt_reset_lane_mask[lane_o_01]);// && (pc_mem[lane_o_00] != pc_mem[lane_o_01]);
        //assign untracked_ordering_flag = (active_lane_count_q > 1) && (active_lane_count_q%2)  == 1 && active_lane_count_d == active_lane_count_q + 2;// && (pc_mem[lane_o_00] != pc_mem[lane_o_01]);

        logic tmp2;
        assign tmp2  = &((alloc_mem_q[1] ~^ (reset_mem[1] | reset_mem_d[1]))) && alloc_mem_q[1] != 2'b00;
	//logic [NUM_LANES-1:0]			lane_reset_o;
	assign lane_reset_o = nxt_reset_lane_mask;
 
	//logic [NUM_LANES-1:0]			hault_lane_o;
       
        /////////////////////////////////
        // For debuging
        logic [NUM_EVENTS-1:0] reset_lanes_debug;
        always_comb begin
                reset_lanes_debug = '0;
		for(int i=0; i<NUM_EVENTS; i++) begin
			if (reset_monitor[i].reset_lane) begin 
                               reset_lanes_debug[i] = 1'b1;
                        end
		end
        end
        ///////////////////////////////// 

	always_comb begin
                reset_mem_d = reset_mem;
	//check if the instuction is monitored and identify instruction type
                itype_o  = ariane_pkg::SW_RM;
	        lane0_o  = '0;
	        lane1_o  = '0;
            	monitor = 1'b0;
                //single_lane_count_d = single_lane_count_q;
                alloc_mem_d = alloc_mem_q;
                pc_mem_d = pc_mem_q;
                prev_01_lane_d = prev_01_lane_q;
                active_lane_queue_d = active_lane_queue_q;

               // for(int i=0; i<NUM_LANES; i++) begin
                      
               // end
                //nxt_reset_lane_mask = tp;
		if(entry_queued_i && !flush_i) begin
                	case(opcode)
                	    riscv::OpcodeStore:begin
                	        itype_o = ariane_pkg::SW_RM;
			        monitor = 1'b1;
                            end
                	    riscv::OpcodeLoad:begin
                	        itype_o = ariane_pkg::LW_RM; 
			        monitor = 1'b1;
                            end
                	endcase
                end



                all_lanes_occupied = 1'b1;
                active_lane_mask = '0;
                //active_lane_count_d  = '0;
                for(int i=0; i<NUM_LANES; i++) begin
                        all_lanes_occupied = alloc_mem_q[i][0] &  all_lanes_occupied;
                        if(alloc_mem_q[i][0])
                              active_lane_mask[i] =  1'b1;
                //        if(alloc_mem[i][1])
                //              active_lane_count_d = active_lane_count_d + 1;
                end
             

		for(int i=0; i<NUM_EVENTS; i++) begin
			if (reset_monitor[i].reset_lane) begin
                                if(reset_monitor[i].two_lane) begin
                                      if(alloc_mem_q[reset_monitor[i].lane0][0])
                                          reset_mem_d[reset_monitor[i].lane0][0]    = 1'b1;
                                      if(alloc_mem_q[reset_monitor[i].lane1][1])
                                          reset_mem_d[reset_monitor[i].lane1][1]    = 1'b1;
                                end
                                else if (alloc_mem_q[reset_monitor[i].lane0][0])begin
                                      reset_mem_d[reset_monitor[i].lane0][0]    = 1'b1;
                                end
                        end
		end

                nxt_reset_lane_mask = '0;
                for(int i=0; i<NUM_LANES; i++) begin
                  	//if(&(~(alloc_mem_q[i] ^ (reset_mem[i] | reset_mem_d[i]))) && alloc_mem_q[i] != 2'b00)
                  	if(&((alloc_mem_q[i] ~^ (reset_mem[i]))) && alloc_mem_q[i] != 2'b00)
                                nxt_reset_lane_mask[i] = 1'b1;
                end
              

                nxt_reset_lane = '0;
		for(int i=0; i<NUM_LANES; i++) begin
			if(nxt_reset_lane_mask[i]) begin
                                nxt_reset_lane = i;
				break;
			end	
		end
        //We will hault monitoring if the preceding instruction gets flused 
                hault_lane_o = '0;
                for(int i=0; i<NUM_LANES; i++) begin
                  	if(alloc_mem_q[i] == 2'b11 &&  (reset_mem[i] == 2'b01 || reset_mem_d[i] == 2'b01) )
                                hault_lane_o[i] = 1'b1;
                        //if no instruction is allocated dont run the monitors
                        if(alloc_mem_q[i] == 2'b00)
                                hault_lane_o[i] = 1'b1;
                end
        //find next available lane for the monitored instruction
		lane_o_00 = '0;
		for(int i=0; i<NUM_LANES; i++) begin
			if(alloc_mem_q[i]==2'b00 || nxt_reset_lane_mask[i]) begin
			//if(alloc_mem[i]==2'b00 ) begin
				lane_o_00 = i;
				break;
			end
		end

		lane_o_01 = '0;
                has_01_lane = 1'b0;
		for(int i=0; i<NUM_LANES; i++) begin
			if(alloc_mem_q[i]==2'b01) begin
				lane_o_01 = i;
                                has_01_lane = 1'b1;
				break;
			end
		end

        //find previous 01 lane
                for(int i=NUM_LANES-1; i>=0; i--) begin
                    if(!nxt_reset_lane_mask[prev_01_lane_d]) begin
                          break;
                    end
                    prev_01_lane_d = active_lane_queue_q[i];
                end

                for(int i=0; i<NUM_LANES; i++) begin
                        if(nxt_reset_lane_mask[i]) begin
                                reset_mem_d[i]                    = 2'b00;
                                alloc_mem_d[i]                    = 2'b00;
                                pc_mem_d[i]                       = '0;
                        end
                end
                two_lane_o = 1'b0;
		if(monitor  && ~flush_i && ~all_lanes_occupied) begin
                        if(has_01_lane && nxt_reset_lane_mask[lane_o_01]) begin
				alloc_mem_d[lane_o_01][0] 	= 1'b1;
				pc_mem_d[lane_o_01][0]		= pc_i;
                                
                                lane0_o = lane_o_01;
                                if(!nxt_reset_lane_mask[prev_01_lane_d] && alloc_mem_q[prev_01_lane_d][0]) begin
                                      alloc_mem_d[prev_01_lane_d][1] 	= 1'b1;
				      pc_mem_d[prev_01_lane_d][1]	= pc_i;
                                      reset_mem_d[prev_01_lane_d][1]    = 1'b0;

                                      lane1_o = prev_01_lane_d;
                                      two_lane_o = 1'b1;
                                end
                        end
                        else if (has_01_lane) begin
				alloc_mem_d[lane_o_01][1] 	= 1'b1;
				pc_mem_d[lane_o_01][1]		= pc_i;
				
                                alloc_mem_d[lane_o_00][0] 	= 1'b1;
				pc_mem_d[lane_o_00][0]		= pc_i;
                                
                                lane0_o = lane_o_00;
                                lane1_o = lane_o_01;
                                prev_01_lane_d = lane_o_01;
 
                                 
                                two_lane_o = 1'b1;

                        end
                        else if(alloc_mem_q[prev_01_lane_d][0]) begin
				alloc_mem_d[lane_o_00][0] 	= 1'b1;
				pc_mem_d[lane_o_00][0]		= pc_i;

                                lane0_o = lane_o_00;
                                if(!nxt_reset_lane_mask[prev_01_lane_d]) begin
                                      alloc_mem_d[prev_01_lane_d][1] 	= 1'b1;
				      pc_mem_d[prev_01_lane_d][1]	= pc_i;
                                      reset_mem_d[prev_01_lane_d][1]    = 1'b0;

                                      lane1_o = prev_01_lane_d;
                                      two_lane_o = 1'b1;
                                end
                                
                        end
                        else  begin
				alloc_mem_d[lane_o_00][0] 	= 1'b1;
				pc_mem_d[lane_o_00][0]		= pc_i;

                                lane0_o = lane_o_00;
		        end
		end
		//if all lanes are filled but there is a lane to be reset next cycle and 
		//current instruction need to be monitord then  assign that lane to incomming insctuction
                if (|nxt_reset_lane_mask && monitor && all_lanes_occupied && ~flush_i) begin
				alloc_mem_d[lane_o_01][1] 	= 1'b1;
				pc_mem_d[lane_o_01][1]		= pc_i;
				
                                alloc_mem_d[nxt_reset_lane][0] 	= 1'b1;
				pc_mem_d[nxt_reset_lane][0]	= pc_i;

                                two_lane_o = 1'b1;
                end	

                if (two_lane_o) begin
                      for(int i=0; i<NUM_LANES-1; i++) begin
                            active_lane_queue_d[i] = active_lane_queue_q[i+1];
                      end
                      active_lane_queue_d[NUM_LANES-1] = lane1_o;
                end
	end

        
	
	always_ff @(posedge clk_i or negedge rst_ni) begin: set_alloc
		if (~rst_ni) begin
			for(int i=0; i<NUM_LANES; i++) begin
				alloc_mem_q[i]	<= '0;
				pc_mem_q[i]	<= '0;
				reset_mem[i]	<= '0;
			end
                        tmp_cnt <= '0;
                        prev_01_lane_q <= '0;
                        active_lane_queue_q <= '0;
		end else begin
                        tmp_cnt <= tmp_cnt + 32'd1;
                        prev_01_lane_q <= prev_01_lane_d;
                        active_lane_queue_q <= active_lane_queue_d;
                        reset_mem <= reset_mem_d;
                        alloc_mem_q <= alloc_mem_d;
                        pc_mem_q <= pc_mem_d;
                end
	end
endmodule

module rm_tb_top_routerlinkedlist #(
	parameter NUM_EVENTS		= 	8, //Do not change parameters
	parameter NUM_LANES		= 	7,
	parameter NUM_RULES		= 	10,
	parameter NUM_MONITORED_INS     =       2
	)(
	input 				clk_i,
	input 				rst_ni_tb,
	input [NUM_EVENTS-1:0]		signal_tb, //random event signal
	input [NUM_EVENTS-1:0]		reset_lane_i_tb,
	input [riscv::VLEN-1:0]	    	pc_i_tb,
	input  				enque_ins_tb,
	input [6:0]			opcode_i_tb,
        output logic [NUM_EVENTS-1:0][NUM_MONITORED_INS-1:0][NUM_LANES-1:0]    lane_vector,
        output logic [NUM_LANES-1: 0][NUM_RULES-1:0]    monitor_o, 
	output logic [NUM_LANES-1:0]   lane_reset,
      
        output ariane_pkg::monitored_itype [NUM_LANES-1:0]                            itype,
        output logic [NUM_LANES-1:0][$clog2(NUM_LANES)-1:0]                           lane0,
        output logic [NUM_LANES-1:0][$clog2(NUM_LANES)-1:0]                           lane1,
        output logic [NUM_LANES-1:0][1:0]                                             lane_mask,
        output logic [NUM_LANES-1:0][$clog2(NUM_LANES)-1:0]                           parent_idx,
        output logic [NUM_LANES-1:0]                                                  has_parent,
        output logic [NUM_LANES-1:0][$clog2(NUM_LANES)-1:0]                           child_idx,
        output logic [NUM_LANES-1:0]                                                  has_child,
        output logic [NUM_LANES-1:0]                                                  valid,

        output logic [NUM_LANES-1:0]                                                  list_reset_mask,

        output logic                                                                  monitor_ins,     
        output logic [2:0]                                                            next_idx,           

        output int num_events,
        output int num_lanes,
        output int num_rules,
        output int test_type
	);

        assign num_events = NUM_EVENTS;
        assign num_lanes = NUM_LANES;
        assign num_rules = NUM_RULES;
        assign test_type = 1; 

	ariane_pkg::lane_ctrl [NUM_EVENTS-1: 0]        rm_event_o;

	ariane_pkg::runtime_monitor_ctrl	[NUM_EVENTS-1:0] rm_cnt;
	ariane_pkg::runtime_monitor_ctrl	rm_cnt_o;



	//Input sygnals must be sunchronoized to observe correct behaviour

	logic				rst_ni;
	logic [NUM_EVENTS-1:0]		signal;
	logic [NUM_EVENTS-1:0]		reset_lane_i;
	logic [riscv::VLEN-1:0]    	pc_i;
	logic 				enque_ins;
	logic [6:0]			opcode_i;

	always_ff @(posedge clk_i) begin
		rst_ni		<= rst_ni_tb;
		signal		<= signal_tb;
		reset_lane_i	<= reset_lane_i_tb;
		pc_i 		<= pc_i_tb;
		enque_ins	<= enque_ins_tb;
		opcode_i	<= opcode_i_tb;
	end
	/////////////////////////////////////////////////
	
        // output assignment
        assign list_reset_mask = router.reset_mask;
        assign monitor_ins = rm_cnt_o.monitor_ins;
        assign next_idx = rm_cnt_o.idx;
        always_comb begin
               for(int i=0; i<NUM_LANES; i++) begin
                    itype[i] 		= router.lane_mapping_d[i].itype;
                    lane0[i] 		= router.lane_mapping_d[i].lane0;
                    lane1[i] 		= router.lane_mapping_d[i].lane1;
                    lane_mask[i] 	= router.lane_mapping_d[i].lane_mask;
                    parent_idx[i] 	= router.lane_mapping_d[i].parent_idx;
                    has_parent[i] 	= router.lane_mapping_d[i].has_parent;
                    child_idx[i] 	= router.lane_mapping_d[i].child_idx;
                    has_child[i] 	= router.lane_mapping_d[i].has_child;
                    valid[i] 		= router.lane_mapping_d[i].valid;
               end

        end

        //Control signal propergation

	always_ff @(posedge clk_i , negedge rst_ni) begin
		if (!rst_ni) begin
			rm_cnt <= '0;
		end 
		else begin
			for (int i=0; i<6; i++) begin
				rm_cnt[i+1] <= rm_cnt[i];
			end
			rm_cnt[0] <= rm_cnt_o;
		end		
	end


        //pipeline architecture
        //
        //   stage0    stage1    stage2      stage3      stage4       stage5
        //                 
        //   | edA |                         | edE |
        //             | edC |   | edD |                 | edG |      | edH |
        //   | edB |                         | edF |
        // 
 

	// Event detectors

	//Stage 0
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(0)
	)
	edA (
	.signal(signal[0]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[0]),
        .leaf_reset_trigger(1'b0),
	.reset_itypes(1'b0),
	.lane_cnt_o(rm_event_o[0]),
	.reset_lane_i(reset_lane_i[0])
	);	

		
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(0)
	)
	edB (
	.signal(signal[1]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[0]),
        .leaf_reset_trigger(1'b0),
	.reset_itypes(1'b0),
	.lane_cnt_o(rm_event_o[1]),
	.reset_lane_i(reset_lane_i[0])
	);	
	
	//Stage 1
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(0)
	)
	edC (
	.signal(signal[2]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[1]),
        .leaf_reset_trigger(1'b0),
	.reset_itypes(1'b0),
	.lane_cnt_o(rm_event_o[2]),
	.reset_lane_i(reset_lane_i[1])
	);	

	//Stage 2
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(0)
	)
	edD (
	.signal(signal[3]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[2]),
        .leaf_reset_trigger(1'b0),
	.reset_itypes(1'b0),
	.lane_cnt_o(rm_event_o[3]),
	.reset_lane_i(reset_lane_i[2])
	);

	//Stage 3
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(0)
	)
	edE (
	.signal(signal[4]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[3]),
        .leaf_reset_trigger(1'b1),
	.reset_itypes(1'b0),
	.lane_cnt_o(rm_event_o[4]),
	.reset_lane_i(reset_lane_i[3])
	);
	
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(0)
	)
	edF (
	.signal(signal[5]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[3]),
        .leaf_reset_trigger(1'b1),
	.reset_itypes(1'b0),
	.lane_cnt_o(rm_event_o[5]),
	.reset_lane_i(reset_lane_i[3])
	);	

	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.LEAF_EVENT(1),
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(1)
	)
	edG (
	.signal(signal[6]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[4]),
        .leaf_reset_trigger(1'b1),
	.reset_itypes(ariane_pkg::LW_RM),
	.lane_cnt_o(rm_event_o[6]),
	.reset_lane_i(reset_lane_i[4])
	);	

	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.LEAF_EVENT(1),
	.NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(1)
	)
	edH (
	.signal(signal[7]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[5]),
        .leaf_reset_trigger(1'b1),
	.reset_itypes(ariane_pkg::SW_RM),
	.lane_cnt_o(rm_event_o[7]),
	.reset_lane_i(reset_lane_i[5])
	);	

	//-----------------------------------------
	rm_lane_allocator #(
	.NUM_LANES,
	.NUM_EVENTS
	)
	rm_alloc (
	.clk_i,
	.rst_ni,
	.opcode	(opcode_i),
	.pc_i,
	.reset_monitor (rm_event_o),
	.entry_queued_i (enque_ins),
	.monitor_o (rm_cnt_o)
	);


	rm_event_router #(
	.NUM_LANES,
	.NUM_EVENTS
	)
	router (
        .clk_i,
        .rst_ni,
        .monitor_i(rm_cnt_o),
	.events_i	(rm_event_o),
	.lane_vector_o (lane_vector),
	.lane_reset_o (lane_reset)
	);
	
	rm_monitor  #(
	.NUM_LANES,
	.NUM_EVENTS, 
	.NUM_RULES
	)	
	rm(
	.clk_i,
	.rst_ni,
	.lane_vector_i(lane_vector),
	.lane_reset_i(lane_reset),
	.monitor_o
	);
	

endmodule

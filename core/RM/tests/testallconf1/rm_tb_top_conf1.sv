module rm_tb_top #(
	parameter NUM_EVENTS		= 	6,  //Dont change any of the parameters
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

	output logic [NUM_LANES-1:0][NUM_MONITORED_INS-1:0][NUM_EVENTS-1:0]	lane_vector,
	output logic [NUM_LANES-1: 0][NUM_RULES-1:0]	monitor_o,
	output logic [NUM_LANES-1:0]   lane_reset,
        output int num_events,
        output int num_lanes,
        output int num_rules,
        output int test_type
	);

        assign num_events = NUM_EVENTS;
        assign num_lanes = NUM_LANES;
        assign num_rules = NUM_RULES;
        assign test_type = 0;

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
	
	always_ff @(posedge clk_i , negedge rst_ni) begin
		if (!rst_ni) begin
			rm_cnt <= '0;
		end 
		else begin
			for (int i=0; i<NUM_EVENTS-1; i++) begin
				rm_cnt[i+1] <= rm_cnt[i];
			end
			rm_cnt[0] <= rm_cnt_o;
		        //in cof1 number of lanes == events therfore	
                        for (int i=0; i<NUM_EVENTS; i++) begin
                                if(reset_lane_i[i])
				     rm_cnt[i+1] <= '0;
			end
		end		
	end


	genvar i;
	generate
		for(i=0; i<NUM_EVENTS-1; i++) begin
			rm_event_detector #(
			.NUM_VARS(1),
			.NUM_LANES,
        		.NUM_MONITORED_INS(2),
			.NUM_INS_WITH_THIS_LEAF(0)
			)
			ev (
			.signal(signal[i]),
			.ref_val(1'b1),
			.rm_cnt_i(rm_cnt[i]),
                        .leaf_reset_trigger(1'b0),
			.reset_itypes(1'b0),
			.lane_cnt_o(rm_event_o[i]),
			.reset_lane_i(reset_lane_i[i])
			);	
		end
	endgenerate
	

	
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.LEAF_EVENT(1),
        .NUM_MONITORED_INS(2),
	.NUM_INS_WITH_THIS_LEAF(2)
	)
	ev (
	.signal(signal[NUM_EVENTS-1]),
	.ref_val(1'b1),
        .leaf_reset_trigger(1'b1),
	.reset_itypes({ariane_pkg::SW_RM,ariane_pkg::LW_RM}),
	.rm_cnt_i(rm_cnt[NUM_EVENTS-1]),
	.lane_cnt_o(rm_event_o[NUM_EVENTS-1]),
	.reset_lane_i(reset_lane_i[NUM_EVENTS-1])
	);	


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
	.events_i	(rm_event_o),
        .monitor_i(rm_cnt_o),
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

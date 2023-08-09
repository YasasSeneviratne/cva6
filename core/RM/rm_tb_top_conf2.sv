module rm_tb_top #(
	parameter NUM_EVENTS	= 6,
	parameter NUM_LANES	= 4,
	parameter NUM_RULES	= 5
	)(
	input 				clk_i,
	input 				rst_ni_tb,
	input [NUM_EVENTS-1:0]		signal_tb, //random event signal
	input [NUM_EVENTS-1:0]		reset_lane_i_tb,
	input [riscv::VLEN-1:0]	    	pc_i_tb,
	input  				enque_ins_tb,
	input [6:0]			opcode_i_tb,

	output logic [NUM_EVENTS-1:0]	lane_vector_0,
	output logic [NUM_EVENTS-1:0]	lane_vector_1,
	output logic [NUM_EVENTS-1:0]	lane_vector_2,
	output logic [NUM_EVENTS-1:0]	lane_vector_3,
	
	output logic [NUM_RULES-1:0]	monitor_o_0,
	output logic [NUM_RULES-1:0]	monitor_o_1,
	output logic [NUM_RULES-1:0]	monitor_o_2,
	output logic [NUM_RULES-1:0]	monitor_o_3,
	
	output logic [NUM_LANES-1:0]   lane_reset,
	output logic [NUM_LANES-1:0]   lane_reset_0,
	output logic [NUM_LANES-1:0]   lane_reset_1,
	output logic [NUM_LANES-1:0]   lane_reset_2,
	output logic [NUM_LANES-1:0]   lane_reset_3
	);

	ariane_pkg::lane_ctrl [NUM_EVENTS-1: 0]        rm_event_o;

	ariane_pkg::runtime_monitor_ctrl	[NUM_EVENTS-1:0] rm_cnt;
	ariane_pkg::runtime_monitor_ctrl	rm_cnt_o;

	logic [NUM_LANES-1: 0][NUM_RULES-1:0]	monitor_o;
	logic [NUM_EVENTS-1:0][NUM_LANES-1:0]	lane_vector;
	//logic [NUM_LANES-1:0]			lane_reset;


	//--------- SIMULATION SUPPORT---------------
	//Indexing not supported in verilator :(
	assign lane_vector_0 = lane_vector[0];
	assign lane_vector_1 = lane_vector[1];
	assign lane_vector_2 = lane_vector[2];
	assign lane_vector_3 = lane_vector[3];

	assign monitor_o_0 = monitor_o[0];
	assign monitor_o_1 = monitor_o[1];
	assign monitor_o_2 = monitor_o[2];
	assign monitor_o_3 = monitor_o[3];

	assign lane_reset_0 = lane_reset[0];	
	assign lane_reset_1 = lane_reset[1];	
	assign lane_reset_2 = lane_reset[2];	
	assign lane_reset_3 = lane_reset[3];	
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
			for (int i=0; i<4; i++) begin
				rm_cnt[i+1] <= rm_cnt[i];
			end
			rm_cnt[0] <= rm_cnt_o;
		end		
	end


	// Event detectors

	//Stage 0
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES
	)
	edA (
	.signal(signal[0]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[0]),
	.lane_cnt_o(rm_event_o[0]),
	.reset_lane_i(reset_lane_i[0])
	);	

		
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES
	)
	edB (
	.signal(signal[1]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[0]),
	.lane_cnt_o(rm_event_o[1]),
	.reset_lane_i(reset_lane_i[0])
	);	
	
	//Stage 1
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES
	)
	edC (
	.signal(signal[2]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[1]),
	.lane_cnt_o(rm_event_o[2]),
	.reset_lane_i(reset_lane_i[1])
	);	

	//Stage 2
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES
	)
	edD (
	.signal(signal[3]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[2]),
	.lane_cnt_o(rm_event_o[3]),
	.reset_lane_i(reset_lane_i[2])
	);

	//Stage 3
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES
	)
	edE (
	.signal(signal[4]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[3]),
	.lane_cnt_o(rm_event_o[4]),
	.reset_lane_i(reset_lane_i[3])
	);
	
	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.LEAF_EVENT(1)
	)
	edF (
	.signal(signal[5]),
	.ref_val(1'b1),
	.rm_cnt_i(rm_cnt[3]),
	.lane_cnt_o(rm_event_o[5]),
	.reset_lane_i(reset_lane_i[3])
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

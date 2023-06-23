module rm_tb_top #(
	parameter NUM_EVENTS	= 6,
	parameter NUM_LANES	= 4
	)(
	input logic				clk_i,
	input logic				rst_ni,
	input [NUM_EVENTS-1:0]			signal, //random event signal
	input logic [NUM_EVENTS-1:0]		reset_lane_i,
//	output ariane_pkg::lane_ctrl 		lane_cnt_o,
//	input ariane_pkg::runtime_monitor_ctrl	[NUM_EVENTS-1:0] rm_cnt_i,
	input  logic [riscv::VLEN-1:0]    		pc_i,
	input logic 				enque_ins,
	input logic [6:0]			opcode_i
	);

	ariane_pkg::lane_ctrl [NUM_EVENTS-1: 0]        rm_event_o;

	ariane_pkg::runtime_monitor_ctrl	[NUM_EVENTS-1:0] rm_cnt;
	ariane_pkg::runtime_monitor_ctrl	rm_cnt_o;


	always_ff @(posedge clk_i , negedge rst_ni) begin
		if (!rst_ni) begin
			rm_cnt <= '0;
		end 
		else begin
			for (int i=0; i<NUM_EVENTS-1; i++) begin
				rm_cnt[i+1] <= rm_cnt[i];
			end
			rm_cnt[0] <= rm_cnt_o;
		end		
	end


	genvar i;
	generate
		for(i=0; i<NUM_EVENTS-1; i++) begin
			rm_event_detector #(
			.NUM_VARS(1),
			.NUM_LANES
			)
			ev (
			.signal(signal[i]),
			.ref_val(1'b1),
			.rm_cnt_i(rm_cnt[i]),
			.lane_cnt_o(rm_event_o[i]),
			.reset_lane_i(reset_lane_i[i])
			);	
		end
	endgenerate


	rm_event_detector #(
	.NUM_VARS(1),
	.NUM_LANES,
	.LEAF_EVENT(1)
	)
	ev (
	.signal(signal[NUM_EVENTS-1]),
	.ref_val(1'b1),
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
	.events_i	(rm_event_o),
	.lane_vector_o (),
	.lane_reset_o ()
	);	

endmodule

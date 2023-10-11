module rm_monitor#(
	parameter NUM_LANES		= 	5,
	parameter NUM_EVENTS		= 	10,
	parameter NUM_MONITORED_INS     =       2,
	parameter NUM_RULES		= 	5
	)(
	input logic 					clk_i,
	input logic					rst_ni,
	input logic [NUM_LANES-1:0][NUM_EVENTS-1:0]	lane_vector_i0,
	input logic [NUM_LANES-1:0][NUM_EVENTS-1:0]	lane_vector_i1,
	input logic [$clog2(NUM_MONITORED_INS)-1:0]		itype0_from_alloc, //allocator sends first instruction type 
	input logic  						valid0_from_alloc, //allocator sends first instruction valid
        input logic [$clog2(NUM_LANES)-1:0]                  lane0_from_alloc, 
	input logic [NUM_LANES-1:0][$clog2(NUM_MONITORED_INS)-1:0] 		itype1,            //router sends second ins type
	input logic [NUM_LANES-1:0] 						valid1,            //touter sends second ins valid
	input logic [NUM_LANES-1:0]						valid0,            //touter sends second ins valid
        input logic [NUM_LANES-1:0]                     hault,
	input logic [NUM_LANES-1:0]			lane_reset_i,
	output logic [NUM_LANES-1: 0][NUM_RULES-1:0]	monitor_o
	);
 
        logic [NUM_LANES-1:0][$clog2(NUM_MONITORED_INS)-1:0]             itype0_from_alloc_wire;
        logic [NUM_LANES-1:0]                                            valid0_from_alloc_wire;


        always_comb begin
            itype0_from_alloc_wire = '0;
            valid0_from_alloc_wire = '0;
            
            itype0_from_alloc_wire[lane0_from_alloc] = itype0_from_alloc;
            valid0_from_alloc_wire[lane0_from_alloc] = valid0_from_alloc;

        end


	genvar i;

	generate
		for(i=0;i<NUM_LANES;i++) begin
			rm_lane #(
			.NUM_EVENTS(NUM_EVENTS),
			.NUM_RULES(NUM_RULES))
			lane(
			.clk_i,
                        .rst_ni,
			.lane_vector_i0(lane_vector_i0[i]),
			.lane_vector_i1(lane_vector_i1[i]),
                        .itype0_from_alloc(itype0_from_alloc_wire[i]),
                        .valid0_from_alloc(valid0_from_alloc_wire[i]),
                        .itype1(itype1[i]),
                        .valid1(valid1[i]),
                        .valid0(valid0[i]),
                        .hault(hault[i]),
			.lane_reset_i(~rst_ni | lane_reset_i[i]),
			.monitor_o(monitor_o[i])
			);
		end
	endgenerate	
endmodule

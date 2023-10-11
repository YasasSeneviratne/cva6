module rm_lane#(
	parameter NUM_EVENTS	= 	10,
	parameter NUM_RULES	= 	10
	)(
	input						clk_i,
	input					        rst_ni,
	input logic [NUM_EVENTS-1:0]			lane_vector_i0,
	input logic [NUM_EVENTS-1:0]			lane_vector_i1,
	input logic 					itype0_from_alloc, //allocator sends first instruction type 
	input logic 					valid0_from_alloc, //allocator sends first instruction valid
	input logic 					itype1,            //router sends second ins type
	input logic 					valid1,            //touter sends second ins valid
	input logic 					valid0,            //touter sends second ins valid
	input logic 					lane_reset_i,
        input logic                                     hault,
	output 	[NUM_RULES-1:0] 			monitor_o
	);

        logic itype0_q, itype0_d;

        logic enable_i0lw;
        logic enable_i0sw;

        logic enable_i1lwlw;
        logic enable_i1lwsw;
        logic enable_i1swsw;
        logic enable_i1swlw;
  
        logic tmplw, tmpsw;
        assign tmplw = ariane_pkg::LW_RM;
        assign tmpsw = ariane_pkg::SW_RM;
       
	logic [NUM_EVENTS-1:0]			lane_vector_i0lw;
	logic [NUM_EVENTS-1:0]			lane_vector_i0sw;

	logic [NUM_EVENTS-1:0]			lane_vector_i1lwlw;
	logic [NUM_EVENTS-1:0]			lane_vector_i1lwsw;
	logic [NUM_EVENTS-1:0]			lane_vector_i1swsw;
	logic [NUM_EVENTS-1:0]			lane_vector_i1swlw;
        //When there is one instruction allocated to the lane two monitors are active
        //This is to make sure that the monitor is switched when the succeeding instruction change
        assign enable_i0lw = (valid0)? itype0_q == ariane_pkg::LW_RM : 1'b0;
        assign enable_i0sw = (valid0)? itype0_q == ariane_pkg::SW_RM : 1'b0;

        assign enable_i1lwlw = (valid1)? itype0_q == ariane_pkg::LW_RM && itype1 == ariane_pkg::LW_RM : 1'b0;
        assign enable_i1lwsw = (valid1)? itype0_q == ariane_pkg::LW_RM && itype1 == ariane_pkg::SW_RM : 1'b0;
        assign enable_i1swsw = (valid1)? itype0_q == ariane_pkg::SW_RM && itype1 == ariane_pkg::SW_RM : 1'b0;
        assign enable_i1swlw = (valid1)? itype0_q == ariane_pkg::SW_RM && itype1 == ariane_pkg::LW_RM : 1'b0;

 
        assign lane_vector_i0lw = (enable_i0lw)? lane_vector_i0 : '0;
        assign lane_vector_i0sw = (enable_i0sw)? lane_vector_i0 : '0;

        assign lane_vector_i1lwlw = (enable_i1lwlw)? lane_vector_i1 : '0; 
        assign lane_vector_i1lwsw = (enable_i1lwsw)? lane_vector_i1 : '0;  
        assign lane_vector_i1swsw = (enable_i1swsw)? lane_vector_i1 : '0;
        assign lane_vector_i1swlw = (enable_i1swlw)? lane_vector_i1 : '0;


        always_comb begin
            itype0_d = itype0_q;
            
            if(valid0_from_alloc)
                itype0_d = itype0_from_alloc;
            
            if(lane_reset_i) begin   
                itype0_d = 1'b0;
            end
        end

        always_ff @(posedge clk_i or negedge rst_ni) begin
            if (~rst_ni) begin
                itype0_q <= 1'b0;
            end else begin
                itype0_q <= itype0_d;
            end
        end
        
	logic [7:0] lwlw_i;
	logic [7:0] lwsw_i;
	logic [7:0] swsw_i;
	logic [7:0] swlw_i;
        
       

        assign lwlw_i = {lane_vector_i0lw[24],lane_vector_i1lwlw[24],lane_vector_i0lw[29],lane_vector_i1lwlw[29],lane_vector_i0lw[30],lane_vector_i1lwlw[30],lane_vector_i0lw[3],lane_vector_i1lwlw[2]}; 
        // LW0_load_unit_buff_s1, LW1_load_unit_buff_s1, LW0_lsq_enq_0_s1, LW1_lsq_enq_0_s1, LW0_scb_0_s8, LW1_scb_0_s8, LW0_scb_3_s12, LW1_scb_3_s12,  
        assign lwsw_i = {lane_vector_i0sw[23],lane_vector_i1lwsw[22],lane_vector_i0sw[15],lane_vector_i1lwsw[7],lane_vector_i0sw[11],lane_vector_i1lwsw[7],lane_vector_i0sw[3],lane_vector_i1lwsw[2]};  
        // LW0_scb_0_s12, SW1_scb_0_s12, LW0_scb_1_s12, SW1_scb_1_s12, LW0_scb_1_s13, SW1_scb_1_s13, LW0_scb_2_s8, SW1_scb_2_s8, 
        assign swsw_i = {lane_vector_i0sw[20],lane_vector_i1swsw[21],lane_vector_i0sw[25],lane_vector_i1swsw[26],lane_vector_i0sw[11],lane_vector_i1swsw[7],lane_vector_i0sw[3],lane_vector_i1swsw[2]};
        // SW0_lsq_enq_0_s1, SW1_lsq_enq_0_s1, SW0_scb_0_s8, SW1_scb_0_s8, SW0_scb_3_s12, SW1_scb_3_s12, SW0_stb_spec_1_s1, SW1_stb_spec_1_s1, 
        assign swlw_i = {lane_vector_i0lw[23],lane_vector_i1swlw[22],lane_vector_i0lw[15],lane_vector_i1swlw[7],lane_vector_i0lw[11],lane_vector_i1swlw[7],lane_vector_i0lw[3],lane_vector_i1swlw[2]}; 
        // SW0_scb_0_s12, LW1_scb_0_s12, SW0_scb_1_s12, LW1_scb_1_s12, SW0_scb_1_s13, LW1_scb_1_s13, SW0_scb_2_s8, LW1_scb_2_s8,




        Top_Modulelwlw lwlwC0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(lwlw_i),
	.run(~hault)
        ,.ltl0c0lwlw(monitor_o[0])
        ,.ltl1c0lwlw(monitor_o[1])   
        ,.ltl2c0lwlw(monitor_o[2])  
        ,.ltl3c0lwlw(monitor_o[3])  
          );


        Top_Modulelwsw lwswC0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(lwsw_i),
	.run(~hault)
        ,.ltl0c0lwsw(monitor_o[4])
        ,.ltl1c0lwsw(monitor_o[5])   
        ,.ltl2c0lwsw(monitor_o[6])  
        ,.ltl3c0lwsw(monitor_o[7])  
          );

        Top_Moduleswsw swswC0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(swsw_i),
	.run(~hault)
        ,.ltl0c0swsw(monitor_o[8])
        ,.ltl1c0swsw(monitor_o[9])   
        ,.ltl2c0swsw(monitor_o[10])  
        ,.ltl3c0swsw(monitor_o[11])  
          );


        Top_Moduleswlw swlwC0(
	.clk(clk_i),
	.reset(lane_reset_i),
	.symbols(swlw_i),
	.run(~hault)
        ,.ltl0c0swlw(monitor_o[12])
        ,.ltl1c0swlw(monitor_o[13])   
        ,.ltl2c0swlw(monitor_o[14])  
        ,.ltl3c0swlw(monitor_o[15])  
          );
endmodule

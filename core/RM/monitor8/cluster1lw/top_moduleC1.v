

module Top_ModuleC1lw(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl4c1lw
                   , output wire ltl1c1lw
                   , output wire ltl3c1lw
                   , output wire ltl2c1lw
                   , output wire ltl0c1lw
                  
                  );
  wire ltl4c1lw_w_out_4;
  wire ltl4c1lw_w_out_6;
  wire ltl4c1lw_w_out_9;
  wire ltl4c1lw_w_out_11;
  wire ltl1c1lw_w_out_4;
  wire ltl1c1lw_w_out_6;
  wire ltl1c1lw_w_out_9;
  wire ltl1c1lw_w_out_11;
  wire ltl3c1lw_w_out_4;
  wire ltl3c1lw_w_out_6;
  wire ltl3c1lw_w_out_9;
  wire ltl3c1lw_w_out_11;
  wire ltl2c1lw_w_out_4;
  wire ltl2c1lw_w_out_6;
  wire ltl2c1lw_w_out_9;
  wire ltl2c1lw_w_out_11;
  wire ltl0c1lw_w_out_4;
  wire ltl0c1lw_w_out_6;
  wire ltl0c1lw_w_out_9;
  wire ltl0c1lw_w_out_11;

assign ltl4c1lw =
  ltl4c1lw_w_out_4 |
  ltl4c1lw_w_out_6 |
  ltl4c1lw_w_out_9 |
  ltl4c1lw_w_out_11 |
1'b0;
assign ltl1c1lw =
  ltl1c1lw_w_out_4 |
  ltl1c1lw_w_out_6 |
  ltl1c1lw_w_out_9 |
  ltl1c1lw_w_out_11 |
1'b0;
assign ltl3c1lw =
  ltl3c1lw_w_out_4 |
  ltl3c1lw_w_out_6 |
  ltl3c1lw_w_out_9 |
  ltl3c1lw_w_out_11 |
1'b0;
assign ltl2c1lw =
  ltl2c1lw_w_out_4 |
  ltl2c1lw_w_out_6 |
  ltl2c1lw_w_out_9 |
  ltl2c1lw_w_out_11 |
1'b0;
assign ltl0c1lw =
  ltl0c1lw_w_out_4 |
  ltl0c1lw_w_out_6 |
  ltl0c1lw_w_out_9 |
  ltl0c1lw_w_out_11 |
1'b0;





Automata_Stage0C1lw automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl4c1lw_w_out_4(ltl4c1lw_w_out_4),
                                              .ltl4c1lw_w_out_6(ltl4c1lw_w_out_6),
                                              .ltl4c1lw_w_out_9(ltl4c1lw_w_out_9),
                                              .ltl4c1lw_w_out_11(ltl4c1lw_w_out_11),
                                             
                                              .ltl1c1lw_w_out_4(ltl1c1lw_w_out_4),
                                              .ltl1c1lw_w_out_6(ltl1c1lw_w_out_6),
                                              .ltl1c1lw_w_out_9(ltl1c1lw_w_out_9),
                                              .ltl1c1lw_w_out_11(ltl1c1lw_w_out_11),
                                             
                                              .ltl3c1lw_w_out_4(ltl3c1lw_w_out_4),
                                              .ltl3c1lw_w_out_6(ltl3c1lw_w_out_6),
                                              .ltl3c1lw_w_out_9(ltl3c1lw_w_out_9),
                                              .ltl3c1lw_w_out_11(ltl3c1lw_w_out_11),
                                             
                                              .ltl2c1lw_w_out_4(ltl2c1lw_w_out_4),
                                              .ltl2c1lw_w_out_6(ltl2c1lw_w_out_6),
                                              .ltl2c1lw_w_out_9(ltl2c1lw_w_out_9),
                                              .ltl2c1lw_w_out_11(ltl2c1lw_w_out_11),
                                             
                                              .ltl0c1lw_w_out_4(ltl0c1lw_w_out_4),
                                              .ltl0c1lw_w_out_6(ltl0c1lw_w_out_6),
                                              .ltl0c1lw_w_out_9(ltl0c1lw_w_out_9),
                                              .ltl0c1lw_w_out_11(ltl0c1lw_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule



module Top_ModuleC4(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl1c4
                   , output wire ltl2c4
                   , output wire ltl5c4
                   , output wire ltl3c4
                   , output wire ltl4c4
                   , output wire ltl6c4
                   , output wire ltl0c4
                  
                  );
  wire ltl1c4_w_out_4;
  wire ltl1c4_w_out_6;
  wire ltl1c4_w_out_9;
  wire ltl1c4_w_out_11;
  wire ltl2c4_w_out_4;
  wire ltl2c4_w_out_6;
  wire ltl2c4_w_out_9;
  wire ltl2c4_w_out_11;
  wire ltl5c4_w_out_4;
  wire ltl5c4_w_out_6;
  wire ltl5c4_w_out_9;
  wire ltl5c4_w_out_11;
  wire ltl3c4_w_out_4;
  wire ltl3c4_w_out_6;
  wire ltl3c4_w_out_9;
  wire ltl3c4_w_out_11;
  wire ltl4c4_w_out_4;
  wire ltl4c4_w_out_6;
  wire ltl4c4_w_out_9;
  wire ltl4c4_w_out_11;
  wire ltl6c4_w_out_4;
  wire ltl6c4_w_out_6;
  wire ltl6c4_w_out_9;
  wire ltl6c4_w_out_11;
  wire ltl0c4_w_out_4;
  wire ltl0c4_w_out_6;
  wire ltl0c4_w_out_9;
  wire ltl0c4_w_out_11;

assign ltl1c4 =
  ltl1c4_w_out_4 |
  ltl1c4_w_out_6 |
  ltl1c4_w_out_9 |
  ltl1c4_w_out_11 |
1'b0;
assign ltl2c4 =
  ltl2c4_w_out_4 |
  ltl2c4_w_out_6 |
  ltl2c4_w_out_9 |
  ltl2c4_w_out_11 |
1'b0;
assign ltl5c4 =
  ltl5c4_w_out_4 |
  ltl5c4_w_out_6 |
  ltl5c4_w_out_9 |
  ltl5c4_w_out_11 |
1'b0;
assign ltl3c4 =
  ltl3c4_w_out_4 |
  ltl3c4_w_out_6 |
  ltl3c4_w_out_9 |
  ltl3c4_w_out_11 |
1'b0;
assign ltl4c4 =
  ltl4c4_w_out_4 |
  ltl4c4_w_out_6 |
  ltl4c4_w_out_9 |
  ltl4c4_w_out_11 |
1'b0;
assign ltl6c4 =
  ltl6c4_w_out_4 |
  ltl6c4_w_out_6 |
  ltl6c4_w_out_9 |
  ltl6c4_w_out_11 |
1'b0;
assign ltl0c4 =
  ltl0c4_w_out_4 |
  ltl0c4_w_out_6 |
  ltl0c4_w_out_9 |
  ltl0c4_w_out_11 |
1'b0;





Automata_Stage0C4 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl1c4_w_out_4(ltl1c4_w_out_4),
                                              .ltl1c4_w_out_6(ltl1c4_w_out_6),
                                              .ltl1c4_w_out_9(ltl1c4_w_out_9),
                                              .ltl1c4_w_out_11(ltl1c4_w_out_11),
                                             
                                              .ltl2c4_w_out_4(ltl2c4_w_out_4),
                                              .ltl2c4_w_out_6(ltl2c4_w_out_6),
                                              .ltl2c4_w_out_9(ltl2c4_w_out_9),
                                              .ltl2c4_w_out_11(ltl2c4_w_out_11),
                                             
                                              .ltl5c4_w_out_4(ltl5c4_w_out_4),
                                              .ltl5c4_w_out_6(ltl5c4_w_out_6),
                                              .ltl5c4_w_out_9(ltl5c4_w_out_9),
                                              .ltl5c4_w_out_11(ltl5c4_w_out_11),
                                             
                                              .ltl3c4_w_out_4(ltl3c4_w_out_4),
                                              .ltl3c4_w_out_6(ltl3c4_w_out_6),
                                              .ltl3c4_w_out_9(ltl3c4_w_out_9),
                                              .ltl3c4_w_out_11(ltl3c4_w_out_11),
                                             
                                              .ltl4c4_w_out_4(ltl4c4_w_out_4),
                                              .ltl4c4_w_out_6(ltl4c4_w_out_6),
                                              .ltl4c4_w_out_9(ltl4c4_w_out_9),
                                              .ltl4c4_w_out_11(ltl4c4_w_out_11),
                                             
                                              .ltl6c4_w_out_4(ltl6c4_w_out_4),
                                              .ltl6c4_w_out_6(ltl6c4_w_out_6),
                                              .ltl6c4_w_out_9(ltl6c4_w_out_9),
                                              .ltl6c4_w_out_11(ltl6c4_w_out_11),
                                             
                                              .ltl0c4_w_out_4(ltl0c4_w_out_4),
                                              .ltl0c4_w_out_6(ltl0c4_w_out_6),
                                              .ltl0c4_w_out_9(ltl0c4_w_out_9),
                                              .ltl0c4_w_out_11(ltl0c4_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

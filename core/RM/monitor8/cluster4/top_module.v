

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
  wire ltl1c4_w_out_2;
  wire ltl1c4_w_out_4;
  wire ltl1c4_w_out_7;
  wire ltl1c4_w_out_9;
  wire ltl2c4_w_out_2;
  wire ltl2c4_w_out_4;
  wire ltl2c4_w_out_7;
  wire ltl2c4_w_out_9;
  wire ltl5c4_w_out_3;
  wire ltl5c4_w_out_5;
  wire ltl5c4_w_out_7;
  wire ltl5c4_w_out_9;
  wire ltl3c4_w_out_2;
  wire ltl3c4_w_out_4;
  wire ltl3c4_w_out_7;
  wire ltl3c4_w_out_9;
  wire ltl4c4_w_out_3;
  wire ltl4c4_w_out_5;
  wire ltl4c4_w_out_7;
  wire ltl4c4_w_out_9;
  wire ltl6c4_w_out_3;
  wire ltl6c4_w_out_5;
  wire ltl6c4_w_out_7;
  wire ltl6c4_w_out_9;
  wire ltl0c4_w_out_3;
  wire ltl0c4_w_out_5;
  wire ltl0c4_w_out_7;
  wire ltl0c4_w_out_9;

assign ltl1c4 =
  ltl1c4_w_out_2 |
  ltl1c4_w_out_4 |
  ltl1c4_w_out_7 |
  ltl1c4_w_out_9 |
1'b0;
assign ltl2c4 =
  ltl2c4_w_out_2 |
  ltl2c4_w_out_4 |
  ltl2c4_w_out_7 |
  ltl2c4_w_out_9 |
1'b0;
assign ltl5c4 =
  ltl5c4_w_out_3 |
  ltl5c4_w_out_5 |
  ltl5c4_w_out_7 |
  ltl5c4_w_out_9 |
1'b0;
assign ltl3c4 =
  ltl3c4_w_out_2 |
  ltl3c4_w_out_4 |
  ltl3c4_w_out_7 |
  ltl3c4_w_out_9 |
1'b0;
assign ltl4c4 =
  ltl4c4_w_out_3 |
  ltl4c4_w_out_5 |
  ltl4c4_w_out_7 |
  ltl4c4_w_out_9 |
1'b0;
assign ltl6c4 =
  ltl6c4_w_out_3 |
  ltl6c4_w_out_5 |
  ltl6c4_w_out_7 |
  ltl6c4_w_out_9 |
1'b0;
assign ltl0c4 =
  ltl0c4_w_out_3 |
  ltl0c4_w_out_5 |
  ltl0c4_w_out_7 |
  ltl0c4_w_out_9 |
1'b0;





Automata_Stage0C4 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl1c4_w_out_2(ltl1c4_w_out_2),
                                              .ltl1c4_w_out_4(ltl1c4_w_out_4),
                                              .ltl1c4_w_out_7(ltl1c4_w_out_7),
                                              .ltl1c4_w_out_9(ltl1c4_w_out_9),
                                             
                                              .ltl2c4_w_out_2(ltl2c4_w_out_2),
                                              .ltl2c4_w_out_4(ltl2c4_w_out_4),
                                              .ltl2c4_w_out_7(ltl2c4_w_out_7),
                                              .ltl2c4_w_out_9(ltl2c4_w_out_9),
                                             
                                              .ltl5c4_w_out_3(ltl5c4_w_out_3),
                                              .ltl5c4_w_out_5(ltl5c4_w_out_5),
                                              .ltl5c4_w_out_7(ltl5c4_w_out_7),
                                              .ltl5c4_w_out_9(ltl5c4_w_out_9),
                                             
                                              .ltl3c4_w_out_2(ltl3c4_w_out_2),
                                              .ltl3c4_w_out_4(ltl3c4_w_out_4),
                                              .ltl3c4_w_out_7(ltl3c4_w_out_7),
                                              .ltl3c4_w_out_9(ltl3c4_w_out_9),
                                             
                                              .ltl4c4_w_out_3(ltl4c4_w_out_3),
                                              .ltl4c4_w_out_5(ltl4c4_w_out_5),
                                              .ltl4c4_w_out_7(ltl4c4_w_out_7),
                                              .ltl4c4_w_out_9(ltl4c4_w_out_9),
                                             
                                              .ltl6c4_w_out_3(ltl6c4_w_out_3),
                                              .ltl6c4_w_out_5(ltl6c4_w_out_5),
                                              .ltl6c4_w_out_7(ltl6c4_w_out_7),
                                              .ltl6c4_w_out_9(ltl6c4_w_out_9),
                                             
                                              .ltl0c4_w_out_3(ltl0c4_w_out_3),
                                              .ltl0c4_w_out_5(ltl0c4_w_out_5),
                                              .ltl0c4_w_out_7(ltl0c4_w_out_7),
                                              .ltl0c4_w_out_9(ltl0c4_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

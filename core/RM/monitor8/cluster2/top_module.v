

module Top_ModuleC2(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl8c2
                   , output wire ltl9c2
                   , output wire ltl6c2
                   , output wire ltl1c2
                   , output wire ltl4c2
                   , output wire ltl3c2
                   , output wire ltl5c2
                   , output wire ltl0c2
                   , output wire ltl7c2
                   , output wire ltl2c2
                  
                  );
  wire ltl8c2_w_out_3;
  wire ltl8c2_w_out_5;
  wire ltl8c2_w_out_7;
  wire ltl8c2_w_out_9;
  wire ltl9c2_w_out_3;
  wire ltl9c2_w_out_5;
  wire ltl9c2_w_out_7;
  wire ltl9c2_w_out_9;
  wire ltl6c2_w_out_3;
  wire ltl6c2_w_out_5;
  wire ltl6c2_w_out_7;
  wire ltl6c2_w_out_9;
  wire ltl1c2_w_out_2;
  wire ltl1c2_w_out_4;
  wire ltl1c2_w_out_7;
  wire ltl1c2_w_out_9;
  wire ltl4c2_w_out_2;
  wire ltl4c2_w_out_4;
  wire ltl4c2_w_out_7;
  wire ltl4c2_w_out_9;
  wire ltl3c2_w_out_3;
  wire ltl3c2_w_out_5;
  wire ltl3c2_w_out_7;
  wire ltl3c2_w_out_9;
  wire ltl5c2_w_out_2;
  wire ltl5c2_w_out_4;
  wire ltl5c2_w_out_7;
  wire ltl5c2_w_out_9;
  wire ltl0c2_w_out_2;
  wire ltl0c2_w_out_4;
  wire ltl0c2_w_out_7;
  wire ltl0c2_w_out_9;
  wire ltl7c2_w_out_3;
  wire ltl7c2_w_out_5;
  wire ltl7c2_w_out_7;
  wire ltl7c2_w_out_9;
  wire ltl2c2_w_out_3;
  wire ltl2c2_w_out_5;
  wire ltl2c2_w_out_7;
  wire ltl2c2_w_out_9;

assign ltl8c2 =
  ltl8c2_w_out_3 |
  ltl8c2_w_out_5 |
  ltl8c2_w_out_7 |
  ltl8c2_w_out_9 |
1'b0;
assign ltl9c2 =
  ltl9c2_w_out_3 |
  ltl9c2_w_out_5 |
  ltl9c2_w_out_7 |
  ltl9c2_w_out_9 |
1'b0;
assign ltl6c2 =
  ltl6c2_w_out_3 |
  ltl6c2_w_out_5 |
  ltl6c2_w_out_7 |
  ltl6c2_w_out_9 |
1'b0;
assign ltl1c2 =
  ltl1c2_w_out_2 |
  ltl1c2_w_out_4 |
  ltl1c2_w_out_7 |
  ltl1c2_w_out_9 |
1'b0;
assign ltl4c2 =
  ltl4c2_w_out_2 |
  ltl4c2_w_out_4 |
  ltl4c2_w_out_7 |
  ltl4c2_w_out_9 |
1'b0;
assign ltl3c2 =
  ltl3c2_w_out_3 |
  ltl3c2_w_out_5 |
  ltl3c2_w_out_7 |
  ltl3c2_w_out_9 |
1'b0;
assign ltl5c2 =
  ltl5c2_w_out_2 |
  ltl5c2_w_out_4 |
  ltl5c2_w_out_7 |
  ltl5c2_w_out_9 |
1'b0;
assign ltl0c2 =
  ltl0c2_w_out_2 |
  ltl0c2_w_out_4 |
  ltl0c2_w_out_7 |
  ltl0c2_w_out_9 |
1'b0;
assign ltl7c2 =
  ltl7c2_w_out_3 |
  ltl7c2_w_out_5 |
  ltl7c2_w_out_7 |
  ltl7c2_w_out_9 |
1'b0;
assign ltl2c2 =
  ltl2c2_w_out_3 |
  ltl2c2_w_out_5 |
  ltl2c2_w_out_7 |
  ltl2c2_w_out_9 |
1'b0;





Automata_Stage0C2 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl8c2_w_out_3(ltl8c2_w_out_3),
                                              .ltl8c2_w_out_5(ltl8c2_w_out_5),
                                              .ltl8c2_w_out_7(ltl8c2_w_out_7),
                                              .ltl8c2_w_out_9(ltl8c2_w_out_9),
                                             
                                              .ltl9c2_w_out_3(ltl9c2_w_out_3),
                                              .ltl9c2_w_out_5(ltl9c2_w_out_5),
                                              .ltl9c2_w_out_7(ltl9c2_w_out_7),
                                              .ltl9c2_w_out_9(ltl9c2_w_out_9),
                                             
                                              .ltl6c2_w_out_3(ltl6c2_w_out_3),
                                              .ltl6c2_w_out_5(ltl6c2_w_out_5),
                                              .ltl6c2_w_out_7(ltl6c2_w_out_7),
                                              .ltl6c2_w_out_9(ltl6c2_w_out_9),
                                             
                                              .ltl1c2_w_out_2(ltl1c2_w_out_2),
                                              .ltl1c2_w_out_4(ltl1c2_w_out_4),
                                              .ltl1c2_w_out_7(ltl1c2_w_out_7),
                                              .ltl1c2_w_out_9(ltl1c2_w_out_9),
                                             
                                              .ltl4c2_w_out_2(ltl4c2_w_out_2),
                                              .ltl4c2_w_out_4(ltl4c2_w_out_4),
                                              .ltl4c2_w_out_7(ltl4c2_w_out_7),
                                              .ltl4c2_w_out_9(ltl4c2_w_out_9),
                                             
                                              .ltl3c2_w_out_3(ltl3c2_w_out_3),
                                              .ltl3c2_w_out_5(ltl3c2_w_out_5),
                                              .ltl3c2_w_out_7(ltl3c2_w_out_7),
                                              .ltl3c2_w_out_9(ltl3c2_w_out_9),
                                             
                                              .ltl5c2_w_out_2(ltl5c2_w_out_2),
                                              .ltl5c2_w_out_4(ltl5c2_w_out_4),
                                              .ltl5c2_w_out_7(ltl5c2_w_out_7),
                                              .ltl5c2_w_out_9(ltl5c2_w_out_9),
                                             
                                              .ltl0c2_w_out_2(ltl0c2_w_out_2),
                                              .ltl0c2_w_out_4(ltl0c2_w_out_4),
                                              .ltl0c2_w_out_7(ltl0c2_w_out_7),
                                              .ltl0c2_w_out_9(ltl0c2_w_out_9),
                                             
                                              .ltl7c2_w_out_3(ltl7c2_w_out_3),
                                              .ltl7c2_w_out_5(ltl7c2_w_out_5),
                                              .ltl7c2_w_out_7(ltl7c2_w_out_7),
                                              .ltl7c2_w_out_9(ltl7c2_w_out_9),
                                             
                                              .ltl2c2_w_out_3(ltl2c2_w_out_3),
                                              .ltl2c2_w_out_5(ltl2c2_w_out_5),
                                              .ltl2c2_w_out_7(ltl2c2_w_out_7),
                                              .ltl2c2_w_out_9(ltl2c2_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

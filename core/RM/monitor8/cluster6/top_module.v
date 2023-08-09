

module Top_ModuleC6(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl11c6
                   , output wire ltl9c6
                   , output wire ltl8c6
                   , output wire ltl1c6
                   , output wire ltl6c6
                   , output wire ltl7c6
                   , output wire ltl4c6
                   , output wire ltl5c6
                   , output wire ltl10c6
                   , output wire ltl0c6
                   , output wire ltl2c6
                   , output wire ltl12c6
                   , output wire ltl3c6
                  
                  );
  wire ltl11c6_w_out_2;
  wire ltl11c6_w_out_4;
  wire ltl11c6_w_out_7;
  wire ltl11c6_w_out_9;
  wire ltl9c6_w_out_2;
  wire ltl9c6_w_out_4;
  wire ltl9c6_w_out_7;
  wire ltl9c6_w_out_9;
  wire ltl8c6_w_out_2;
  wire ltl8c6_w_out_4;
  wire ltl8c6_w_out_7;
  wire ltl8c6_w_out_9;
  wire ltl1c6_w_out_2;
  wire ltl1c6_w_out_4;
  wire ltl1c6_w_out_7;
  wire ltl1c6_w_out_9;
  wire ltl6c6_w_out_2;
  wire ltl6c6_w_out_4;
  wire ltl6c6_w_out_7;
  wire ltl6c6_w_out_9;
  wire ltl7c6_w_out_2;
  wire ltl7c6_w_out_4;
  wire ltl7c6_w_out_7;
  wire ltl7c6_w_out_9;
  wire ltl4c6_w_out_2;
  wire ltl4c6_w_out_4;
  wire ltl4c6_w_out_7;
  wire ltl4c6_w_out_9;
  wire ltl5c6_w_out_2;
  wire ltl5c6_w_out_4;
  wire ltl5c6_w_out_7;
  wire ltl5c6_w_out_9;
  wire ltl10c6_w_out_2;
  wire ltl10c6_w_out_4;
  wire ltl10c6_w_out_7;
  wire ltl10c6_w_out_9;
  wire ltl0c6_w_out_2;
  wire ltl0c6_w_out_4;
  wire ltl0c6_w_out_7;
  wire ltl0c6_w_out_9;
  wire ltl2c6_w_out_2;
  wire ltl2c6_w_out_4;
  wire ltl2c6_w_out_7;
  wire ltl2c6_w_out_9;
  wire ltl12c6_w_out_3;
  wire ltl12c6_w_out_5;
  wire ltl12c6_w_out_7;
  wire ltl12c6_w_out_9;
  wire ltl3c6_w_out_2;
  wire ltl3c6_w_out_4;
  wire ltl3c6_w_out_7;
  wire ltl3c6_w_out_9;

assign ltl11c6 =
  ltl11c6_w_out_2 |
  ltl11c6_w_out_4 |
  ltl11c6_w_out_7 |
  ltl11c6_w_out_9 |
1'b0;
assign ltl9c6 =
  ltl9c6_w_out_2 |
  ltl9c6_w_out_4 |
  ltl9c6_w_out_7 |
  ltl9c6_w_out_9 |
1'b0;
assign ltl8c6 =
  ltl8c6_w_out_2 |
  ltl8c6_w_out_4 |
  ltl8c6_w_out_7 |
  ltl8c6_w_out_9 |
1'b0;
assign ltl1c6 =
  ltl1c6_w_out_2 |
  ltl1c6_w_out_4 |
  ltl1c6_w_out_7 |
  ltl1c6_w_out_9 |
1'b0;
assign ltl6c6 =
  ltl6c6_w_out_2 |
  ltl6c6_w_out_4 |
  ltl6c6_w_out_7 |
  ltl6c6_w_out_9 |
1'b0;
assign ltl7c6 =
  ltl7c6_w_out_2 |
  ltl7c6_w_out_4 |
  ltl7c6_w_out_7 |
  ltl7c6_w_out_9 |
1'b0;
assign ltl4c6 =
  ltl4c6_w_out_2 |
  ltl4c6_w_out_4 |
  ltl4c6_w_out_7 |
  ltl4c6_w_out_9 |
1'b0;
assign ltl5c6 =
  ltl5c6_w_out_2 |
  ltl5c6_w_out_4 |
  ltl5c6_w_out_7 |
  ltl5c6_w_out_9 |
1'b0;
assign ltl10c6 =
  ltl10c6_w_out_2 |
  ltl10c6_w_out_4 |
  ltl10c6_w_out_7 |
  ltl10c6_w_out_9 |
1'b0;
assign ltl0c6 =
  ltl0c6_w_out_2 |
  ltl0c6_w_out_4 |
  ltl0c6_w_out_7 |
  ltl0c6_w_out_9 |
1'b0;
assign ltl2c6 =
  ltl2c6_w_out_2 |
  ltl2c6_w_out_4 |
  ltl2c6_w_out_7 |
  ltl2c6_w_out_9 |
1'b0;
assign ltl12c6 =
  ltl12c6_w_out_3 |
  ltl12c6_w_out_5 |
  ltl12c6_w_out_7 |
  ltl12c6_w_out_9 |
1'b0;
assign ltl3c6 =
  ltl3c6_w_out_2 |
  ltl3c6_w_out_4 |
  ltl3c6_w_out_7 |
  ltl3c6_w_out_9 |
1'b0;





Automata_Stage0C6 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl11c6_w_out_2(ltl11c6_w_out_2),
                                              .ltl11c6_w_out_4(ltl11c6_w_out_4),
                                              .ltl11c6_w_out_7(ltl11c6_w_out_7),
                                              .ltl11c6_w_out_9(ltl11c6_w_out_9),
                                             
                                              .ltl9c6_w_out_2(ltl9c6_w_out_2),
                                              .ltl9c6_w_out_4(ltl9c6_w_out_4),
                                              .ltl9c6_w_out_7(ltl9c6_w_out_7),
                                              .ltl9c6_w_out_9(ltl9c6_w_out_9),
                                             
                                              .ltl8c6_w_out_2(ltl8c6_w_out_2),
                                              .ltl8c6_w_out_4(ltl8c6_w_out_4),
                                              .ltl8c6_w_out_7(ltl8c6_w_out_7),
                                              .ltl8c6_w_out_9(ltl8c6_w_out_9),
                                             
                                              .ltl1c6_w_out_2(ltl1c6_w_out_2),
                                              .ltl1c6_w_out_4(ltl1c6_w_out_4),
                                              .ltl1c6_w_out_7(ltl1c6_w_out_7),
                                              .ltl1c6_w_out_9(ltl1c6_w_out_9),
                                             
                                              .ltl6c6_w_out_2(ltl6c6_w_out_2),
                                              .ltl6c6_w_out_4(ltl6c6_w_out_4),
                                              .ltl6c6_w_out_7(ltl6c6_w_out_7),
                                              .ltl6c6_w_out_9(ltl6c6_w_out_9),
                                             
                                              .ltl7c6_w_out_2(ltl7c6_w_out_2),
                                              .ltl7c6_w_out_4(ltl7c6_w_out_4),
                                              .ltl7c6_w_out_7(ltl7c6_w_out_7),
                                              .ltl7c6_w_out_9(ltl7c6_w_out_9),
                                             
                                              .ltl4c6_w_out_2(ltl4c6_w_out_2),
                                              .ltl4c6_w_out_4(ltl4c6_w_out_4),
                                              .ltl4c6_w_out_7(ltl4c6_w_out_7),
                                              .ltl4c6_w_out_9(ltl4c6_w_out_9),
                                             
                                              .ltl5c6_w_out_2(ltl5c6_w_out_2),
                                              .ltl5c6_w_out_4(ltl5c6_w_out_4),
                                              .ltl5c6_w_out_7(ltl5c6_w_out_7),
                                              .ltl5c6_w_out_9(ltl5c6_w_out_9),
                                             
                                              .ltl10c6_w_out_2(ltl10c6_w_out_2),
                                              .ltl10c6_w_out_4(ltl10c6_w_out_4),
                                              .ltl10c6_w_out_7(ltl10c6_w_out_7),
                                              .ltl10c6_w_out_9(ltl10c6_w_out_9),
                                             
                                              .ltl0c6_w_out_2(ltl0c6_w_out_2),
                                              .ltl0c6_w_out_4(ltl0c6_w_out_4),
                                              .ltl0c6_w_out_7(ltl0c6_w_out_7),
                                              .ltl0c6_w_out_9(ltl0c6_w_out_9),
                                             
                                              .ltl2c6_w_out_2(ltl2c6_w_out_2),
                                              .ltl2c6_w_out_4(ltl2c6_w_out_4),
                                              .ltl2c6_w_out_7(ltl2c6_w_out_7),
                                              .ltl2c6_w_out_9(ltl2c6_w_out_9),
                                             
                                              .ltl12c6_w_out_3(ltl12c6_w_out_3),
                                              .ltl12c6_w_out_5(ltl12c6_w_out_5),
                                              .ltl12c6_w_out_7(ltl12c6_w_out_7),
                                              .ltl12c6_w_out_9(ltl12c6_w_out_9),
                                             
                                              .ltl3c6_w_out_2(ltl3c6_w_out_2),
                                              .ltl3c6_w_out_4(ltl3c6_w_out_4),
                                              .ltl3c6_w_out_7(ltl3c6_w_out_7),
                                              .ltl3c6_w_out_9(ltl3c6_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

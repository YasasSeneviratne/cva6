

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
  wire ltl11c6_w_out_4;
  wire ltl11c6_w_out_6;
  wire ltl11c6_w_out_9;
  wire ltl11c6_w_out_11;
  wire ltl9c6_w_out_4;
  wire ltl9c6_w_out_6;
  wire ltl9c6_w_out_9;
  wire ltl9c6_w_out_11;
  wire ltl8c6_w_out_4;
  wire ltl8c6_w_out_6;
  wire ltl8c6_w_out_9;
  wire ltl8c6_w_out_11;
  wire ltl1c6_w_out_4;
  wire ltl1c6_w_out_6;
  wire ltl1c6_w_out_9;
  wire ltl1c6_w_out_11;
  wire ltl6c6_w_out_4;
  wire ltl6c6_w_out_6;
  wire ltl6c6_w_out_9;
  wire ltl6c6_w_out_11;
  wire ltl7c6_w_out_4;
  wire ltl7c6_w_out_6;
  wire ltl7c6_w_out_9;
  wire ltl7c6_w_out_11;
  wire ltl4c6_w_out_4;
  wire ltl4c6_w_out_6;
  wire ltl4c6_w_out_9;
  wire ltl4c6_w_out_11;
  wire ltl5c6_w_out_4;
  wire ltl5c6_w_out_6;
  wire ltl5c6_w_out_9;
  wire ltl5c6_w_out_11;
  wire ltl10c6_w_out_4;
  wire ltl10c6_w_out_6;
  wire ltl10c6_w_out_9;
  wire ltl10c6_w_out_11;
  wire ltl0c6_w_out_4;
  wire ltl0c6_w_out_6;
  wire ltl0c6_w_out_9;
  wire ltl0c6_w_out_11;
  wire ltl2c6_w_out_4;
  wire ltl2c6_w_out_6;
  wire ltl2c6_w_out_9;
  wire ltl2c6_w_out_11;
  wire ltl12c6_w_out_4;
  wire ltl12c6_w_out_6;
  wire ltl12c6_w_out_9;
  wire ltl12c6_w_out_11;
  wire ltl3c6_w_out_4;
  wire ltl3c6_w_out_6;
  wire ltl3c6_w_out_9;
  wire ltl3c6_w_out_11;

assign ltl11c6 =
  ltl11c6_w_out_4 |
  ltl11c6_w_out_6 |
  ltl11c6_w_out_9 |
  ltl11c6_w_out_11 |
1'b0;
assign ltl9c6 =
  ltl9c6_w_out_4 |
  ltl9c6_w_out_6 |
  ltl9c6_w_out_9 |
  ltl9c6_w_out_11 |
1'b0;
assign ltl8c6 =
  ltl8c6_w_out_4 |
  ltl8c6_w_out_6 |
  ltl8c6_w_out_9 |
  ltl8c6_w_out_11 |
1'b0;
assign ltl1c6 =
  ltl1c6_w_out_4 |
  ltl1c6_w_out_6 |
  ltl1c6_w_out_9 |
  ltl1c6_w_out_11 |
1'b0;
assign ltl6c6 =
  ltl6c6_w_out_4 |
  ltl6c6_w_out_6 |
  ltl6c6_w_out_9 |
  ltl6c6_w_out_11 |
1'b0;
assign ltl7c6 =
  ltl7c6_w_out_4 |
  ltl7c6_w_out_6 |
  ltl7c6_w_out_9 |
  ltl7c6_w_out_11 |
1'b0;
assign ltl4c6 =
  ltl4c6_w_out_4 |
  ltl4c6_w_out_6 |
  ltl4c6_w_out_9 |
  ltl4c6_w_out_11 |
1'b0;
assign ltl5c6 =
  ltl5c6_w_out_4 |
  ltl5c6_w_out_6 |
  ltl5c6_w_out_9 |
  ltl5c6_w_out_11 |
1'b0;
assign ltl10c6 =
  ltl10c6_w_out_4 |
  ltl10c6_w_out_6 |
  ltl10c6_w_out_9 |
  ltl10c6_w_out_11 |
1'b0;
assign ltl0c6 =
  ltl0c6_w_out_4 |
  ltl0c6_w_out_6 |
  ltl0c6_w_out_9 |
  ltl0c6_w_out_11 |
1'b0;
assign ltl2c6 =
  ltl2c6_w_out_4 |
  ltl2c6_w_out_6 |
  ltl2c6_w_out_9 |
  ltl2c6_w_out_11 |
1'b0;
assign ltl12c6 =
  ltl12c6_w_out_4 |
  ltl12c6_w_out_6 |
  ltl12c6_w_out_9 |
  ltl12c6_w_out_11 |
1'b0;
assign ltl3c6 =
  ltl3c6_w_out_4 |
  ltl3c6_w_out_6 |
  ltl3c6_w_out_9 |
  ltl3c6_w_out_11 |
1'b0;





Automata_Stage0C6 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl11c6_w_out_4(ltl11c6_w_out_4),
                                              .ltl11c6_w_out_6(ltl11c6_w_out_6),
                                              .ltl11c6_w_out_9(ltl11c6_w_out_9),
                                              .ltl11c6_w_out_11(ltl11c6_w_out_11),
                                             
                                              .ltl9c6_w_out_4(ltl9c6_w_out_4),
                                              .ltl9c6_w_out_6(ltl9c6_w_out_6),
                                              .ltl9c6_w_out_9(ltl9c6_w_out_9),
                                              .ltl9c6_w_out_11(ltl9c6_w_out_11),
                                             
                                              .ltl8c6_w_out_4(ltl8c6_w_out_4),
                                              .ltl8c6_w_out_6(ltl8c6_w_out_6),
                                              .ltl8c6_w_out_9(ltl8c6_w_out_9),
                                              .ltl8c6_w_out_11(ltl8c6_w_out_11),
                                             
                                              .ltl1c6_w_out_4(ltl1c6_w_out_4),
                                              .ltl1c6_w_out_6(ltl1c6_w_out_6),
                                              .ltl1c6_w_out_9(ltl1c6_w_out_9),
                                              .ltl1c6_w_out_11(ltl1c6_w_out_11),
                                             
                                              .ltl6c6_w_out_4(ltl6c6_w_out_4),
                                              .ltl6c6_w_out_6(ltl6c6_w_out_6),
                                              .ltl6c6_w_out_9(ltl6c6_w_out_9),
                                              .ltl6c6_w_out_11(ltl6c6_w_out_11),
                                             
                                              .ltl7c6_w_out_4(ltl7c6_w_out_4),
                                              .ltl7c6_w_out_6(ltl7c6_w_out_6),
                                              .ltl7c6_w_out_9(ltl7c6_w_out_9),
                                              .ltl7c6_w_out_11(ltl7c6_w_out_11),
                                             
                                              .ltl4c6_w_out_4(ltl4c6_w_out_4),
                                              .ltl4c6_w_out_6(ltl4c6_w_out_6),
                                              .ltl4c6_w_out_9(ltl4c6_w_out_9),
                                              .ltl4c6_w_out_11(ltl4c6_w_out_11),
                                             
                                              .ltl5c6_w_out_4(ltl5c6_w_out_4),
                                              .ltl5c6_w_out_6(ltl5c6_w_out_6),
                                              .ltl5c6_w_out_9(ltl5c6_w_out_9),
                                              .ltl5c6_w_out_11(ltl5c6_w_out_11),
                                             
                                              .ltl10c6_w_out_4(ltl10c6_w_out_4),
                                              .ltl10c6_w_out_6(ltl10c6_w_out_6),
                                              .ltl10c6_w_out_9(ltl10c6_w_out_9),
                                              .ltl10c6_w_out_11(ltl10c6_w_out_11),
                                             
                                              .ltl0c6_w_out_4(ltl0c6_w_out_4),
                                              .ltl0c6_w_out_6(ltl0c6_w_out_6),
                                              .ltl0c6_w_out_9(ltl0c6_w_out_9),
                                              .ltl0c6_w_out_11(ltl0c6_w_out_11),
                                             
                                              .ltl2c6_w_out_4(ltl2c6_w_out_4),
                                              .ltl2c6_w_out_6(ltl2c6_w_out_6),
                                              .ltl2c6_w_out_9(ltl2c6_w_out_9),
                                              .ltl2c6_w_out_11(ltl2c6_w_out_11),
                                             
                                              .ltl12c6_w_out_4(ltl12c6_w_out_4),
                                              .ltl12c6_w_out_6(ltl12c6_w_out_6),
                                              .ltl12c6_w_out_9(ltl12c6_w_out_9),
                                              .ltl12c6_w_out_11(ltl12c6_w_out_11),
                                             
                                              .ltl3c6_w_out_4(ltl3c6_w_out_4),
                                              .ltl3c6_w_out_6(ltl3c6_w_out_6),
                                              .ltl3c6_w_out_9(ltl3c6_w_out_9),
                                              .ltl3c6_w_out_11(ltl3c6_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

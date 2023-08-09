

module Top_ModuleC3(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl1c3
                   , output wire ltl8c3
                   , output wire ltl5c3
                   , output wire ltl9c3
                   , output wire ltl6c3
                   , output wire ltl2c3
                   , output wire ltl3c3
                   , output wire ltl7c3
                   , output wire ltl0c3
                   , output wire ltl4c3
                  
                  );
  wire ltl1c3_w_out_2;
  wire ltl1c3_w_out_4;
  wire ltl1c3_w_out_7;
  wire ltl1c3_w_out_9;
  wire ltl8c3_w_out_3;
  wire ltl8c3_w_out_5;
  wire ltl8c3_w_out_7;
  wire ltl8c3_w_out_9;
  wire ltl5c3_w_out_2;
  wire ltl5c3_w_out_4;
  wire ltl5c3_w_out_7;
  wire ltl5c3_w_out_9;
  wire ltl9c3_w_out_3;
  wire ltl9c3_w_out_5;
  wire ltl9c3_w_out_7;
  wire ltl9c3_w_out_9;
  wire ltl6c3_w_out_3;
  wire ltl6c3_w_out_5;
  wire ltl6c3_w_out_7;
  wire ltl6c3_w_out_9;
  wire ltl2c3_w_out_2;
  wire ltl2c3_w_out_4;
  wire ltl2c3_w_out_7;
  wire ltl2c3_w_out_9;
  wire ltl3c3_w_out_2;
  wire ltl3c3_w_out_4;
  wire ltl3c3_w_out_7;
  wire ltl3c3_w_out_9;
  wire ltl7c3_w_out_3;
  wire ltl7c3_w_out_5;
  wire ltl7c3_w_out_7;
  wire ltl7c3_w_out_9;
  wire ltl0c3_w_out_2;
  wire ltl0c3_w_out_4;
  wire ltl0c3_w_out_7;
  wire ltl0c3_w_out_9;
  wire ltl4c3_w_out_2;
  wire ltl4c3_w_out_4;
  wire ltl4c3_w_out_7;
  wire ltl4c3_w_out_9;

assign ltl1c3 =
  ltl1c3_w_out_2 |
  ltl1c3_w_out_4 |
  ltl1c3_w_out_7 |
  ltl1c3_w_out_9 |
1'b0;
assign ltl8c3 =
  ltl8c3_w_out_3 |
  ltl8c3_w_out_5 |
  ltl8c3_w_out_7 |
  ltl8c3_w_out_9 |
1'b0;
assign ltl5c3 =
  ltl5c3_w_out_2 |
  ltl5c3_w_out_4 |
  ltl5c3_w_out_7 |
  ltl5c3_w_out_9 |
1'b0;
assign ltl9c3 =
  ltl9c3_w_out_3 |
  ltl9c3_w_out_5 |
  ltl9c3_w_out_7 |
  ltl9c3_w_out_9 |
1'b0;
assign ltl6c3 =
  ltl6c3_w_out_3 |
  ltl6c3_w_out_5 |
  ltl6c3_w_out_7 |
  ltl6c3_w_out_9 |
1'b0;
assign ltl2c3 =
  ltl2c3_w_out_2 |
  ltl2c3_w_out_4 |
  ltl2c3_w_out_7 |
  ltl2c3_w_out_9 |
1'b0;
assign ltl3c3 =
  ltl3c3_w_out_2 |
  ltl3c3_w_out_4 |
  ltl3c3_w_out_7 |
  ltl3c3_w_out_9 |
1'b0;
assign ltl7c3 =
  ltl7c3_w_out_3 |
  ltl7c3_w_out_5 |
  ltl7c3_w_out_7 |
  ltl7c3_w_out_9 |
1'b0;
assign ltl0c3 =
  ltl0c3_w_out_2 |
  ltl0c3_w_out_4 |
  ltl0c3_w_out_7 |
  ltl0c3_w_out_9 |
1'b0;
assign ltl4c3 =
  ltl4c3_w_out_2 |
  ltl4c3_w_out_4 |
  ltl4c3_w_out_7 |
  ltl4c3_w_out_9 |
1'b0;





Automata_Stage0C3 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl1c3_w_out_2(ltl1c3_w_out_2),
                                              .ltl1c3_w_out_4(ltl1c3_w_out_4),
                                              .ltl1c3_w_out_7(ltl1c3_w_out_7),
                                              .ltl1c3_w_out_9(ltl1c3_w_out_9),
                                             
                                              .ltl8c3_w_out_3(ltl8c3_w_out_3),
                                              .ltl8c3_w_out_5(ltl8c3_w_out_5),
                                              .ltl8c3_w_out_7(ltl8c3_w_out_7),
                                              .ltl8c3_w_out_9(ltl8c3_w_out_9),
                                             
                                              .ltl5c3_w_out_2(ltl5c3_w_out_2),
                                              .ltl5c3_w_out_4(ltl5c3_w_out_4),
                                              .ltl5c3_w_out_7(ltl5c3_w_out_7),
                                              .ltl5c3_w_out_9(ltl5c3_w_out_9),
                                             
                                              .ltl9c3_w_out_3(ltl9c3_w_out_3),
                                              .ltl9c3_w_out_5(ltl9c3_w_out_5),
                                              .ltl9c3_w_out_7(ltl9c3_w_out_7),
                                              .ltl9c3_w_out_9(ltl9c3_w_out_9),
                                             
                                              .ltl6c3_w_out_3(ltl6c3_w_out_3),
                                              .ltl6c3_w_out_5(ltl6c3_w_out_5),
                                              .ltl6c3_w_out_7(ltl6c3_w_out_7),
                                              .ltl6c3_w_out_9(ltl6c3_w_out_9),
                                             
                                              .ltl2c3_w_out_2(ltl2c3_w_out_2),
                                              .ltl2c3_w_out_4(ltl2c3_w_out_4),
                                              .ltl2c3_w_out_7(ltl2c3_w_out_7),
                                              .ltl2c3_w_out_9(ltl2c3_w_out_9),
                                             
                                              .ltl3c3_w_out_2(ltl3c3_w_out_2),
                                              .ltl3c3_w_out_4(ltl3c3_w_out_4),
                                              .ltl3c3_w_out_7(ltl3c3_w_out_7),
                                              .ltl3c3_w_out_9(ltl3c3_w_out_9),
                                             
                                              .ltl7c3_w_out_3(ltl7c3_w_out_3),
                                              .ltl7c3_w_out_5(ltl7c3_w_out_5),
                                              .ltl7c3_w_out_7(ltl7c3_w_out_7),
                                              .ltl7c3_w_out_9(ltl7c3_w_out_9),
                                             
                                              .ltl0c3_w_out_2(ltl0c3_w_out_2),
                                              .ltl0c3_w_out_4(ltl0c3_w_out_4),
                                              .ltl0c3_w_out_7(ltl0c3_w_out_7),
                                              .ltl0c3_w_out_9(ltl0c3_w_out_9),
                                             
                                              .ltl4c3_w_out_2(ltl4c3_w_out_2),
                                              .ltl4c3_w_out_4(ltl4c3_w_out_4),
                                              .ltl4c3_w_out_7(ltl4c3_w_out_7),
                                              .ltl4c3_w_out_9(ltl4c3_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

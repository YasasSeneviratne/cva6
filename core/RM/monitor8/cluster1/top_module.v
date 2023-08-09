

module Top_ModuleC1(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl8c1
                   , output wire ltl1c1
                   , output wire ltl7c1
                   , output wire ltl2c1
                   , output wire ltl6c1
                   , output wire ltl4c1
                   , output wire ltl0c1
                   , output wire ltl5c1
                   , output wire ltl3c1
                  
                  );
  wire ltl8c1_w_out_2;
  wire ltl8c1_w_out_4;
  wire ltl8c1_w_out_7;
  wire ltl8c1_w_out_9;
  wire ltl1c1_w_out_2;
  wire ltl1c1_w_out_4;
  wire ltl1c1_w_out_7;
  wire ltl1c1_w_out_9;
  wire ltl7c1_w_out_3;
  wire ltl7c1_w_out_5;
  wire ltl7c1_w_out_7;
  wire ltl7c1_w_out_9;
  wire ltl2c1_w_out_2;
  wire ltl2c1_w_out_4;
  wire ltl2c1_w_out_7;
  wire ltl2c1_w_out_9;
  wire ltl6c1_w_out_3;
  wire ltl6c1_w_out_5;
  wire ltl6c1_w_out_7;
  wire ltl6c1_w_out_9;
  wire ltl4c1_w_out_3;
  wire ltl4c1_w_out_5;
  wire ltl4c1_w_out_7;
  wire ltl4c1_w_out_9;
  wire ltl0c1_w_out_2;
  wire ltl0c1_w_out_4;
  wire ltl0c1_w_out_7;
  wire ltl0c1_w_out_9;
  wire ltl5c1_w_out_3;
  wire ltl5c1_w_out_5;
  wire ltl5c1_w_out_7;
  wire ltl5c1_w_out_9;
  wire ltl3c1_w_out_3;
  wire ltl3c1_w_out_5;
  wire ltl3c1_w_out_7;
  wire ltl3c1_w_out_9;

assign ltl8c1 =
  ltl8c1_w_out_2 |
  ltl8c1_w_out_4 |
  ltl8c1_w_out_7 |
  ltl8c1_w_out_9 |
1'b0;
assign ltl1c1 =
  ltl1c1_w_out_2 |
  ltl1c1_w_out_4 |
  ltl1c1_w_out_7 |
  ltl1c1_w_out_9 |
1'b0;
assign ltl7c1 =
  ltl7c1_w_out_3 |
  ltl7c1_w_out_5 |
  ltl7c1_w_out_7 |
  ltl7c1_w_out_9 |
1'b0;
assign ltl2c1 =
  ltl2c1_w_out_2 |
  ltl2c1_w_out_4 |
  ltl2c1_w_out_7 |
  ltl2c1_w_out_9 |
1'b0;
assign ltl6c1 =
  ltl6c1_w_out_3 |
  ltl6c1_w_out_5 |
  ltl6c1_w_out_7 |
  ltl6c1_w_out_9 |
1'b0;
assign ltl4c1 =
  ltl4c1_w_out_3 |
  ltl4c1_w_out_5 |
  ltl4c1_w_out_7 |
  ltl4c1_w_out_9 |
1'b0;
assign ltl0c1 =
  ltl0c1_w_out_2 |
  ltl0c1_w_out_4 |
  ltl0c1_w_out_7 |
  ltl0c1_w_out_9 |
1'b0;
assign ltl5c1 =
  ltl5c1_w_out_3 |
  ltl5c1_w_out_5 |
  ltl5c1_w_out_7 |
  ltl5c1_w_out_9 |
1'b0;
assign ltl3c1 =
  ltl3c1_w_out_3 |
  ltl3c1_w_out_5 |
  ltl3c1_w_out_7 |
  ltl3c1_w_out_9 |
1'b0;





Automata_Stage0C1 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl8c1_w_out_2(ltl8c1_w_out_2),
                                              .ltl8c1_w_out_4(ltl8c1_w_out_4),
                                              .ltl8c1_w_out_7(ltl8c1_w_out_7),
                                              .ltl8c1_w_out_9(ltl8c1_w_out_9),
                                             
                                              .ltl1c1_w_out_2(ltl1c1_w_out_2),
                                              .ltl1c1_w_out_4(ltl1c1_w_out_4),
                                              .ltl1c1_w_out_7(ltl1c1_w_out_7),
                                              .ltl1c1_w_out_9(ltl1c1_w_out_9),
                                             
                                              .ltl7c1_w_out_3(ltl7c1_w_out_3),
                                              .ltl7c1_w_out_5(ltl7c1_w_out_5),
                                              .ltl7c1_w_out_7(ltl7c1_w_out_7),
                                              .ltl7c1_w_out_9(ltl7c1_w_out_9),
                                             
                                              .ltl2c1_w_out_2(ltl2c1_w_out_2),
                                              .ltl2c1_w_out_4(ltl2c1_w_out_4),
                                              .ltl2c1_w_out_7(ltl2c1_w_out_7),
                                              .ltl2c1_w_out_9(ltl2c1_w_out_9),
                                             
                                              .ltl6c1_w_out_3(ltl6c1_w_out_3),
                                              .ltl6c1_w_out_5(ltl6c1_w_out_5),
                                              .ltl6c1_w_out_7(ltl6c1_w_out_7),
                                              .ltl6c1_w_out_9(ltl6c1_w_out_9),
                                             
                                              .ltl4c1_w_out_3(ltl4c1_w_out_3),
                                              .ltl4c1_w_out_5(ltl4c1_w_out_5),
                                              .ltl4c1_w_out_7(ltl4c1_w_out_7),
                                              .ltl4c1_w_out_9(ltl4c1_w_out_9),
                                             
                                              .ltl0c1_w_out_2(ltl0c1_w_out_2),
                                              .ltl0c1_w_out_4(ltl0c1_w_out_4),
                                              .ltl0c1_w_out_7(ltl0c1_w_out_7),
                                              .ltl0c1_w_out_9(ltl0c1_w_out_9),
                                             
                                              .ltl5c1_w_out_3(ltl5c1_w_out_3),
                                              .ltl5c1_w_out_5(ltl5c1_w_out_5),
                                              .ltl5c1_w_out_7(ltl5c1_w_out_7),
                                              .ltl5c1_w_out_9(ltl5c1_w_out_9),
                                             
                                              .ltl3c1_w_out_3(ltl3c1_w_out_3),
                                              .ltl3c1_w_out_5(ltl3c1_w_out_5),
                                              .ltl3c1_w_out_7(ltl3c1_w_out_7),
                                              .ltl3c1_w_out_9(ltl3c1_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

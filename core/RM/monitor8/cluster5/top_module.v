

module Top_ModuleC5(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl6c5
                   , output wire ltl8c5
                   , output wire ltl0c5
                   , output wire ltl3c5
                   , output wire ltl5c5
                   , output wire ltl7c5
                   , output wire ltl1c5
                   , output wire ltl2c5
                   , output wire ltl4c5
                  
                  );
  wire ltl6c5_w_out_3;
  wire ltl6c5_w_out_5;
  wire ltl6c5_w_out_7;
  wire ltl6c5_w_out_9;
  wire ltl8c5_w_out_3;
  wire ltl8c5_w_out_5;
  wire ltl8c5_w_out_7;
  wire ltl8c5_w_out_9;
  wire ltl0c5_w_out_2;
  wire ltl0c5_w_out_4;
  wire ltl0c5_w_out_7;
  wire ltl0c5_w_out_9;
  wire ltl3c5_w_out_3;
  wire ltl3c5_w_out_5;
  wire ltl3c5_w_out_7;
  wire ltl3c5_w_out_9;
  wire ltl5c5_w_out_3;
  wire ltl5c5_w_out_5;
  wire ltl5c5_w_out_7;
  wire ltl5c5_w_out_9;
  wire ltl7c5_w_out_3;
  wire ltl7c5_w_out_5;
  wire ltl7c5_w_out_7;
  wire ltl7c5_w_out_9;
  wire ltl1c5_w_out_3;
  wire ltl1c5_w_out_5;
  wire ltl1c5_w_out_7;
  wire ltl1c5_w_out_9;
  wire ltl2c5_w_out_2;
  wire ltl2c5_w_out_4;
  wire ltl2c5_w_out_7;
  wire ltl2c5_w_out_9;
  wire ltl4c5_w_out_3;
  wire ltl4c5_w_out_5;
  wire ltl4c5_w_out_7;
  wire ltl4c5_w_out_9;

assign ltl6c5 =
  ltl6c5_w_out_3 |
  ltl6c5_w_out_5 |
  ltl6c5_w_out_7 |
  ltl6c5_w_out_9 |
1'b0;
assign ltl8c5 =
  ltl8c5_w_out_3 |
  ltl8c5_w_out_5 |
  ltl8c5_w_out_7 |
  ltl8c5_w_out_9 |
1'b0;
assign ltl0c5 =
  ltl0c5_w_out_2 |
  ltl0c5_w_out_4 |
  ltl0c5_w_out_7 |
  ltl0c5_w_out_9 |
1'b0;
assign ltl3c5 =
  ltl3c5_w_out_3 |
  ltl3c5_w_out_5 |
  ltl3c5_w_out_7 |
  ltl3c5_w_out_9 |
1'b0;
assign ltl5c5 =
  ltl5c5_w_out_3 |
  ltl5c5_w_out_5 |
  ltl5c5_w_out_7 |
  ltl5c5_w_out_9 |
1'b0;
assign ltl7c5 =
  ltl7c5_w_out_3 |
  ltl7c5_w_out_5 |
  ltl7c5_w_out_7 |
  ltl7c5_w_out_9 |
1'b0;
assign ltl1c5 =
  ltl1c5_w_out_3 |
  ltl1c5_w_out_5 |
  ltl1c5_w_out_7 |
  ltl1c5_w_out_9 |
1'b0;
assign ltl2c5 =
  ltl2c5_w_out_2 |
  ltl2c5_w_out_4 |
  ltl2c5_w_out_7 |
  ltl2c5_w_out_9 |
1'b0;
assign ltl4c5 =
  ltl4c5_w_out_3 |
  ltl4c5_w_out_5 |
  ltl4c5_w_out_7 |
  ltl4c5_w_out_9 |
1'b0;





Automata_Stage0C5 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl6c5_w_out_3(ltl6c5_w_out_3),
                                              .ltl6c5_w_out_5(ltl6c5_w_out_5),
                                              .ltl6c5_w_out_7(ltl6c5_w_out_7),
                                              .ltl6c5_w_out_9(ltl6c5_w_out_9),
                                             
                                              .ltl8c5_w_out_3(ltl8c5_w_out_3),
                                              .ltl8c5_w_out_5(ltl8c5_w_out_5),
                                              .ltl8c5_w_out_7(ltl8c5_w_out_7),
                                              .ltl8c5_w_out_9(ltl8c5_w_out_9),
                                             
                                              .ltl0c5_w_out_2(ltl0c5_w_out_2),
                                              .ltl0c5_w_out_4(ltl0c5_w_out_4),
                                              .ltl0c5_w_out_7(ltl0c5_w_out_7),
                                              .ltl0c5_w_out_9(ltl0c5_w_out_9),
                                             
                                              .ltl3c5_w_out_3(ltl3c5_w_out_3),
                                              .ltl3c5_w_out_5(ltl3c5_w_out_5),
                                              .ltl3c5_w_out_7(ltl3c5_w_out_7),
                                              .ltl3c5_w_out_9(ltl3c5_w_out_9),
                                             
                                              .ltl5c5_w_out_3(ltl5c5_w_out_3),
                                              .ltl5c5_w_out_5(ltl5c5_w_out_5),
                                              .ltl5c5_w_out_7(ltl5c5_w_out_7),
                                              .ltl5c5_w_out_9(ltl5c5_w_out_9),
                                             
                                              .ltl7c5_w_out_3(ltl7c5_w_out_3),
                                              .ltl7c5_w_out_5(ltl7c5_w_out_5),
                                              .ltl7c5_w_out_7(ltl7c5_w_out_7),
                                              .ltl7c5_w_out_9(ltl7c5_w_out_9),
                                             
                                              .ltl1c5_w_out_3(ltl1c5_w_out_3),
                                              .ltl1c5_w_out_5(ltl1c5_w_out_5),
                                              .ltl1c5_w_out_7(ltl1c5_w_out_7),
                                              .ltl1c5_w_out_9(ltl1c5_w_out_9),
                                             
                                              .ltl2c5_w_out_2(ltl2c5_w_out_2),
                                              .ltl2c5_w_out_4(ltl2c5_w_out_4),
                                              .ltl2c5_w_out_7(ltl2c5_w_out_7),
                                              .ltl2c5_w_out_9(ltl2c5_w_out_9),
                                             
                                              .ltl4c5_w_out_3(ltl4c5_w_out_3),
                                              .ltl4c5_w_out_5(ltl4c5_w_out_5),
                                              .ltl4c5_w_out_7(ltl4c5_w_out_7),
                                              .ltl4c5_w_out_9(ltl4c5_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

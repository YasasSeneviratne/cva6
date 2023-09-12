

module Top_ModuleC7(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl8c7
                   , output wire ltl2c7
                   , output wire ltl6c7
                   , output wire ltl1c7
                   , output wire ltl5c7
                   , output wire ltl0c7
                   , output wire ltl7c7
                   , output wire ltl3c7
                   , output wire ltl4c7
                  
                  );
  wire ltl8c7_w_out_4;
  wire ltl8c7_w_out_6;
  wire ltl8c7_w_out_9;
  wire ltl8c7_w_out_11;
  wire ltl2c7_w_out_4;
  wire ltl2c7_w_out_6;
  wire ltl2c7_w_out_9;
  wire ltl2c7_w_out_11;
  wire ltl6c7_w_out_4;
  wire ltl6c7_w_out_6;
  wire ltl6c7_w_out_9;
  wire ltl6c7_w_out_11;
  wire ltl1c7_w_out_4;
  wire ltl1c7_w_out_6;
  wire ltl1c7_w_out_9;
  wire ltl1c7_w_out_11;
  wire ltl5c7_w_out_4;
  wire ltl5c7_w_out_6;
  wire ltl5c7_w_out_9;
  wire ltl5c7_w_out_11;
  wire ltl0c7_w_out_4;
  wire ltl0c7_w_out_6;
  wire ltl0c7_w_out_9;
  wire ltl0c7_w_out_11;
  wire ltl7c7_w_out_4;
  wire ltl7c7_w_out_6;
  wire ltl7c7_w_out_9;
  wire ltl7c7_w_out_11;
  wire ltl3c7_w_out_4;
  wire ltl3c7_w_out_6;
  wire ltl3c7_w_out_9;
  wire ltl3c7_w_out_11;
  wire ltl4c7_w_out_4;
  wire ltl4c7_w_out_6;
  wire ltl4c7_w_out_9;
  wire ltl4c7_w_out_11;

assign ltl8c7 =
  ltl8c7_w_out_4 |
  ltl8c7_w_out_6 |
  ltl8c7_w_out_9 |
  ltl8c7_w_out_11 |
1'b0;
assign ltl2c7 =
  ltl2c7_w_out_4 |
  ltl2c7_w_out_6 |
  ltl2c7_w_out_9 |
  ltl2c7_w_out_11 |
1'b0;
assign ltl6c7 =
  ltl6c7_w_out_4 |
  ltl6c7_w_out_6 |
  ltl6c7_w_out_9 |
  ltl6c7_w_out_11 |
1'b0;
assign ltl1c7 =
  ltl1c7_w_out_4 |
  ltl1c7_w_out_6 |
  ltl1c7_w_out_9 |
  ltl1c7_w_out_11 |
1'b0;
assign ltl5c7 =
  ltl5c7_w_out_4 |
  ltl5c7_w_out_6 |
  ltl5c7_w_out_9 |
  ltl5c7_w_out_11 |
1'b0;
assign ltl0c7 =
  ltl0c7_w_out_4 |
  ltl0c7_w_out_6 |
  ltl0c7_w_out_9 |
  ltl0c7_w_out_11 |
1'b0;
assign ltl7c7 =
  ltl7c7_w_out_4 |
  ltl7c7_w_out_6 |
  ltl7c7_w_out_9 |
  ltl7c7_w_out_11 |
1'b0;
assign ltl3c7 =
  ltl3c7_w_out_4 |
  ltl3c7_w_out_6 |
  ltl3c7_w_out_9 |
  ltl3c7_w_out_11 |
1'b0;
assign ltl4c7 =
  ltl4c7_w_out_4 |
  ltl4c7_w_out_6 |
  ltl4c7_w_out_9 |
  ltl4c7_w_out_11 |
1'b0;





Automata_Stage0C7 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl8c7_w_out_4(ltl8c7_w_out_4),
                                              .ltl8c7_w_out_6(ltl8c7_w_out_6),
                                              .ltl8c7_w_out_9(ltl8c7_w_out_9),
                                              .ltl8c7_w_out_11(ltl8c7_w_out_11),
                                             
                                              .ltl2c7_w_out_4(ltl2c7_w_out_4),
                                              .ltl2c7_w_out_6(ltl2c7_w_out_6),
                                              .ltl2c7_w_out_9(ltl2c7_w_out_9),
                                              .ltl2c7_w_out_11(ltl2c7_w_out_11),
                                             
                                              .ltl6c7_w_out_4(ltl6c7_w_out_4),
                                              .ltl6c7_w_out_6(ltl6c7_w_out_6),
                                              .ltl6c7_w_out_9(ltl6c7_w_out_9),
                                              .ltl6c7_w_out_11(ltl6c7_w_out_11),
                                             
                                              .ltl1c7_w_out_4(ltl1c7_w_out_4),
                                              .ltl1c7_w_out_6(ltl1c7_w_out_6),
                                              .ltl1c7_w_out_9(ltl1c7_w_out_9),
                                              .ltl1c7_w_out_11(ltl1c7_w_out_11),
                                             
                                              .ltl5c7_w_out_4(ltl5c7_w_out_4),
                                              .ltl5c7_w_out_6(ltl5c7_w_out_6),
                                              .ltl5c7_w_out_9(ltl5c7_w_out_9),
                                              .ltl5c7_w_out_11(ltl5c7_w_out_11),
                                             
                                              .ltl0c7_w_out_4(ltl0c7_w_out_4),
                                              .ltl0c7_w_out_6(ltl0c7_w_out_6),
                                              .ltl0c7_w_out_9(ltl0c7_w_out_9),
                                              .ltl0c7_w_out_11(ltl0c7_w_out_11),
                                             
                                              .ltl7c7_w_out_4(ltl7c7_w_out_4),
                                              .ltl7c7_w_out_6(ltl7c7_w_out_6),
                                              .ltl7c7_w_out_9(ltl7c7_w_out_9),
                                              .ltl7c7_w_out_11(ltl7c7_w_out_11),
                                             
                                              .ltl3c7_w_out_4(ltl3c7_w_out_4),
                                              .ltl3c7_w_out_6(ltl3c7_w_out_6),
                                              .ltl3c7_w_out_9(ltl3c7_w_out_9),
                                              .ltl3c7_w_out_11(ltl3c7_w_out_11),
                                             
                                              .ltl4c7_w_out_4(ltl4c7_w_out_4),
                                              .ltl4c7_w_out_6(ltl4c7_w_out_6),
                                              .ltl4c7_w_out_9(ltl4c7_w_out_9),
                                              .ltl4c7_w_out_11(ltl4c7_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

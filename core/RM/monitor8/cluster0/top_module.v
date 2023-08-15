

module Top_ModuleC0(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl2c0
                   , output wire ltl9c0
                   , output wire ltl0c0
                   , output wire ltl8c0
                   , output wire ltl1c0
                   , output wire ltl4c0
                   , output wire ltl3c0
                   , output wire ltl10c0
                   , output wire ltl7c0
                   , output wire ltl5c0
                   , output wire ltl6c0
                  
                  );
  wire ltl2c0_w_out_4;
  wire ltl2c0_w_out_6;
  wire ltl2c0_w_out_9;
  wire ltl2c0_w_out_11;
  wire ltl9c0_w_out_4;
  wire ltl9c0_w_out_6;
  wire ltl9c0_w_out_9;
  wire ltl9c0_w_out_11;
  wire ltl0c0_w_out_4;
  wire ltl0c0_w_out_6;
  wire ltl0c0_w_out_9;
  wire ltl0c0_w_out_11;
  wire ltl8c0_w_out_4;
  wire ltl8c0_w_out_6;
  wire ltl8c0_w_out_9;
  wire ltl8c0_w_out_11;
  wire ltl1c0_w_out_4;
  wire ltl1c0_w_out_6;
  wire ltl1c0_w_out_9;
  wire ltl1c0_w_out_11;
  wire ltl4c0_w_out_4;
  wire ltl4c0_w_out_6;
  wire ltl4c0_w_out_9;
  wire ltl4c0_w_out_11;
  wire ltl3c0_w_out_4;
  wire ltl3c0_w_out_6;
  wire ltl3c0_w_out_9;
  wire ltl3c0_w_out_11;
  wire ltl10c0_w_out_4;
  wire ltl10c0_w_out_6;
  wire ltl10c0_w_out_9;
  wire ltl10c0_w_out_11;
  wire ltl7c0_w_out_4;
  wire ltl7c0_w_out_6;
  wire ltl7c0_w_out_9;
  wire ltl7c0_w_out_11;
  wire ltl5c0_w_out_4;
  wire ltl5c0_w_out_6;
  wire ltl5c0_w_out_9;
  wire ltl5c0_w_out_11;
  wire ltl6c0_w_out_4;
  wire ltl6c0_w_out_6;
  wire ltl6c0_w_out_9;
  wire ltl6c0_w_out_11;

assign ltl2c0 =
  ltl2c0_w_out_4 |
  ltl2c0_w_out_6 |
  ltl2c0_w_out_9 |
  ltl2c0_w_out_11 |
1'b0;
assign ltl9c0 =
  ltl9c0_w_out_4 |
  ltl9c0_w_out_6 |
  ltl9c0_w_out_9 |
  ltl9c0_w_out_11 |
1'b0;
assign ltl0c0 =
  ltl0c0_w_out_4 |
  ltl0c0_w_out_6 |
  ltl0c0_w_out_9 |
  ltl0c0_w_out_11 |
1'b0;
assign ltl8c0 =
  ltl8c0_w_out_4 |
  ltl8c0_w_out_6 |
  ltl8c0_w_out_9 |
  ltl8c0_w_out_11 |
1'b0;
assign ltl1c0 =
  ltl1c0_w_out_4 |
  ltl1c0_w_out_6 |
  ltl1c0_w_out_9 |
  ltl1c0_w_out_11 |
1'b0;
assign ltl4c0 =
  ltl4c0_w_out_4 |
  ltl4c0_w_out_6 |
  ltl4c0_w_out_9 |
  ltl4c0_w_out_11 |
1'b0;
assign ltl3c0 =
  ltl3c0_w_out_4 |
  ltl3c0_w_out_6 |
  ltl3c0_w_out_9 |
  ltl3c0_w_out_11 |
1'b0;
assign ltl10c0 =
  ltl10c0_w_out_4 |
  ltl10c0_w_out_6 |
  ltl10c0_w_out_9 |
  ltl10c0_w_out_11 |
1'b0;
assign ltl7c0 =
  ltl7c0_w_out_4 |
  ltl7c0_w_out_6 |
  ltl7c0_w_out_9 |
  ltl7c0_w_out_11 |
1'b0;
assign ltl5c0 =
  ltl5c0_w_out_4 |
  ltl5c0_w_out_6 |
  ltl5c0_w_out_9 |
  ltl5c0_w_out_11 |
1'b0;
assign ltl6c0 =
  ltl6c0_w_out_4 |
  ltl6c0_w_out_6 |
  ltl6c0_w_out_9 |
  ltl6c0_w_out_11 |
1'b0;





Automata_Stage0C0 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl2c0_w_out_4(ltl2c0_w_out_4),
                                              .ltl2c0_w_out_6(ltl2c0_w_out_6),
                                              .ltl2c0_w_out_9(ltl2c0_w_out_9),
                                              .ltl2c0_w_out_11(ltl2c0_w_out_11),
                                             
                                              .ltl9c0_w_out_4(ltl9c0_w_out_4),
                                              .ltl9c0_w_out_6(ltl9c0_w_out_6),
                                              .ltl9c0_w_out_9(ltl9c0_w_out_9),
                                              .ltl9c0_w_out_11(ltl9c0_w_out_11),
                                             
                                              .ltl0c0_w_out_4(ltl0c0_w_out_4),
                                              .ltl0c0_w_out_6(ltl0c0_w_out_6),
                                              .ltl0c0_w_out_9(ltl0c0_w_out_9),
                                              .ltl0c0_w_out_11(ltl0c0_w_out_11),
                                             
                                              .ltl8c0_w_out_4(ltl8c0_w_out_4),
                                              .ltl8c0_w_out_6(ltl8c0_w_out_6),
                                              .ltl8c0_w_out_9(ltl8c0_w_out_9),
                                              .ltl8c0_w_out_11(ltl8c0_w_out_11),
                                             
                                              .ltl1c0_w_out_4(ltl1c0_w_out_4),
                                              .ltl1c0_w_out_6(ltl1c0_w_out_6),
                                              .ltl1c0_w_out_9(ltl1c0_w_out_9),
                                              .ltl1c0_w_out_11(ltl1c0_w_out_11),
                                             
                                              .ltl4c0_w_out_4(ltl4c0_w_out_4),
                                              .ltl4c0_w_out_6(ltl4c0_w_out_6),
                                              .ltl4c0_w_out_9(ltl4c0_w_out_9),
                                              .ltl4c0_w_out_11(ltl4c0_w_out_11),
                                             
                                              .ltl3c0_w_out_4(ltl3c0_w_out_4),
                                              .ltl3c0_w_out_6(ltl3c0_w_out_6),
                                              .ltl3c0_w_out_9(ltl3c0_w_out_9),
                                              .ltl3c0_w_out_11(ltl3c0_w_out_11),
                                             
                                              .ltl10c0_w_out_4(ltl10c0_w_out_4),
                                              .ltl10c0_w_out_6(ltl10c0_w_out_6),
                                              .ltl10c0_w_out_9(ltl10c0_w_out_9),
                                              .ltl10c0_w_out_11(ltl10c0_w_out_11),
                                             
                                              .ltl7c0_w_out_4(ltl7c0_w_out_4),
                                              .ltl7c0_w_out_6(ltl7c0_w_out_6),
                                              .ltl7c0_w_out_9(ltl7c0_w_out_9),
                                              .ltl7c0_w_out_11(ltl7c0_w_out_11),
                                             
                                              .ltl5c0_w_out_4(ltl5c0_w_out_4),
                                              .ltl5c0_w_out_6(ltl5c0_w_out_6),
                                              .ltl5c0_w_out_9(ltl5c0_w_out_9),
                                              .ltl5c0_w_out_11(ltl5c0_w_out_11),
                                             
                                              .ltl6c0_w_out_4(ltl6c0_w_out_4),
                                              .ltl6c0_w_out_6(ltl6c0_w_out_6),
                                              .ltl6c0_w_out_9(ltl6c0_w_out_9),
                                              .ltl6c0_w_out_11(ltl6c0_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

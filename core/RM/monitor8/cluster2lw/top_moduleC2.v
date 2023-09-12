

module Top_ModuleC2lw(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl6c2lw
                   , output wire ltl0c2lw
                   , output wire ltl7c2lw
                   , output wire ltl9c2lw
                   , output wire ltl1c2lw
                   , output wire ltl4c2lw
                   , output wire ltl8c2lw
                   , output wire ltl2c2lw
                   , output wire ltl3c2lw
                   , output wire ltl5c2lw
                  
                  );
  wire ltl6c2lw_w_out_4;
  wire ltl6c2lw_w_out_6;
  wire ltl6c2lw_w_out_9;
  wire ltl6c2lw_w_out_11;
  wire ltl0c2lw_w_out_4;
  wire ltl0c2lw_w_out_6;
  wire ltl0c2lw_w_out_9;
  wire ltl0c2lw_w_out_11;
  wire ltl7c2lw_w_out_4;
  wire ltl7c2lw_w_out_6;
  wire ltl7c2lw_w_out_9;
  wire ltl7c2lw_w_out_11;
  wire ltl9c2lw_w_out_4;
  wire ltl9c2lw_w_out_6;
  wire ltl9c2lw_w_out_9;
  wire ltl9c2lw_w_out_11;
  wire ltl1c2lw_w_out_4;
  wire ltl1c2lw_w_out_6;
  wire ltl1c2lw_w_out_9;
  wire ltl1c2lw_w_out_11;
  wire ltl4c2lw_w_out_4;
  wire ltl4c2lw_w_out_6;
  wire ltl4c2lw_w_out_9;
  wire ltl4c2lw_w_out_11;
  wire ltl8c2lw_w_out_4;
  wire ltl8c2lw_w_out_6;
  wire ltl8c2lw_w_out_9;
  wire ltl8c2lw_w_out_11;
  wire ltl2c2lw_w_out_4;
  wire ltl2c2lw_w_out_6;
  wire ltl2c2lw_w_out_9;
  wire ltl2c2lw_w_out_11;
  wire ltl3c2lw_w_out_4;
  wire ltl3c2lw_w_out_6;
  wire ltl3c2lw_w_out_9;
  wire ltl3c2lw_w_out_11;
  wire ltl5c2lw_w_out_4;
  wire ltl5c2lw_w_out_6;
  wire ltl5c2lw_w_out_9;
  wire ltl5c2lw_w_out_11;

assign ltl6c2lw =
  ltl6c2lw_w_out_4 |
  ltl6c2lw_w_out_6 |
  ltl6c2lw_w_out_9 |
  ltl6c2lw_w_out_11 |
1'b0;
assign ltl0c2lw =
  ltl0c2lw_w_out_4 |
  ltl0c2lw_w_out_6 |
  ltl0c2lw_w_out_9 |
  ltl0c2lw_w_out_11 |
1'b0;
assign ltl7c2lw =
  ltl7c2lw_w_out_4 |
  ltl7c2lw_w_out_6 |
  ltl7c2lw_w_out_9 |
  ltl7c2lw_w_out_11 |
1'b0;
assign ltl9c2lw =
  ltl9c2lw_w_out_4 |
  ltl9c2lw_w_out_6 |
  ltl9c2lw_w_out_9 |
  ltl9c2lw_w_out_11 |
1'b0;
assign ltl1c2lw =
  ltl1c2lw_w_out_4 |
  ltl1c2lw_w_out_6 |
  ltl1c2lw_w_out_9 |
  ltl1c2lw_w_out_11 |
1'b0;
assign ltl4c2lw =
  ltl4c2lw_w_out_4 |
  ltl4c2lw_w_out_6 |
  ltl4c2lw_w_out_9 |
  ltl4c2lw_w_out_11 |
1'b0;
assign ltl8c2lw =
  ltl8c2lw_w_out_4 |
  ltl8c2lw_w_out_6 |
  ltl8c2lw_w_out_9 |
  ltl8c2lw_w_out_11 |
1'b0;
assign ltl2c2lw =
  ltl2c2lw_w_out_4 |
  ltl2c2lw_w_out_6 |
  ltl2c2lw_w_out_9 |
  ltl2c2lw_w_out_11 |
1'b0;
assign ltl3c2lw =
  ltl3c2lw_w_out_4 |
  ltl3c2lw_w_out_6 |
  ltl3c2lw_w_out_9 |
  ltl3c2lw_w_out_11 |
1'b0;
assign ltl5c2lw =
  ltl5c2lw_w_out_4 |
  ltl5c2lw_w_out_6 |
  ltl5c2lw_w_out_9 |
  ltl5c2lw_w_out_11 |
1'b0;





Automata_Stage0C2lw automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl6c2lw_w_out_4(ltl6c2lw_w_out_4),
                                              .ltl6c2lw_w_out_6(ltl6c2lw_w_out_6),
                                              .ltl6c2lw_w_out_9(ltl6c2lw_w_out_9),
                                              .ltl6c2lw_w_out_11(ltl6c2lw_w_out_11),
                                             
                                              .ltl0c2lw_w_out_4(ltl0c2lw_w_out_4),
                                              .ltl0c2lw_w_out_6(ltl0c2lw_w_out_6),
                                              .ltl0c2lw_w_out_9(ltl0c2lw_w_out_9),
                                              .ltl0c2lw_w_out_11(ltl0c2lw_w_out_11),
                                             
                                              .ltl7c2lw_w_out_4(ltl7c2lw_w_out_4),
                                              .ltl7c2lw_w_out_6(ltl7c2lw_w_out_6),
                                              .ltl7c2lw_w_out_9(ltl7c2lw_w_out_9),
                                              .ltl7c2lw_w_out_11(ltl7c2lw_w_out_11),
                                             
                                              .ltl9c2lw_w_out_4(ltl9c2lw_w_out_4),
                                              .ltl9c2lw_w_out_6(ltl9c2lw_w_out_6),
                                              .ltl9c2lw_w_out_9(ltl9c2lw_w_out_9),
                                              .ltl9c2lw_w_out_11(ltl9c2lw_w_out_11),
                                             
                                              .ltl1c2lw_w_out_4(ltl1c2lw_w_out_4),
                                              .ltl1c2lw_w_out_6(ltl1c2lw_w_out_6),
                                              .ltl1c2lw_w_out_9(ltl1c2lw_w_out_9),
                                              .ltl1c2lw_w_out_11(ltl1c2lw_w_out_11),
                                             
                                              .ltl4c2lw_w_out_4(ltl4c2lw_w_out_4),
                                              .ltl4c2lw_w_out_6(ltl4c2lw_w_out_6),
                                              .ltl4c2lw_w_out_9(ltl4c2lw_w_out_9),
                                              .ltl4c2lw_w_out_11(ltl4c2lw_w_out_11),
                                             
                                              .ltl8c2lw_w_out_4(ltl8c2lw_w_out_4),
                                              .ltl8c2lw_w_out_6(ltl8c2lw_w_out_6),
                                              .ltl8c2lw_w_out_9(ltl8c2lw_w_out_9),
                                              .ltl8c2lw_w_out_11(ltl8c2lw_w_out_11),
                                             
                                              .ltl2c2lw_w_out_4(ltl2c2lw_w_out_4),
                                              .ltl2c2lw_w_out_6(ltl2c2lw_w_out_6),
                                              .ltl2c2lw_w_out_9(ltl2c2lw_w_out_9),
                                              .ltl2c2lw_w_out_11(ltl2c2lw_w_out_11),
                                             
                                              .ltl3c2lw_w_out_4(ltl3c2lw_w_out_4),
                                              .ltl3c2lw_w_out_6(ltl3c2lw_w_out_6),
                                              .ltl3c2lw_w_out_9(ltl3c2lw_w_out_9),
                                              .ltl3c2lw_w_out_11(ltl3c2lw_w_out_11),
                                             
                                              .ltl5c2lw_w_out_4(ltl5c2lw_w_out_4),
                                              .ltl5c2lw_w_out_6(ltl5c2lw_w_out_6),
                                              .ltl5c2lw_w_out_9(ltl5c2lw_w_out_9),
                                              .ltl5c2lw_w_out_11(ltl5c2lw_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

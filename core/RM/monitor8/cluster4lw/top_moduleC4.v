

module Top_ModuleC4lw(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl0c4lw
                   , output wire ltl5c4lw
                   , output wire ltl6c4lw
                   , output wire ltl4c4lw
                   , output wire ltl1c4lw
                   , output wire ltl7c4lw
                   , output wire ltl3c4lw
                   , output wire ltl2c4lw
                   , output wire ltl8c4lw
                  
                  );
  wire ltl0c4lw_w_out_4;
  wire ltl0c4lw_w_out_6;
  wire ltl0c4lw_w_out_9;
  wire ltl0c4lw_w_out_11;
  wire ltl5c4lw_w_out_4;
  wire ltl5c4lw_w_out_6;
  wire ltl5c4lw_w_out_9;
  wire ltl5c4lw_w_out_11;
  wire ltl6c4lw_w_out_4;
  wire ltl6c4lw_w_out_6;
  wire ltl6c4lw_w_out_9;
  wire ltl6c4lw_w_out_11;
  wire ltl4c4lw_w_out_4;
  wire ltl4c4lw_w_out_6;
  wire ltl4c4lw_w_out_9;
  wire ltl4c4lw_w_out_11;
  wire ltl1c4lw_w_out_4;
  wire ltl1c4lw_w_out_6;
  wire ltl1c4lw_w_out_9;
  wire ltl1c4lw_w_out_11;
  wire ltl7c4lw_w_out_4;
  wire ltl7c4lw_w_out_6;
  wire ltl7c4lw_w_out_9;
  wire ltl7c4lw_w_out_11;
  wire ltl3c4lw_w_out_4;
  wire ltl3c4lw_w_out_6;
  wire ltl3c4lw_w_out_9;
  wire ltl3c4lw_w_out_11;
  wire ltl2c4lw_w_out_4;
  wire ltl2c4lw_w_out_6;
  wire ltl2c4lw_w_out_9;
  wire ltl2c4lw_w_out_11;
  wire ltl8c4lw_w_out_4;
  wire ltl8c4lw_w_out_6;
  wire ltl8c4lw_w_out_9;
  wire ltl8c4lw_w_out_11;

assign ltl0c4lw =
  ltl0c4lw_w_out_4 |
  ltl0c4lw_w_out_6 |
  ltl0c4lw_w_out_9 |
  ltl0c4lw_w_out_11 |
1'b0;
assign ltl5c4lw =
  ltl5c4lw_w_out_4 |
  ltl5c4lw_w_out_6 |
  ltl5c4lw_w_out_9 |
  ltl5c4lw_w_out_11 |
1'b0;
assign ltl6c4lw =
  ltl6c4lw_w_out_4 |
  ltl6c4lw_w_out_6 |
  ltl6c4lw_w_out_9 |
  ltl6c4lw_w_out_11 |
1'b0;
assign ltl4c4lw =
  ltl4c4lw_w_out_4 |
  ltl4c4lw_w_out_6 |
  ltl4c4lw_w_out_9 |
  ltl4c4lw_w_out_11 |
1'b0;
assign ltl1c4lw =
  ltl1c4lw_w_out_4 |
  ltl1c4lw_w_out_6 |
  ltl1c4lw_w_out_9 |
  ltl1c4lw_w_out_11 |
1'b0;
assign ltl7c4lw =
  ltl7c4lw_w_out_4 |
  ltl7c4lw_w_out_6 |
  ltl7c4lw_w_out_9 |
  ltl7c4lw_w_out_11 |
1'b0;
assign ltl3c4lw =
  ltl3c4lw_w_out_4 |
  ltl3c4lw_w_out_6 |
  ltl3c4lw_w_out_9 |
  ltl3c4lw_w_out_11 |
1'b0;
assign ltl2c4lw =
  ltl2c4lw_w_out_4 |
  ltl2c4lw_w_out_6 |
  ltl2c4lw_w_out_9 |
  ltl2c4lw_w_out_11 |
1'b0;
assign ltl8c4lw =
  ltl8c4lw_w_out_4 |
  ltl8c4lw_w_out_6 |
  ltl8c4lw_w_out_9 |
  ltl8c4lw_w_out_11 |
1'b0;





Automata_Stage0C4lw automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl0c4lw_w_out_4(ltl0c4lw_w_out_4),
                                              .ltl0c4lw_w_out_6(ltl0c4lw_w_out_6),
                                              .ltl0c4lw_w_out_9(ltl0c4lw_w_out_9),
                                              .ltl0c4lw_w_out_11(ltl0c4lw_w_out_11),
                                             
                                              .ltl5c4lw_w_out_4(ltl5c4lw_w_out_4),
                                              .ltl5c4lw_w_out_6(ltl5c4lw_w_out_6),
                                              .ltl5c4lw_w_out_9(ltl5c4lw_w_out_9),
                                              .ltl5c4lw_w_out_11(ltl5c4lw_w_out_11),
                                             
                                              .ltl6c4lw_w_out_4(ltl6c4lw_w_out_4),
                                              .ltl6c4lw_w_out_6(ltl6c4lw_w_out_6),
                                              .ltl6c4lw_w_out_9(ltl6c4lw_w_out_9),
                                              .ltl6c4lw_w_out_11(ltl6c4lw_w_out_11),
                                             
                                              .ltl4c4lw_w_out_4(ltl4c4lw_w_out_4),
                                              .ltl4c4lw_w_out_6(ltl4c4lw_w_out_6),
                                              .ltl4c4lw_w_out_9(ltl4c4lw_w_out_9),
                                              .ltl4c4lw_w_out_11(ltl4c4lw_w_out_11),
                                             
                                              .ltl1c4lw_w_out_4(ltl1c4lw_w_out_4),
                                              .ltl1c4lw_w_out_6(ltl1c4lw_w_out_6),
                                              .ltl1c4lw_w_out_9(ltl1c4lw_w_out_9),
                                              .ltl1c4lw_w_out_11(ltl1c4lw_w_out_11),
                                             
                                              .ltl7c4lw_w_out_4(ltl7c4lw_w_out_4),
                                              .ltl7c4lw_w_out_6(ltl7c4lw_w_out_6),
                                              .ltl7c4lw_w_out_9(ltl7c4lw_w_out_9),
                                              .ltl7c4lw_w_out_11(ltl7c4lw_w_out_11),
                                             
                                              .ltl3c4lw_w_out_4(ltl3c4lw_w_out_4),
                                              .ltl3c4lw_w_out_6(ltl3c4lw_w_out_6),
                                              .ltl3c4lw_w_out_9(ltl3c4lw_w_out_9),
                                              .ltl3c4lw_w_out_11(ltl3c4lw_w_out_11),
                                             
                                              .ltl2c4lw_w_out_4(ltl2c4lw_w_out_4),
                                              .ltl2c4lw_w_out_6(ltl2c4lw_w_out_6),
                                              .ltl2c4lw_w_out_9(ltl2c4lw_w_out_9),
                                              .ltl2c4lw_w_out_11(ltl2c4lw_w_out_11),
                                             
                                              .ltl8c4lw_w_out_4(ltl8c4lw_w_out_4),
                                              .ltl8c4lw_w_out_6(ltl8c4lw_w_out_6),
                                              .ltl8c4lw_w_out_9(ltl8c4lw_w_out_9),
                                              .ltl8c4lw_w_out_11(ltl8c4lw_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

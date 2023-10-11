

module Top_Modulelwsw(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl1c0lwsw
                   , output wire ltl3c0lwsw
                   , output wire ltl0c0lwsw
                   , output wire ltl2c0lwsw
                  
                  );
  wire ltl1c0lwsw_w_out_4;
  wire ltl1c0lwsw_w_out_6;
  wire ltl1c0lwsw_w_out_9;
  wire ltl1c0lwsw_w_out_11;
  wire ltl3c0lwsw_w_out_4;
  wire ltl3c0lwsw_w_out_6;
  wire ltl3c0lwsw_w_out_9;
  wire ltl3c0lwsw_w_out_11;
  wire ltl0c0lwsw_w_out_4;
  wire ltl0c0lwsw_w_out_6;
  wire ltl0c0lwsw_w_out_9;
  wire ltl0c0lwsw_w_out_11;
  wire ltl2c0lwsw_w_out_4;
  wire ltl2c0lwsw_w_out_6;
  wire ltl2c0lwsw_w_out_9;
  wire ltl2c0lwsw_w_out_11;

assign ltl1c0lwsw =
  ltl1c0lwsw_w_out_4 |
  ltl1c0lwsw_w_out_6 |
  ltl1c0lwsw_w_out_9 |
  ltl1c0lwsw_w_out_11 |
1'b0;
assign ltl3c0lwsw =
  ltl3c0lwsw_w_out_4 |
  ltl3c0lwsw_w_out_6 |
  ltl3c0lwsw_w_out_9 |
  ltl3c0lwsw_w_out_11 |
1'b0;
assign ltl0c0lwsw =
  ltl0c0lwsw_w_out_4 |
  ltl0c0lwsw_w_out_6 |
  ltl0c0lwsw_w_out_9 |
  ltl0c0lwsw_w_out_11 |
1'b0;
assign ltl2c0lwsw =
  ltl2c0lwsw_w_out_4 |
  ltl2c0lwsw_w_out_6 |
  ltl2c0lwsw_w_out_9 |
  ltl2c0lwsw_w_out_11 |
1'b0;





Automata_Stage0lwsw automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl1c0lwsw_w_out_4(ltl1c0lwsw_w_out_4),
                                              .ltl1c0lwsw_w_out_6(ltl1c0lwsw_w_out_6),
                                              .ltl1c0lwsw_w_out_9(ltl1c0lwsw_w_out_9),
                                              .ltl1c0lwsw_w_out_11(ltl1c0lwsw_w_out_11),
                                             
                                              .ltl3c0lwsw_w_out_4(ltl3c0lwsw_w_out_4),
                                              .ltl3c0lwsw_w_out_6(ltl3c0lwsw_w_out_6),
                                              .ltl3c0lwsw_w_out_9(ltl3c0lwsw_w_out_9),
                                              .ltl3c0lwsw_w_out_11(ltl3c0lwsw_w_out_11),
                                             
                                              .ltl0c0lwsw_w_out_4(ltl0c0lwsw_w_out_4),
                                              .ltl0c0lwsw_w_out_6(ltl0c0lwsw_w_out_6),
                                              .ltl0c0lwsw_w_out_9(ltl0c0lwsw_w_out_9),
                                              .ltl0c0lwsw_w_out_11(ltl0c0lwsw_w_out_11),
                                             
                                              .ltl2c0lwsw_w_out_4(ltl2c0lwsw_w_out_4),
                                              .ltl2c0lwsw_w_out_6(ltl2c0lwsw_w_out_6),
                                              .ltl2c0lwsw_w_out_9(ltl2c0lwsw_w_out_9),
                                              .ltl2c0lwsw_w_out_11(ltl2c0lwsw_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

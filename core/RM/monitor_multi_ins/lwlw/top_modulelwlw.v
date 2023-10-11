

module Top_Modulelwlw(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl2c0lwlw
                   , output wire ltl3c0lwlw
                   , output wire ltl0c0lwlw
                   , output wire ltl1c0lwlw
                  
                  );
  wire ltl2c0lwlw_w_out_4;
  wire ltl2c0lwlw_w_out_6;
  wire ltl2c0lwlw_w_out_9;
  wire ltl2c0lwlw_w_out_11;
  wire ltl3c0lwlw_w_out_4;
  wire ltl3c0lwlw_w_out_6;
  wire ltl3c0lwlw_w_out_9;
  wire ltl3c0lwlw_w_out_11;
  wire ltl0c0lwlw_w_out_4;
  wire ltl0c0lwlw_w_out_6;
  wire ltl0c0lwlw_w_out_9;
  wire ltl0c0lwlw_w_out_11;
  wire ltl1c0lwlw_w_out_4;
  wire ltl1c0lwlw_w_out_6;
  wire ltl1c0lwlw_w_out_9;
  wire ltl1c0lwlw_w_out_11;

assign ltl2c0lwlw =
  ltl2c0lwlw_w_out_4 |
  ltl2c0lwlw_w_out_6 |
  ltl2c0lwlw_w_out_9 |
  ltl2c0lwlw_w_out_11 |
1'b0;
assign ltl3c0lwlw =
  ltl3c0lwlw_w_out_4 |
  ltl3c0lwlw_w_out_6 |
  ltl3c0lwlw_w_out_9 |
  ltl3c0lwlw_w_out_11 |
1'b0;
assign ltl0c0lwlw =
  ltl0c0lwlw_w_out_4 |
  ltl0c0lwlw_w_out_6 |
  ltl0c0lwlw_w_out_9 |
  ltl0c0lwlw_w_out_11 |
1'b0;
assign ltl1c0lwlw =
  ltl1c0lwlw_w_out_4 |
  ltl1c0lwlw_w_out_6 |
  ltl1c0lwlw_w_out_9 |
  ltl1c0lwlw_w_out_11 |
1'b0;





Automata_Stage0lwlw automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl2c0lwlw_w_out_4(ltl2c0lwlw_w_out_4),
                                              .ltl2c0lwlw_w_out_6(ltl2c0lwlw_w_out_6),
                                              .ltl2c0lwlw_w_out_9(ltl2c0lwlw_w_out_9),
                                              .ltl2c0lwlw_w_out_11(ltl2c0lwlw_w_out_11),
                                             
                                              .ltl3c0lwlw_w_out_4(ltl3c0lwlw_w_out_4),
                                              .ltl3c0lwlw_w_out_6(ltl3c0lwlw_w_out_6),
                                              .ltl3c0lwlw_w_out_9(ltl3c0lwlw_w_out_9),
                                              .ltl3c0lwlw_w_out_11(ltl3c0lwlw_w_out_11),
                                             
                                              .ltl0c0lwlw_w_out_4(ltl0c0lwlw_w_out_4),
                                              .ltl0c0lwlw_w_out_6(ltl0c0lwlw_w_out_6),
                                              .ltl0c0lwlw_w_out_9(ltl0c0lwlw_w_out_9),
                                              .ltl0c0lwlw_w_out_11(ltl0c0lwlw_w_out_11),
                                             
                                              .ltl1c0lwlw_w_out_4(ltl1c0lwlw_w_out_4),
                                              .ltl1c0lwlw_w_out_6(ltl1c0lwlw_w_out_6),
                                              .ltl1c0lwlw_w_out_9(ltl1c0lwlw_w_out_9),
                                              .ltl1c0lwlw_w_out_11(ltl1c0lwlw_w_out_11),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

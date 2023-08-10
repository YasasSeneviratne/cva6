

module Top_ModuleC0(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl0c0
                   , output wire ltl1c0
                  
                  );
assign ltl0c0 =
  ltl0c0_w_out_2 |
  ltl0c0_w_out_4 |
  ltl0c0_w_out_7 |
  ltl0c0_w_out_9 |
1'b0;
assign ltl1c0 =
  ltl1c0_w_out_3 |
  ltl1c0_w_out_5 |
  ltl1c0_w_out_7 |
  ltl1c0_w_out_9 |
1'b0;





Automata_Stage0C0 automata_stage0(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl0c0_w_out_2(ltl0c0_w_out_2),
                                              .ltl0c0_w_out_4(ltl0c0_w_out_4),
                                              .ltl0c0_w_out_7(ltl0c0_w_out_7),
                                              .ltl0c0_w_out_9(ltl0c0_w_out_9),
                                             
                                              .ltl1c0_w_out_3(ltl1c0_w_out_3),
                                              .ltl1c0_w_out_5(ltl1c0_w_out_5),
                                              .ltl1c0_w_out_7(ltl1c0_w_out_7),
                                              .ltl1c0_w_out_9(ltl1c0_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

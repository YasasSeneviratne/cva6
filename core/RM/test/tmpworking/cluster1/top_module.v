

module Top_ModuleC1(
                  input clk,
                  input reset,
                  input run,
                  input [7 : 0] symbols
                   , output wire ltl1c1
                   , output wire ltl2c1
                   , output wire ltl0c1
                  
                  );




                   wire  ltl1c1_w_out_2;
                   wire  ltl1c1_w_out_4;
                   wire  ltl1c1_w_out_7;
                   wire  ltl1c1_w_out_9;
                   wire  ltl2c1_w_out_3;
                   wire  ltl2c1_w_out_5;
                   wire  ltl2c1_w_out_7;
                   wire  ltl2c1_w_out_9;
                   wire  ltl0c1_w_out_2;
                   wire  ltl0c1_w_out_4;
                   wire  ltl0c1_w_out_7;
                   wire  ltl0c1_w_out_9;

assign ltl1c1 = ltl1c1_w_out_2 | ltl1c1_w_out_4 | ltl1c1_w_out_7 | ltl1c1_w_out_9;
assign ltl2c1 = ltl2c1_w_out_3 | ltl2c1_w_out_5 | ltl2c1_w_out_7 | ltl2c1_w_out_9;
assign ltl0c1 = ltl0c1_w_out_2 | ltl0c1_w_out_4 | ltl0c1_w_out_7 | ltl0c1_w_out_9;
Automata_Stage0C1 automata_stage0c1(.clk(clk),
                                             .run(run),
                                             .reset(reset),
                                             .top_symbols( symbols ),
                                              .ltl1c1_w_out_2(ltl1c1_w_out_2),
                                              .ltl1c1_w_out_4(ltl1c1_w_out_4),
                                              .ltl1c1_w_out_7(ltl1c1_w_out_7),
                                              .ltl1c1_w_out_9(ltl1c1_w_out_9),
                                             
                                              .ltl2c1_w_out_3(ltl2c1_w_out_3),
                                              .ltl2c1_w_out_5(ltl2c1_w_out_5),
                                              .ltl2c1_w_out_7(ltl2c1_w_out_7),
                                              .ltl2c1_w_out_9(ltl2c1_w_out_9),
                                             
                                              .ltl0c1_w_out_2(ltl0c1_w_out_2),
                                              .ltl0c1_w_out_4(ltl0c1_w_out_4),
                                              .ltl0c1_w_out_7(ltl0c1_w_out_7),
                                              .ltl0c1_w_out_9(ltl0c1_w_out_9),
                                             
                                             .out_symbols(),
                                             .out_reset()
                                             );




endmodule

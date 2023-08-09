





/*
******************** Summary {}********************
total nodes = 27
total reports = 12
total edges = 51
average symbols len = 2.33333333333
#######################################################
*/

module Automata_Stage0C1(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl1c1_w_out_2
                    , output ltl1c1_w_out_4
                    , output ltl1c1_w_out_7
                    , output ltl1c1_w_out_9
                    
                    , output ltl2c1_w_out_3
                    , output ltl2c1_w_out_5
                    , output ltl2c1_w_out_7
                    , output ltl2c1_w_out_9
                    
                    , output ltl0c1_w_out_2
                    , output ltl0c1_w_out_4
                    , output ltl0c1_w_out_7
                    , output ltl0c1_w_out_9
                    ,
                    output reg[7 : 0] out_symbols,
                    output reg out_reset
                    );

always @(posedge clk)
begin
    if (run == 1)
        out_symbols <= top_symbols;
        out_reset <= reset;
end



Automata_ltl1c1 automata_ltl1c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c1_w_out_2(ltl1c1_w_out_2)
                        , .ltl1c1_w_out_4(ltl1c1_w_out_4)
                        , .ltl1c1_w_out_7(ltl1c1_w_out_7)
                        , .ltl1c1_w_out_9(ltl1c1_w_out_9)
                    );

Automata_ltl2c1 automata_ltl2c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c1_w_out_3(ltl2c1_w_out_3)
                        , .ltl2c1_w_out_5(ltl2c1_w_out_5)
                        , .ltl2c1_w_out_7(ltl2c1_w_out_7)
                        , .ltl2c1_w_out_9(ltl2c1_w_out_9)
                    );

Automata_ltl0c1 automata_ltl0c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c1_w_out_2(ltl0c1_w_out_2)
                        , .ltl0c1_w_out_4(ltl0c1_w_out_4)
                        , .ltl0c1_w_out_7(ltl0c1_w_out_7)
                        , .ltl0c1_w_out_9(ltl0c1_w_out_9)
                    );










    



 










endmodule

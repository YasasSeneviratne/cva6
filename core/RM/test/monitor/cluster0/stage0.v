





/*
******************** Summary {}********************
total nodes = 18
total reports = 8
total edges = 34
average symbols len = 3.0
#######################################################
*/

module Automata_Stage0C0(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl0c0_w_out_2
                    , output ltl0c0_w_out_4
                    , output ltl0c0_w_out_7
                    , output ltl0c0_w_out_9
                    
                    , output ltl1c0_w_out_3
                    , output ltl1c0_w_out_5
                    , output ltl1c0_w_out_7
                    , output ltl1c0_w_out_9
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



Automata_ltl0c0 automata_ltl0c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c0_w_out_2(ltl0c0_w_out_2)
                        , .ltl0c0_w_out_4(ltl0c0_w_out_4)
                        , .ltl0c0_w_out_7(ltl0c0_w_out_7)
                        , .ltl0c0_w_out_9(ltl0c0_w_out_9)
                    );

Automata_ltl1c0 automata_ltl1c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c0_w_out_3(ltl1c0_w_out_3)
                        , .ltl1c0_w_out_5(ltl1c0_w_out_5)
                        , .ltl1c0_w_out_7(ltl1c0_w_out_7)
                        , .ltl1c0_w_out_9(ltl1c0_w_out_9)
                    );








    



 










endmodule

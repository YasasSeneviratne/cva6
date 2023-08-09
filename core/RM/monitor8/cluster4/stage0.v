





/*
******************** Summary {}********************
total nodes = 63
total reports = 28
total edges = 119
average symbols len = 16.3968253968
#######################################################
*/

module Automata_Stage0C4(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl1c4_w_out_2
                    , output ltl1c4_w_out_4
                    , output ltl1c4_w_out_7
                    , output ltl1c4_w_out_9
                    
                    , output ltl2c4_w_out_2
                    , output ltl2c4_w_out_4
                    , output ltl2c4_w_out_7
                    , output ltl2c4_w_out_9
                    
                    , output ltl5c4_w_out_3
                    , output ltl5c4_w_out_5
                    , output ltl5c4_w_out_7
                    , output ltl5c4_w_out_9
                    
                    , output ltl3c4_w_out_2
                    , output ltl3c4_w_out_4
                    , output ltl3c4_w_out_7
                    , output ltl3c4_w_out_9
                    
                    , output ltl4c4_w_out_3
                    , output ltl4c4_w_out_5
                    , output ltl4c4_w_out_7
                    , output ltl4c4_w_out_9
                    
                    , output ltl6c4_w_out_3
                    , output ltl6c4_w_out_5
                    , output ltl6c4_w_out_7
                    , output ltl6c4_w_out_9
                    
                    , output ltl0c4_w_out_3
                    , output ltl0c4_w_out_5
                    , output ltl0c4_w_out_7
                    , output ltl0c4_w_out_9
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



Automata_ltl1c4 automata_ltl1c4 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c4_w_out_2(ltl1c4_w_out_2)
                        , .ltl1c4_w_out_4(ltl1c4_w_out_4)
                        , .ltl1c4_w_out_7(ltl1c4_w_out_7)
                        , .ltl1c4_w_out_9(ltl1c4_w_out_9)
                    );

Automata_ltl2c4 automata_ltl2c4 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c4_w_out_2(ltl2c4_w_out_2)
                        , .ltl2c4_w_out_4(ltl2c4_w_out_4)
                        , .ltl2c4_w_out_7(ltl2c4_w_out_7)
                        , .ltl2c4_w_out_9(ltl2c4_w_out_9)
                    );

Automata_ltl5c4 automata_ltl5c4 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c4_w_out_3(ltl5c4_w_out_3)
                        , .ltl5c4_w_out_5(ltl5c4_w_out_5)
                        , .ltl5c4_w_out_7(ltl5c4_w_out_7)
                        , .ltl5c4_w_out_9(ltl5c4_w_out_9)
                    );

Automata_ltl3c4 automata_ltl3c4 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c4_w_out_2(ltl3c4_w_out_2)
                        , .ltl3c4_w_out_4(ltl3c4_w_out_4)
                        , .ltl3c4_w_out_7(ltl3c4_w_out_7)
                        , .ltl3c4_w_out_9(ltl3c4_w_out_9)
                    );

Automata_ltl4c4 automata_ltl4c4 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c4_w_out_3(ltl4c4_w_out_3)
                        , .ltl4c4_w_out_5(ltl4c4_w_out_5)
                        , .ltl4c4_w_out_7(ltl4c4_w_out_7)
                        , .ltl4c4_w_out_9(ltl4c4_w_out_9)
                    );

Automata_ltl6c4 automata_ltl6c4 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c4_w_out_3(ltl6c4_w_out_3)
                        , .ltl6c4_w_out_5(ltl6c4_w_out_5)
                        , .ltl6c4_w_out_7(ltl6c4_w_out_7)
                        , .ltl6c4_w_out_9(ltl6c4_w_out_9)
                    );

Automata_ltl0c4 automata_ltl0c4 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c4_w_out_3(ltl0c4_w_out_3)
                        , .ltl0c4_w_out_5(ltl0c4_w_out_5)
                        , .ltl0c4_w_out_7(ltl0c4_w_out_7)
                        , .ltl0c4_w_out_9(ltl0c4_w_out_9)
                    );


















    



 










endmodule

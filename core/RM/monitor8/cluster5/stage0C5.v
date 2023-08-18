





/*
******************** Summary {}********************
total nodes = 99
total reports = 36
total edges = 198
average symbols len = 18.6161616162
#######################################################
*/

module Automata_Stage0C5(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl6c5_w_out_4
                    , output ltl6c5_w_out_6
                    , output ltl6c5_w_out_9
                    , output ltl6c5_w_out_11
                    
                    , output ltl8c5_w_out_4
                    , output ltl8c5_w_out_6
                    , output ltl8c5_w_out_9
                    , output ltl8c5_w_out_11
                    
                    , output ltl0c5_w_out_4
                    , output ltl0c5_w_out_6
                    , output ltl0c5_w_out_9
                    , output ltl0c5_w_out_11
                    
                    , output ltl3c5_w_out_4
                    , output ltl3c5_w_out_6
                    , output ltl3c5_w_out_9
                    , output ltl3c5_w_out_11
                    
                    , output ltl5c5_w_out_4
                    , output ltl5c5_w_out_6
                    , output ltl5c5_w_out_9
                    , output ltl5c5_w_out_11
                    
                    , output ltl7c5_w_out_4
                    , output ltl7c5_w_out_6
                    , output ltl7c5_w_out_9
                    , output ltl7c5_w_out_11
                    
                    , output ltl1c5_w_out_4
                    , output ltl1c5_w_out_6
                    , output ltl1c5_w_out_9
                    , output ltl1c5_w_out_11
                    
                    , output ltl2c5_w_out_4
                    , output ltl2c5_w_out_6
                    , output ltl2c5_w_out_9
                    , output ltl2c5_w_out_11
                    
                    , output ltl4c5_w_out_4
                    , output ltl4c5_w_out_6
                    , output ltl4c5_w_out_9
                    , output ltl4c5_w_out_11
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



Automata_ltl6c5 automata_ltl6c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c5_w_out_4(ltl6c5_w_out_4)
                        , .ltl6c5_w_out_6(ltl6c5_w_out_6)
                        , .ltl6c5_w_out_9(ltl6c5_w_out_9)
                        , .ltl6c5_w_out_11(ltl6c5_w_out_11)
                    );

Automata_ltl8c5 automata_ltl8c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c5_w_out_4(ltl8c5_w_out_4)
                        , .ltl8c5_w_out_6(ltl8c5_w_out_6)
                        , .ltl8c5_w_out_9(ltl8c5_w_out_9)
                        , .ltl8c5_w_out_11(ltl8c5_w_out_11)
                    );

Automata_ltl0c5 automata_ltl0c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c5_w_out_4(ltl0c5_w_out_4)
                        , .ltl0c5_w_out_6(ltl0c5_w_out_6)
                        , .ltl0c5_w_out_9(ltl0c5_w_out_9)
                        , .ltl0c5_w_out_11(ltl0c5_w_out_11)
                    );

Automata_ltl3c5 automata_ltl3c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c5_w_out_4(ltl3c5_w_out_4)
                        , .ltl3c5_w_out_6(ltl3c5_w_out_6)
                        , .ltl3c5_w_out_9(ltl3c5_w_out_9)
                        , .ltl3c5_w_out_11(ltl3c5_w_out_11)
                    );

Automata_ltl5c5 automata_ltl5c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c5_w_out_4(ltl5c5_w_out_4)
                        , .ltl5c5_w_out_6(ltl5c5_w_out_6)
                        , .ltl5c5_w_out_9(ltl5c5_w_out_9)
                        , .ltl5c5_w_out_11(ltl5c5_w_out_11)
                    );

Automata_ltl7c5 automata_ltl7c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c5_w_out_4(ltl7c5_w_out_4)
                        , .ltl7c5_w_out_6(ltl7c5_w_out_6)
                        , .ltl7c5_w_out_9(ltl7c5_w_out_9)
                        , .ltl7c5_w_out_11(ltl7c5_w_out_11)
                    );

Automata_ltl1c5 automata_ltl1c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c5_w_out_4(ltl1c5_w_out_4)
                        , .ltl1c5_w_out_6(ltl1c5_w_out_6)
                        , .ltl1c5_w_out_9(ltl1c5_w_out_9)
                        , .ltl1c5_w_out_11(ltl1c5_w_out_11)
                    );

Automata_ltl2c5 automata_ltl2c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c5_w_out_4(ltl2c5_w_out_4)
                        , .ltl2c5_w_out_6(ltl2c5_w_out_6)
                        , .ltl2c5_w_out_9(ltl2c5_w_out_9)
                        , .ltl2c5_w_out_11(ltl2c5_w_out_11)
                    );

Automata_ltl4c5 automata_ltl4c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c5_w_out_4(ltl4c5_w_out_4)
                        , .ltl4c5_w_out_6(ltl4c5_w_out_6)
                        , .ltl4c5_w_out_9(ltl4c5_w_out_9)
                        , .ltl4c5_w_out_11(ltl4c5_w_out_11)
                    );






















    



 










endmodule







/*
******************** Summary {}********************
total nodes = 81
total reports = 36
total edges = 153
average symbols len = 12.0
#######################################################
*/

module Automata_Stage0C1(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl8c1_w_out_2
                    , output ltl8c1_w_out_4
                    , output ltl8c1_w_out_7
                    , output ltl8c1_w_out_9
                    
                    , output ltl1c1_w_out_2
                    , output ltl1c1_w_out_4
                    , output ltl1c1_w_out_7
                    , output ltl1c1_w_out_9
                    
                    , output ltl7c1_w_out_3
                    , output ltl7c1_w_out_5
                    , output ltl7c1_w_out_7
                    , output ltl7c1_w_out_9
                    
                    , output ltl2c1_w_out_2
                    , output ltl2c1_w_out_4
                    , output ltl2c1_w_out_7
                    , output ltl2c1_w_out_9
                    
                    , output ltl6c1_w_out_3
                    , output ltl6c1_w_out_5
                    , output ltl6c1_w_out_7
                    , output ltl6c1_w_out_9
                    
                    , output ltl4c1_w_out_3
                    , output ltl4c1_w_out_5
                    , output ltl4c1_w_out_7
                    , output ltl4c1_w_out_9
                    
                    , output ltl0c1_w_out_2
                    , output ltl0c1_w_out_4
                    , output ltl0c1_w_out_7
                    , output ltl0c1_w_out_9
                    
                    , output ltl5c1_w_out_3
                    , output ltl5c1_w_out_5
                    , output ltl5c1_w_out_7
                    , output ltl5c1_w_out_9
                    
                    , output ltl3c1_w_out_3
                    , output ltl3c1_w_out_5
                    , output ltl3c1_w_out_7
                    , output ltl3c1_w_out_9
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



Automata_ltl8c1 automata_ltl8c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c1_w_out_2(ltl8c1_w_out_2)
                        , .ltl8c1_w_out_4(ltl8c1_w_out_4)
                        , .ltl8c1_w_out_7(ltl8c1_w_out_7)
                        , .ltl8c1_w_out_9(ltl8c1_w_out_9)
                    );

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

Automata_ltl7c1 automata_ltl7c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c1_w_out_3(ltl7c1_w_out_3)
                        , .ltl7c1_w_out_5(ltl7c1_w_out_5)
                        , .ltl7c1_w_out_7(ltl7c1_w_out_7)
                        , .ltl7c1_w_out_9(ltl7c1_w_out_9)
                    );

Automata_ltl2c1 automata_ltl2c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c1_w_out_2(ltl2c1_w_out_2)
                        , .ltl2c1_w_out_4(ltl2c1_w_out_4)
                        , .ltl2c1_w_out_7(ltl2c1_w_out_7)
                        , .ltl2c1_w_out_9(ltl2c1_w_out_9)
                    );

Automata_ltl6c1 automata_ltl6c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c1_w_out_3(ltl6c1_w_out_3)
                        , .ltl6c1_w_out_5(ltl6c1_w_out_5)
                        , .ltl6c1_w_out_7(ltl6c1_w_out_7)
                        , .ltl6c1_w_out_9(ltl6c1_w_out_9)
                    );

Automata_ltl4c1 automata_ltl4c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c1_w_out_3(ltl4c1_w_out_3)
                        , .ltl4c1_w_out_5(ltl4c1_w_out_5)
                        , .ltl4c1_w_out_7(ltl4c1_w_out_7)
                        , .ltl4c1_w_out_9(ltl4c1_w_out_9)
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

Automata_ltl5c1 automata_ltl5c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c1_w_out_3(ltl5c1_w_out_3)
                        , .ltl5c1_w_out_5(ltl5c1_w_out_5)
                        , .ltl5c1_w_out_7(ltl5c1_w_out_7)
                        , .ltl5c1_w_out_9(ltl5c1_w_out_9)
                    );

Automata_ltl3c1 automata_ltl3c1 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c1_w_out_3(ltl3c1_w_out_3)
                        , .ltl3c1_w_out_5(ltl3c1_w_out_5)
                        , .ltl3c1_w_out_7(ltl3c1_w_out_7)
                        , .ltl3c1_w_out_9(ltl3c1_w_out_9)
                    );






















    



 










endmodule

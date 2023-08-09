





/*
******************** Summary {}********************
total nodes = 81
total reports = 36
total edges = 153
average symbols len = 17.5679012346
#######################################################
*/

module Automata_Stage0C5(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl6c5_w_out_3
                    , output ltl6c5_w_out_5
                    , output ltl6c5_w_out_7
                    , output ltl6c5_w_out_9
                    
                    , output ltl8c5_w_out_3
                    , output ltl8c5_w_out_5
                    , output ltl8c5_w_out_7
                    , output ltl8c5_w_out_9
                    
                    , output ltl0c5_w_out_2
                    , output ltl0c5_w_out_4
                    , output ltl0c5_w_out_7
                    , output ltl0c5_w_out_9
                    
                    , output ltl3c5_w_out_3
                    , output ltl3c5_w_out_5
                    , output ltl3c5_w_out_7
                    , output ltl3c5_w_out_9
                    
                    , output ltl5c5_w_out_3
                    , output ltl5c5_w_out_5
                    , output ltl5c5_w_out_7
                    , output ltl5c5_w_out_9
                    
                    , output ltl7c5_w_out_3
                    , output ltl7c5_w_out_5
                    , output ltl7c5_w_out_7
                    , output ltl7c5_w_out_9
                    
                    , output ltl1c5_w_out_3
                    , output ltl1c5_w_out_5
                    , output ltl1c5_w_out_7
                    , output ltl1c5_w_out_9
                    
                    , output ltl2c5_w_out_2
                    , output ltl2c5_w_out_4
                    , output ltl2c5_w_out_7
                    , output ltl2c5_w_out_9
                    
                    , output ltl4c5_w_out_3
                    , output ltl4c5_w_out_5
                    , output ltl4c5_w_out_7
                    , output ltl4c5_w_out_9
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
                        , .ltl6c5_w_out_3(ltl6c5_w_out_3)
                        , .ltl6c5_w_out_5(ltl6c5_w_out_5)
                        , .ltl6c5_w_out_7(ltl6c5_w_out_7)
                        , .ltl6c5_w_out_9(ltl6c5_w_out_9)
                    );

Automata_ltl8c5 automata_ltl8c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c5_w_out_3(ltl8c5_w_out_3)
                        , .ltl8c5_w_out_5(ltl8c5_w_out_5)
                        , .ltl8c5_w_out_7(ltl8c5_w_out_7)
                        , .ltl8c5_w_out_9(ltl8c5_w_out_9)
                    );

Automata_ltl0c5 automata_ltl0c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c5_w_out_2(ltl0c5_w_out_2)
                        , .ltl0c5_w_out_4(ltl0c5_w_out_4)
                        , .ltl0c5_w_out_7(ltl0c5_w_out_7)
                        , .ltl0c5_w_out_9(ltl0c5_w_out_9)
                    );

Automata_ltl3c5 automata_ltl3c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c5_w_out_3(ltl3c5_w_out_3)
                        , .ltl3c5_w_out_5(ltl3c5_w_out_5)
                        , .ltl3c5_w_out_7(ltl3c5_w_out_7)
                        , .ltl3c5_w_out_9(ltl3c5_w_out_9)
                    );

Automata_ltl5c5 automata_ltl5c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c5_w_out_3(ltl5c5_w_out_3)
                        , .ltl5c5_w_out_5(ltl5c5_w_out_5)
                        , .ltl5c5_w_out_7(ltl5c5_w_out_7)
                        , .ltl5c5_w_out_9(ltl5c5_w_out_9)
                    );

Automata_ltl7c5 automata_ltl7c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c5_w_out_3(ltl7c5_w_out_3)
                        , .ltl7c5_w_out_5(ltl7c5_w_out_5)
                        , .ltl7c5_w_out_7(ltl7c5_w_out_7)
                        , .ltl7c5_w_out_9(ltl7c5_w_out_9)
                    );

Automata_ltl1c5 automata_ltl1c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c5_w_out_3(ltl1c5_w_out_3)
                        , .ltl1c5_w_out_5(ltl1c5_w_out_5)
                        , .ltl1c5_w_out_7(ltl1c5_w_out_7)
                        , .ltl1c5_w_out_9(ltl1c5_w_out_9)
                    );

Automata_ltl2c5 automata_ltl2c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c5_w_out_2(ltl2c5_w_out_2)
                        , .ltl2c5_w_out_4(ltl2c5_w_out_4)
                        , .ltl2c5_w_out_7(ltl2c5_w_out_7)
                        , .ltl2c5_w_out_9(ltl2c5_w_out_9)
                    );

Automata_ltl4c5 automata_ltl4c5 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c5_w_out_3(ltl4c5_w_out_3)
                        , .ltl4c5_w_out_5(ltl4c5_w_out_5)
                        , .ltl4c5_w_out_7(ltl4c5_w_out_7)
                        , .ltl4c5_w_out_9(ltl4c5_w_out_9)
                    );






















    



 










endmodule

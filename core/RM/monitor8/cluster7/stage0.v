





/*
******************** Summary {}********************
total nodes = 81
total reports = 36
total edges = 153
average symbols len = 15.0987654321
#######################################################
*/

module Automata_Stage0C7(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl8c7_w_out_2
                    , output ltl8c7_w_out_4
                    , output ltl8c7_w_out_7
                    , output ltl8c7_w_out_9
                    
                    , output ltl2c7_w_out_2
                    , output ltl2c7_w_out_4
                    , output ltl2c7_w_out_7
                    , output ltl2c7_w_out_9
                    
                    , output ltl6c7_w_out_2
                    , output ltl6c7_w_out_4
                    , output ltl6c7_w_out_7
                    , output ltl6c7_w_out_9
                    
                    , output ltl1c7_w_out_3
                    , output ltl1c7_w_out_5
                    , output ltl1c7_w_out_7
                    , output ltl1c7_w_out_9
                    
                    , output ltl5c7_w_out_3
                    , output ltl5c7_w_out_5
                    , output ltl5c7_w_out_7
                    , output ltl5c7_w_out_9
                    
                    , output ltl0c7_w_out_3
                    , output ltl0c7_w_out_5
                    , output ltl0c7_w_out_7
                    , output ltl0c7_w_out_9
                    
                    , output ltl7c7_w_out_2
                    , output ltl7c7_w_out_4
                    , output ltl7c7_w_out_7
                    , output ltl7c7_w_out_9
                    
                    , output ltl3c7_w_out_2
                    , output ltl3c7_w_out_4
                    , output ltl3c7_w_out_7
                    , output ltl3c7_w_out_9
                    
                    , output ltl4c7_w_out_3
                    , output ltl4c7_w_out_5
                    , output ltl4c7_w_out_7
                    , output ltl4c7_w_out_9
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



Automata_ltl8c7 automata_ltl8c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c7_w_out_2(ltl8c7_w_out_2)
                        , .ltl8c7_w_out_4(ltl8c7_w_out_4)
                        , .ltl8c7_w_out_7(ltl8c7_w_out_7)
                        , .ltl8c7_w_out_9(ltl8c7_w_out_9)
                    );

Automata_ltl2c7 automata_ltl2c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c7_w_out_2(ltl2c7_w_out_2)
                        , .ltl2c7_w_out_4(ltl2c7_w_out_4)
                        , .ltl2c7_w_out_7(ltl2c7_w_out_7)
                        , .ltl2c7_w_out_9(ltl2c7_w_out_9)
                    );

Automata_ltl6c7 automata_ltl6c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c7_w_out_2(ltl6c7_w_out_2)
                        , .ltl6c7_w_out_4(ltl6c7_w_out_4)
                        , .ltl6c7_w_out_7(ltl6c7_w_out_7)
                        , .ltl6c7_w_out_9(ltl6c7_w_out_9)
                    );

Automata_ltl1c7 automata_ltl1c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c7_w_out_3(ltl1c7_w_out_3)
                        , .ltl1c7_w_out_5(ltl1c7_w_out_5)
                        , .ltl1c7_w_out_7(ltl1c7_w_out_7)
                        , .ltl1c7_w_out_9(ltl1c7_w_out_9)
                    );

Automata_ltl5c7 automata_ltl5c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c7_w_out_3(ltl5c7_w_out_3)
                        , .ltl5c7_w_out_5(ltl5c7_w_out_5)
                        , .ltl5c7_w_out_7(ltl5c7_w_out_7)
                        , .ltl5c7_w_out_9(ltl5c7_w_out_9)
                    );

Automata_ltl0c7 automata_ltl0c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c7_w_out_3(ltl0c7_w_out_3)
                        , .ltl0c7_w_out_5(ltl0c7_w_out_5)
                        , .ltl0c7_w_out_7(ltl0c7_w_out_7)
                        , .ltl0c7_w_out_9(ltl0c7_w_out_9)
                    );

Automata_ltl7c7 automata_ltl7c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c7_w_out_2(ltl7c7_w_out_2)
                        , .ltl7c7_w_out_4(ltl7c7_w_out_4)
                        , .ltl7c7_w_out_7(ltl7c7_w_out_7)
                        , .ltl7c7_w_out_9(ltl7c7_w_out_9)
                    );

Automata_ltl3c7 automata_ltl3c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c7_w_out_2(ltl3c7_w_out_2)
                        , .ltl3c7_w_out_4(ltl3c7_w_out_4)
                        , .ltl3c7_w_out_7(ltl3c7_w_out_7)
                        , .ltl3c7_w_out_9(ltl3c7_w_out_9)
                    );

Automata_ltl4c7 automata_ltl4c7 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c7_w_out_3(ltl4c7_w_out_3)
                        , .ltl4c7_w_out_5(ltl4c7_w_out_5)
                        , .ltl4c7_w_out_7(ltl4c7_w_out_7)
                        , .ltl4c7_w_out_9(ltl4c7_w_out_9)
                    );






















    



 










endmodule

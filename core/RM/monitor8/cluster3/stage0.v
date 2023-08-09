





/*
******************** Summary {}********************
total nodes = 90
total reports = 40
total edges = 170
average symbols len = 16.7555555556
#######################################################
*/

module Automata_Stage0C3(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl1c3_w_out_2
                    , output ltl1c3_w_out_4
                    , output ltl1c3_w_out_7
                    , output ltl1c3_w_out_9
                    
                    , output ltl8c3_w_out_3
                    , output ltl8c3_w_out_5
                    , output ltl8c3_w_out_7
                    , output ltl8c3_w_out_9
                    
                    , output ltl5c3_w_out_2
                    , output ltl5c3_w_out_4
                    , output ltl5c3_w_out_7
                    , output ltl5c3_w_out_9
                    
                    , output ltl9c3_w_out_3
                    , output ltl9c3_w_out_5
                    , output ltl9c3_w_out_7
                    , output ltl9c3_w_out_9
                    
                    , output ltl6c3_w_out_3
                    , output ltl6c3_w_out_5
                    , output ltl6c3_w_out_7
                    , output ltl6c3_w_out_9
                    
                    , output ltl2c3_w_out_2
                    , output ltl2c3_w_out_4
                    , output ltl2c3_w_out_7
                    , output ltl2c3_w_out_9
                    
                    , output ltl3c3_w_out_2
                    , output ltl3c3_w_out_4
                    , output ltl3c3_w_out_7
                    , output ltl3c3_w_out_9
                    
                    , output ltl7c3_w_out_3
                    , output ltl7c3_w_out_5
                    , output ltl7c3_w_out_7
                    , output ltl7c3_w_out_9
                    
                    , output ltl0c3_w_out_2
                    , output ltl0c3_w_out_4
                    , output ltl0c3_w_out_7
                    , output ltl0c3_w_out_9
                    
                    , output ltl4c3_w_out_2
                    , output ltl4c3_w_out_4
                    , output ltl4c3_w_out_7
                    , output ltl4c3_w_out_9
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



Automata_ltl1c3 automata_ltl1c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c3_w_out_2(ltl1c3_w_out_2)
                        , .ltl1c3_w_out_4(ltl1c3_w_out_4)
                        , .ltl1c3_w_out_7(ltl1c3_w_out_7)
                        , .ltl1c3_w_out_9(ltl1c3_w_out_9)
                    );

Automata_ltl8c3 automata_ltl8c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c3_w_out_3(ltl8c3_w_out_3)
                        , .ltl8c3_w_out_5(ltl8c3_w_out_5)
                        , .ltl8c3_w_out_7(ltl8c3_w_out_7)
                        , .ltl8c3_w_out_9(ltl8c3_w_out_9)
                    );

Automata_ltl5c3 automata_ltl5c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c3_w_out_2(ltl5c3_w_out_2)
                        , .ltl5c3_w_out_4(ltl5c3_w_out_4)
                        , .ltl5c3_w_out_7(ltl5c3_w_out_7)
                        , .ltl5c3_w_out_9(ltl5c3_w_out_9)
                    );

Automata_ltl9c3 automata_ltl9c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c3_w_out_3(ltl9c3_w_out_3)
                        , .ltl9c3_w_out_5(ltl9c3_w_out_5)
                        , .ltl9c3_w_out_7(ltl9c3_w_out_7)
                        , .ltl9c3_w_out_9(ltl9c3_w_out_9)
                    );

Automata_ltl6c3 automata_ltl6c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c3_w_out_3(ltl6c3_w_out_3)
                        , .ltl6c3_w_out_5(ltl6c3_w_out_5)
                        , .ltl6c3_w_out_7(ltl6c3_w_out_7)
                        , .ltl6c3_w_out_9(ltl6c3_w_out_9)
                    );

Automata_ltl2c3 automata_ltl2c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c3_w_out_2(ltl2c3_w_out_2)
                        , .ltl2c3_w_out_4(ltl2c3_w_out_4)
                        , .ltl2c3_w_out_7(ltl2c3_w_out_7)
                        , .ltl2c3_w_out_9(ltl2c3_w_out_9)
                    );

Automata_ltl3c3 automata_ltl3c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c3_w_out_2(ltl3c3_w_out_2)
                        , .ltl3c3_w_out_4(ltl3c3_w_out_4)
                        , .ltl3c3_w_out_7(ltl3c3_w_out_7)
                        , .ltl3c3_w_out_9(ltl3c3_w_out_9)
                    );

Automata_ltl7c3 automata_ltl7c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c3_w_out_3(ltl7c3_w_out_3)
                        , .ltl7c3_w_out_5(ltl7c3_w_out_5)
                        , .ltl7c3_w_out_7(ltl7c3_w_out_7)
                        , .ltl7c3_w_out_9(ltl7c3_w_out_9)
                    );

Automata_ltl0c3 automata_ltl0c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c3_w_out_2(ltl0c3_w_out_2)
                        , .ltl0c3_w_out_4(ltl0c3_w_out_4)
                        , .ltl0c3_w_out_7(ltl0c3_w_out_7)
                        , .ltl0c3_w_out_9(ltl0c3_w_out_9)
                    );

Automata_ltl4c3 automata_ltl4c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c3_w_out_2(ltl4c3_w_out_2)
                        , .ltl4c3_w_out_4(ltl4c3_w_out_4)
                        , .ltl4c3_w_out_7(ltl4c3_w_out_7)
                        , .ltl4c3_w_out_9(ltl4c3_w_out_9)
                    );
























    



 










endmodule

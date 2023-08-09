





/*
******************** Summary {}********************
total nodes = 90
total reports = 40
total edges = 170
average symbols len = 15.4666666667
#######################################################
*/

module Automata_Stage0C2(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl8c2_w_out_3
                    , output ltl8c2_w_out_5
                    , output ltl8c2_w_out_7
                    , output ltl8c2_w_out_9
                    
                    , output ltl9c2_w_out_3
                    , output ltl9c2_w_out_5
                    , output ltl9c2_w_out_7
                    , output ltl9c2_w_out_9
                    
                    , output ltl6c2_w_out_3
                    , output ltl6c2_w_out_5
                    , output ltl6c2_w_out_7
                    , output ltl6c2_w_out_9
                    
                    , output ltl1c2_w_out_2
                    , output ltl1c2_w_out_4
                    , output ltl1c2_w_out_7
                    , output ltl1c2_w_out_9
                    
                    , output ltl4c2_w_out_2
                    , output ltl4c2_w_out_4
                    , output ltl4c2_w_out_7
                    , output ltl4c2_w_out_9
                    
                    , output ltl3c2_w_out_3
                    , output ltl3c2_w_out_5
                    , output ltl3c2_w_out_7
                    , output ltl3c2_w_out_9
                    
                    , output ltl5c2_w_out_2
                    , output ltl5c2_w_out_4
                    , output ltl5c2_w_out_7
                    , output ltl5c2_w_out_9
                    
                    , output ltl0c2_w_out_2
                    , output ltl0c2_w_out_4
                    , output ltl0c2_w_out_7
                    , output ltl0c2_w_out_9
                    
                    , output ltl7c2_w_out_3
                    , output ltl7c2_w_out_5
                    , output ltl7c2_w_out_7
                    , output ltl7c2_w_out_9
                    
                    , output ltl2c2_w_out_3
                    , output ltl2c2_w_out_5
                    , output ltl2c2_w_out_7
                    , output ltl2c2_w_out_9
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



Automata_ltl8c2 automata_ltl8c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c2_w_out_3(ltl8c2_w_out_3)
                        , .ltl8c2_w_out_5(ltl8c2_w_out_5)
                        , .ltl8c2_w_out_7(ltl8c2_w_out_7)
                        , .ltl8c2_w_out_9(ltl8c2_w_out_9)
                    );

Automata_ltl9c2 automata_ltl9c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c2_w_out_3(ltl9c2_w_out_3)
                        , .ltl9c2_w_out_5(ltl9c2_w_out_5)
                        , .ltl9c2_w_out_7(ltl9c2_w_out_7)
                        , .ltl9c2_w_out_9(ltl9c2_w_out_9)
                    );

Automata_ltl6c2 automata_ltl6c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c2_w_out_3(ltl6c2_w_out_3)
                        , .ltl6c2_w_out_5(ltl6c2_w_out_5)
                        , .ltl6c2_w_out_7(ltl6c2_w_out_7)
                        , .ltl6c2_w_out_9(ltl6c2_w_out_9)
                    );

Automata_ltl1c2 automata_ltl1c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c2_w_out_2(ltl1c2_w_out_2)
                        , .ltl1c2_w_out_4(ltl1c2_w_out_4)
                        , .ltl1c2_w_out_7(ltl1c2_w_out_7)
                        , .ltl1c2_w_out_9(ltl1c2_w_out_9)
                    );

Automata_ltl4c2 automata_ltl4c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c2_w_out_2(ltl4c2_w_out_2)
                        , .ltl4c2_w_out_4(ltl4c2_w_out_4)
                        , .ltl4c2_w_out_7(ltl4c2_w_out_7)
                        , .ltl4c2_w_out_9(ltl4c2_w_out_9)
                    );

Automata_ltl3c2 automata_ltl3c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c2_w_out_3(ltl3c2_w_out_3)
                        , .ltl3c2_w_out_5(ltl3c2_w_out_5)
                        , .ltl3c2_w_out_7(ltl3c2_w_out_7)
                        , .ltl3c2_w_out_9(ltl3c2_w_out_9)
                    );

Automata_ltl5c2 automata_ltl5c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c2_w_out_2(ltl5c2_w_out_2)
                        , .ltl5c2_w_out_4(ltl5c2_w_out_4)
                        , .ltl5c2_w_out_7(ltl5c2_w_out_7)
                        , .ltl5c2_w_out_9(ltl5c2_w_out_9)
                    );

Automata_ltl0c2 automata_ltl0c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c2_w_out_2(ltl0c2_w_out_2)
                        , .ltl0c2_w_out_4(ltl0c2_w_out_4)
                        , .ltl0c2_w_out_7(ltl0c2_w_out_7)
                        , .ltl0c2_w_out_9(ltl0c2_w_out_9)
                    );

Automata_ltl7c2 automata_ltl7c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c2_w_out_3(ltl7c2_w_out_3)
                        , .ltl7c2_w_out_5(ltl7c2_w_out_5)
                        , .ltl7c2_w_out_7(ltl7c2_w_out_7)
                        , .ltl7c2_w_out_9(ltl7c2_w_out_9)
                    );

Automata_ltl2c2 automata_ltl2c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c2_w_out_3(ltl2c2_w_out_3)
                        , .ltl2c2_w_out_5(ltl2c2_w_out_5)
                        , .ltl2c2_w_out_7(ltl2c2_w_out_7)
                        , .ltl2c2_w_out_9(ltl2c2_w_out_9)
                    );
























    



 










endmodule

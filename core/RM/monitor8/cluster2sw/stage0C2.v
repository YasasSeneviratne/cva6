





/*
******************** Summary {}********************
total nodes = 110
total reports = 40
total edges = 220
average symbols len = 16.8
#######################################################
*/

module Automata_Stage0C2(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl8c2_w_out_4
                    , output ltl8c2_w_out_6
                    , output ltl8c2_w_out_9
                    , output ltl8c2_w_out_11
                    
                    , output ltl9c2_w_out_4
                    , output ltl9c2_w_out_6
                    , output ltl9c2_w_out_9
                    , output ltl9c2_w_out_11
                    
                    , output ltl6c2_w_out_4
                    , output ltl6c2_w_out_6
                    , output ltl6c2_w_out_9
                    , output ltl6c2_w_out_11
                    
                    , output ltl1c2_w_out_4
                    , output ltl1c2_w_out_6
                    , output ltl1c2_w_out_9
                    , output ltl1c2_w_out_11
                    
                    , output ltl4c2_w_out_4
                    , output ltl4c2_w_out_6
                    , output ltl4c2_w_out_9
                    , output ltl4c2_w_out_11
                    
                    , output ltl3c2_w_out_4
                    , output ltl3c2_w_out_6
                    , output ltl3c2_w_out_9
                    , output ltl3c2_w_out_11
                    
                    , output ltl5c2_w_out_4
                    , output ltl5c2_w_out_6
                    , output ltl5c2_w_out_9
                    , output ltl5c2_w_out_11
                    
                    , output ltl0c2_w_out_4
                    , output ltl0c2_w_out_6
                    , output ltl0c2_w_out_9
                    , output ltl0c2_w_out_11
                    
                    , output ltl7c2_w_out_4
                    , output ltl7c2_w_out_6
                    , output ltl7c2_w_out_9
                    , output ltl7c2_w_out_11
                    
                    , output ltl2c2_w_out_4
                    , output ltl2c2_w_out_6
                    , output ltl2c2_w_out_9
                    , output ltl2c2_w_out_11
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
                        , .ltl8c2_w_out_4(ltl8c2_w_out_4)
                        , .ltl8c2_w_out_6(ltl8c2_w_out_6)
                        , .ltl8c2_w_out_9(ltl8c2_w_out_9)
                        , .ltl8c2_w_out_11(ltl8c2_w_out_11)
                    );

Automata_ltl9c2 automata_ltl9c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c2_w_out_4(ltl9c2_w_out_4)
                        , .ltl9c2_w_out_6(ltl9c2_w_out_6)
                        , .ltl9c2_w_out_9(ltl9c2_w_out_9)
                        , .ltl9c2_w_out_11(ltl9c2_w_out_11)
                    );

Automata_ltl6c2 automata_ltl6c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c2_w_out_4(ltl6c2_w_out_4)
                        , .ltl6c2_w_out_6(ltl6c2_w_out_6)
                        , .ltl6c2_w_out_9(ltl6c2_w_out_9)
                        , .ltl6c2_w_out_11(ltl6c2_w_out_11)
                    );

Automata_ltl1c2 automata_ltl1c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c2_w_out_4(ltl1c2_w_out_4)
                        , .ltl1c2_w_out_6(ltl1c2_w_out_6)
                        , .ltl1c2_w_out_9(ltl1c2_w_out_9)
                        , .ltl1c2_w_out_11(ltl1c2_w_out_11)
                    );

Automata_ltl4c2 automata_ltl4c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c2_w_out_4(ltl4c2_w_out_4)
                        , .ltl4c2_w_out_6(ltl4c2_w_out_6)
                        , .ltl4c2_w_out_9(ltl4c2_w_out_9)
                        , .ltl4c2_w_out_11(ltl4c2_w_out_11)
                    );

Automata_ltl3c2 automata_ltl3c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c2_w_out_4(ltl3c2_w_out_4)
                        , .ltl3c2_w_out_6(ltl3c2_w_out_6)
                        , .ltl3c2_w_out_9(ltl3c2_w_out_9)
                        , .ltl3c2_w_out_11(ltl3c2_w_out_11)
                    );

Automata_ltl5c2 automata_ltl5c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c2_w_out_4(ltl5c2_w_out_4)
                        , .ltl5c2_w_out_6(ltl5c2_w_out_6)
                        , .ltl5c2_w_out_9(ltl5c2_w_out_9)
                        , .ltl5c2_w_out_11(ltl5c2_w_out_11)
                    );

Automata_ltl0c2 automata_ltl0c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c2_w_out_4(ltl0c2_w_out_4)
                        , .ltl0c2_w_out_6(ltl0c2_w_out_6)
                        , .ltl0c2_w_out_9(ltl0c2_w_out_9)
                        , .ltl0c2_w_out_11(ltl0c2_w_out_11)
                    );

Automata_ltl7c2 automata_ltl7c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c2_w_out_4(ltl7c2_w_out_4)
                        , .ltl7c2_w_out_6(ltl7c2_w_out_6)
                        , .ltl7c2_w_out_9(ltl7c2_w_out_9)
                        , .ltl7c2_w_out_11(ltl7c2_w_out_11)
                    );

Automata_ltl2c2 automata_ltl2c2 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c2_w_out_4(ltl2c2_w_out_4)
                        , .ltl2c2_w_out_6(ltl2c2_w_out_6)
                        , .ltl2c2_w_out_9(ltl2c2_w_out_9)
                        , .ltl2c2_w_out_11(ltl2c2_w_out_11)
                    );
























    



 










endmodule

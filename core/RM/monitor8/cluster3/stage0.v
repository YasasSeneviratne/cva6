





/*
******************** Summary {}********************
total nodes = 110
total reports = 40
total edges = 220
average symbols len = 18.0181818182
#######################################################
*/

module Automata_Stage0C3(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl1c3_w_out_4
                    , output ltl1c3_w_out_6
                    , output ltl1c3_w_out_9
                    , output ltl1c3_w_out_11
                    
                    , output ltl8c3_w_out_4
                    , output ltl8c3_w_out_6
                    , output ltl8c3_w_out_9
                    , output ltl8c3_w_out_11
                    
                    , output ltl5c3_w_out_4
                    , output ltl5c3_w_out_6
                    , output ltl5c3_w_out_9
                    , output ltl5c3_w_out_11
                    
                    , output ltl9c3_w_out_4
                    , output ltl9c3_w_out_6
                    , output ltl9c3_w_out_9
                    , output ltl9c3_w_out_11
                    
                    , output ltl6c3_w_out_4
                    , output ltl6c3_w_out_6
                    , output ltl6c3_w_out_9
                    , output ltl6c3_w_out_11
                    
                    , output ltl2c3_w_out_4
                    , output ltl2c3_w_out_6
                    , output ltl2c3_w_out_9
                    , output ltl2c3_w_out_11
                    
                    , output ltl3c3_w_out_4
                    , output ltl3c3_w_out_6
                    , output ltl3c3_w_out_9
                    , output ltl3c3_w_out_11
                    
                    , output ltl7c3_w_out_4
                    , output ltl7c3_w_out_6
                    , output ltl7c3_w_out_9
                    , output ltl7c3_w_out_11
                    
                    , output ltl0c3_w_out_4
                    , output ltl0c3_w_out_6
                    , output ltl0c3_w_out_9
                    , output ltl0c3_w_out_11
                    
                    , output ltl4c3_w_out_4
                    , output ltl4c3_w_out_6
                    , output ltl4c3_w_out_9
                    , output ltl4c3_w_out_11
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
                        , .ltl1c3_w_out_4(ltl1c3_w_out_4)
                        , .ltl1c3_w_out_6(ltl1c3_w_out_6)
                        , .ltl1c3_w_out_9(ltl1c3_w_out_9)
                        , .ltl1c3_w_out_11(ltl1c3_w_out_11)
                    );

Automata_ltl8c3 automata_ltl8c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c3_w_out_4(ltl8c3_w_out_4)
                        , .ltl8c3_w_out_6(ltl8c3_w_out_6)
                        , .ltl8c3_w_out_9(ltl8c3_w_out_9)
                        , .ltl8c3_w_out_11(ltl8c3_w_out_11)
                    );

Automata_ltl5c3 automata_ltl5c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c3_w_out_4(ltl5c3_w_out_4)
                        , .ltl5c3_w_out_6(ltl5c3_w_out_6)
                        , .ltl5c3_w_out_9(ltl5c3_w_out_9)
                        , .ltl5c3_w_out_11(ltl5c3_w_out_11)
                    );

Automata_ltl9c3 automata_ltl9c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c3_w_out_4(ltl9c3_w_out_4)
                        , .ltl9c3_w_out_6(ltl9c3_w_out_6)
                        , .ltl9c3_w_out_9(ltl9c3_w_out_9)
                        , .ltl9c3_w_out_11(ltl9c3_w_out_11)
                    );

Automata_ltl6c3 automata_ltl6c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c3_w_out_4(ltl6c3_w_out_4)
                        , .ltl6c3_w_out_6(ltl6c3_w_out_6)
                        , .ltl6c3_w_out_9(ltl6c3_w_out_9)
                        , .ltl6c3_w_out_11(ltl6c3_w_out_11)
                    );

Automata_ltl2c3 automata_ltl2c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c3_w_out_4(ltl2c3_w_out_4)
                        , .ltl2c3_w_out_6(ltl2c3_w_out_6)
                        , .ltl2c3_w_out_9(ltl2c3_w_out_9)
                        , .ltl2c3_w_out_11(ltl2c3_w_out_11)
                    );

Automata_ltl3c3 automata_ltl3c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c3_w_out_4(ltl3c3_w_out_4)
                        , .ltl3c3_w_out_6(ltl3c3_w_out_6)
                        , .ltl3c3_w_out_9(ltl3c3_w_out_9)
                        , .ltl3c3_w_out_11(ltl3c3_w_out_11)
                    );

Automata_ltl7c3 automata_ltl7c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c3_w_out_4(ltl7c3_w_out_4)
                        , .ltl7c3_w_out_6(ltl7c3_w_out_6)
                        , .ltl7c3_w_out_9(ltl7c3_w_out_9)
                        , .ltl7c3_w_out_11(ltl7c3_w_out_11)
                    );

Automata_ltl0c3 automata_ltl0c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c3_w_out_4(ltl0c3_w_out_4)
                        , .ltl0c3_w_out_6(ltl0c3_w_out_6)
                        , .ltl0c3_w_out_9(ltl0c3_w_out_9)
                        , .ltl0c3_w_out_11(ltl0c3_w_out_11)
                    );

Automata_ltl4c3 automata_ltl4c3 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c3_w_out_4(ltl4c3_w_out_4)
                        , .ltl4c3_w_out_6(ltl4c3_w_out_6)
                        , .ltl4c3_w_out_9(ltl4c3_w_out_9)
                        , .ltl4c3_w_out_11(ltl4c3_w_out_11)
                    );
























    



 










endmodule

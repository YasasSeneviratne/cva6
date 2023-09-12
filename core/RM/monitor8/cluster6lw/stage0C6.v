





/*
******************** Summary {}********************
total nodes = 110
total reports = 40
total edges = 220
average symbols len = 18.1272727273
#######################################################
*/

module Automata_Stage0C6lw(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl1c6lw_w_out_4
                    , output ltl1c6lw_w_out_6
                    , output ltl1c6lw_w_out_9
                    , output ltl1c6lw_w_out_11
                    
                    , output ltl8c6lw_w_out_4
                    , output ltl8c6lw_w_out_6
                    , output ltl8c6lw_w_out_9
                    , output ltl8c6lw_w_out_11
                    
                    , output ltl2c6lw_w_out_4
                    , output ltl2c6lw_w_out_6
                    , output ltl2c6lw_w_out_9
                    , output ltl2c6lw_w_out_11
                    
                    , output ltl3c6lw_w_out_4
                    , output ltl3c6lw_w_out_6
                    , output ltl3c6lw_w_out_9
                    , output ltl3c6lw_w_out_11
                    
                    , output ltl9c6lw_w_out_4
                    , output ltl9c6lw_w_out_6
                    , output ltl9c6lw_w_out_9
                    , output ltl9c6lw_w_out_11
                    
                    , output ltl6c6lw_w_out_4
                    , output ltl6c6lw_w_out_6
                    , output ltl6c6lw_w_out_9
                    , output ltl6c6lw_w_out_11
                    
                    , output ltl4c6lw_w_out_4
                    , output ltl4c6lw_w_out_6
                    , output ltl4c6lw_w_out_9
                    , output ltl4c6lw_w_out_11
                    
                    , output ltl5c6lw_w_out_4
                    , output ltl5c6lw_w_out_6
                    , output ltl5c6lw_w_out_9
                    , output ltl5c6lw_w_out_11
                    
                    , output ltl7c6lw_w_out_4
                    , output ltl7c6lw_w_out_6
                    , output ltl7c6lw_w_out_9
                    , output ltl7c6lw_w_out_11
                    
                    , output ltl0c6lw_w_out_4
                    , output ltl0c6lw_w_out_6
                    , output ltl0c6lw_w_out_9
                    , output ltl0c6lw_w_out_11
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



Automata_ltl1c6lw automata_ltl1c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c6lw_w_out_4(ltl1c6lw_w_out_4)
                        , .ltl1c6lw_w_out_6(ltl1c6lw_w_out_6)
                        , .ltl1c6lw_w_out_9(ltl1c6lw_w_out_9)
                        , .ltl1c6lw_w_out_11(ltl1c6lw_w_out_11)
                    );

Automata_ltl8c6lw automata_ltl8c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c6lw_w_out_4(ltl8c6lw_w_out_4)
                        , .ltl8c6lw_w_out_6(ltl8c6lw_w_out_6)
                        , .ltl8c6lw_w_out_9(ltl8c6lw_w_out_9)
                        , .ltl8c6lw_w_out_11(ltl8c6lw_w_out_11)
                    );

Automata_ltl2c6lw automata_ltl2c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c6lw_w_out_4(ltl2c6lw_w_out_4)
                        , .ltl2c6lw_w_out_6(ltl2c6lw_w_out_6)
                        , .ltl2c6lw_w_out_9(ltl2c6lw_w_out_9)
                        , .ltl2c6lw_w_out_11(ltl2c6lw_w_out_11)
                    );

Automata_ltl3c6lw automata_ltl3c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c6lw_w_out_4(ltl3c6lw_w_out_4)
                        , .ltl3c6lw_w_out_6(ltl3c6lw_w_out_6)
                        , .ltl3c6lw_w_out_9(ltl3c6lw_w_out_9)
                        , .ltl3c6lw_w_out_11(ltl3c6lw_w_out_11)
                    );

Automata_ltl9c6lw automata_ltl9c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c6lw_w_out_4(ltl9c6lw_w_out_4)
                        , .ltl9c6lw_w_out_6(ltl9c6lw_w_out_6)
                        , .ltl9c6lw_w_out_9(ltl9c6lw_w_out_9)
                        , .ltl9c6lw_w_out_11(ltl9c6lw_w_out_11)
                    );

Automata_ltl6c6lw automata_ltl6c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c6lw_w_out_4(ltl6c6lw_w_out_4)
                        , .ltl6c6lw_w_out_6(ltl6c6lw_w_out_6)
                        , .ltl6c6lw_w_out_9(ltl6c6lw_w_out_9)
                        , .ltl6c6lw_w_out_11(ltl6c6lw_w_out_11)
                    );

Automata_ltl4c6lw automata_ltl4c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c6lw_w_out_4(ltl4c6lw_w_out_4)
                        , .ltl4c6lw_w_out_6(ltl4c6lw_w_out_6)
                        , .ltl4c6lw_w_out_9(ltl4c6lw_w_out_9)
                        , .ltl4c6lw_w_out_11(ltl4c6lw_w_out_11)
                    );

Automata_ltl5c6lw automata_ltl5c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c6lw_w_out_4(ltl5c6lw_w_out_4)
                        , .ltl5c6lw_w_out_6(ltl5c6lw_w_out_6)
                        , .ltl5c6lw_w_out_9(ltl5c6lw_w_out_9)
                        , .ltl5c6lw_w_out_11(ltl5c6lw_w_out_11)
                    );

Automata_ltl7c6lw automata_ltl7c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c6lw_w_out_4(ltl7c6lw_w_out_4)
                        , .ltl7c6lw_w_out_6(ltl7c6lw_w_out_6)
                        , .ltl7c6lw_w_out_9(ltl7c6lw_w_out_9)
                        , .ltl7c6lw_w_out_11(ltl7c6lw_w_out_11)
                    );

Automata_ltl0c6lw automata_ltl0c6lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c6lw_w_out_4(ltl0c6lw_w_out_4)
                        , .ltl0c6lw_w_out_6(ltl0c6lw_w_out_6)
                        , .ltl0c6lw_w_out_9(ltl0c6lw_w_out_9)
                        , .ltl0c6lw_w_out_11(ltl0c6lw_w_out_11)
                    );
























    



 










endmodule







/*
******************** Summary {}********************
total nodes = 99
total reports = 36
total edges = 198
average symbols len = 15.7676767677
#######################################################
*/

module Automata_Stage0C4lw(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl0c4lw_w_out_4
                    , output ltl0c4lw_w_out_6
                    , output ltl0c4lw_w_out_9
                    , output ltl0c4lw_w_out_11
                    
                    , output ltl5c4lw_w_out_4
                    , output ltl5c4lw_w_out_6
                    , output ltl5c4lw_w_out_9
                    , output ltl5c4lw_w_out_11
                    
                    , output ltl6c4lw_w_out_4
                    , output ltl6c4lw_w_out_6
                    , output ltl6c4lw_w_out_9
                    , output ltl6c4lw_w_out_11
                    
                    , output ltl4c4lw_w_out_4
                    , output ltl4c4lw_w_out_6
                    , output ltl4c4lw_w_out_9
                    , output ltl4c4lw_w_out_11
                    
                    , output ltl1c4lw_w_out_4
                    , output ltl1c4lw_w_out_6
                    , output ltl1c4lw_w_out_9
                    , output ltl1c4lw_w_out_11
                    
                    , output ltl7c4lw_w_out_4
                    , output ltl7c4lw_w_out_6
                    , output ltl7c4lw_w_out_9
                    , output ltl7c4lw_w_out_11
                    
                    , output ltl3c4lw_w_out_4
                    , output ltl3c4lw_w_out_6
                    , output ltl3c4lw_w_out_9
                    , output ltl3c4lw_w_out_11
                    
                    , output ltl2c4lw_w_out_4
                    , output ltl2c4lw_w_out_6
                    , output ltl2c4lw_w_out_9
                    , output ltl2c4lw_w_out_11
                    
                    , output ltl8c4lw_w_out_4
                    , output ltl8c4lw_w_out_6
                    , output ltl8c4lw_w_out_9
                    , output ltl8c4lw_w_out_11
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



Automata_ltl0c4lw automata_ltl0c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c4lw_w_out_4(ltl0c4lw_w_out_4)
                        , .ltl0c4lw_w_out_6(ltl0c4lw_w_out_6)
                        , .ltl0c4lw_w_out_9(ltl0c4lw_w_out_9)
                        , .ltl0c4lw_w_out_11(ltl0c4lw_w_out_11)
                    );

Automata_ltl5c4lw automata_ltl5c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c4lw_w_out_4(ltl5c4lw_w_out_4)
                        , .ltl5c4lw_w_out_6(ltl5c4lw_w_out_6)
                        , .ltl5c4lw_w_out_9(ltl5c4lw_w_out_9)
                        , .ltl5c4lw_w_out_11(ltl5c4lw_w_out_11)
                    );

Automata_ltl6c4lw automata_ltl6c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c4lw_w_out_4(ltl6c4lw_w_out_4)
                        , .ltl6c4lw_w_out_6(ltl6c4lw_w_out_6)
                        , .ltl6c4lw_w_out_9(ltl6c4lw_w_out_9)
                        , .ltl6c4lw_w_out_11(ltl6c4lw_w_out_11)
                    );

Automata_ltl4c4lw automata_ltl4c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c4lw_w_out_4(ltl4c4lw_w_out_4)
                        , .ltl4c4lw_w_out_6(ltl4c4lw_w_out_6)
                        , .ltl4c4lw_w_out_9(ltl4c4lw_w_out_9)
                        , .ltl4c4lw_w_out_11(ltl4c4lw_w_out_11)
                    );

Automata_ltl1c4lw automata_ltl1c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c4lw_w_out_4(ltl1c4lw_w_out_4)
                        , .ltl1c4lw_w_out_6(ltl1c4lw_w_out_6)
                        , .ltl1c4lw_w_out_9(ltl1c4lw_w_out_9)
                        , .ltl1c4lw_w_out_11(ltl1c4lw_w_out_11)
                    );

Automata_ltl7c4lw automata_ltl7c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c4lw_w_out_4(ltl7c4lw_w_out_4)
                        , .ltl7c4lw_w_out_6(ltl7c4lw_w_out_6)
                        , .ltl7c4lw_w_out_9(ltl7c4lw_w_out_9)
                        , .ltl7c4lw_w_out_11(ltl7c4lw_w_out_11)
                    );

Automata_ltl3c4lw automata_ltl3c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c4lw_w_out_4(ltl3c4lw_w_out_4)
                        , .ltl3c4lw_w_out_6(ltl3c4lw_w_out_6)
                        , .ltl3c4lw_w_out_9(ltl3c4lw_w_out_9)
                        , .ltl3c4lw_w_out_11(ltl3c4lw_w_out_11)
                    );

Automata_ltl2c4lw automata_ltl2c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c4lw_w_out_4(ltl2c4lw_w_out_4)
                        , .ltl2c4lw_w_out_6(ltl2c4lw_w_out_6)
                        , .ltl2c4lw_w_out_9(ltl2c4lw_w_out_9)
                        , .ltl2c4lw_w_out_11(ltl2c4lw_w_out_11)
                    );

Automata_ltl8c4lw automata_ltl8c4lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c4lw_w_out_4(ltl8c4lw_w_out_4)
                        , .ltl8c4lw_w_out_6(ltl8c4lw_w_out_6)
                        , .ltl8c4lw_w_out_9(ltl8c4lw_w_out_9)
                        , .ltl8c4lw_w_out_11(ltl8c4lw_w_out_11)
                    );






















    



 










endmodule

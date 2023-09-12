





/*
******************** Summary {}********************
total nodes = 110
total reports = 40
total edges = 220
average symbols len = 16.6363636364
#######################################################
*/

module Automata_Stage0C7lw(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl9c7lw_w_out_4
                    , output ltl9c7lw_w_out_6
                    , output ltl9c7lw_w_out_9
                    , output ltl9c7lw_w_out_11
                    
                    , output ltl0c7lw_w_out_4
                    , output ltl0c7lw_w_out_6
                    , output ltl0c7lw_w_out_9
                    , output ltl0c7lw_w_out_11
                    
                    , output ltl6c7lw_w_out_4
                    , output ltl6c7lw_w_out_6
                    , output ltl6c7lw_w_out_9
                    , output ltl6c7lw_w_out_11
                    
                    , output ltl4c7lw_w_out_4
                    , output ltl4c7lw_w_out_6
                    , output ltl4c7lw_w_out_9
                    , output ltl4c7lw_w_out_11
                    
                    , output ltl7c7lw_w_out_4
                    , output ltl7c7lw_w_out_6
                    , output ltl7c7lw_w_out_9
                    , output ltl7c7lw_w_out_11
                    
                    , output ltl2c7lw_w_out_4
                    , output ltl2c7lw_w_out_6
                    , output ltl2c7lw_w_out_9
                    , output ltl2c7lw_w_out_11
                    
                    , output ltl1c7lw_w_out_4
                    , output ltl1c7lw_w_out_6
                    , output ltl1c7lw_w_out_9
                    , output ltl1c7lw_w_out_11
                    
                    , output ltl8c7lw_w_out_4
                    , output ltl8c7lw_w_out_6
                    , output ltl8c7lw_w_out_9
                    , output ltl8c7lw_w_out_11
                    
                    , output ltl3c7lw_w_out_4
                    , output ltl3c7lw_w_out_6
                    , output ltl3c7lw_w_out_9
                    , output ltl3c7lw_w_out_11
                    
                    , output ltl5c7lw_w_out_4
                    , output ltl5c7lw_w_out_6
                    , output ltl5c7lw_w_out_9
                    , output ltl5c7lw_w_out_11
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



Automata_ltl9c7lw automata_ltl9c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c7lw_w_out_4(ltl9c7lw_w_out_4)
                        , .ltl9c7lw_w_out_6(ltl9c7lw_w_out_6)
                        , .ltl9c7lw_w_out_9(ltl9c7lw_w_out_9)
                        , .ltl9c7lw_w_out_11(ltl9c7lw_w_out_11)
                    );

Automata_ltl0c7lw automata_ltl0c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c7lw_w_out_4(ltl0c7lw_w_out_4)
                        , .ltl0c7lw_w_out_6(ltl0c7lw_w_out_6)
                        , .ltl0c7lw_w_out_9(ltl0c7lw_w_out_9)
                        , .ltl0c7lw_w_out_11(ltl0c7lw_w_out_11)
                    );

Automata_ltl6c7lw automata_ltl6c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c7lw_w_out_4(ltl6c7lw_w_out_4)
                        , .ltl6c7lw_w_out_6(ltl6c7lw_w_out_6)
                        , .ltl6c7lw_w_out_9(ltl6c7lw_w_out_9)
                        , .ltl6c7lw_w_out_11(ltl6c7lw_w_out_11)
                    );

Automata_ltl4c7lw automata_ltl4c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c7lw_w_out_4(ltl4c7lw_w_out_4)
                        , .ltl4c7lw_w_out_6(ltl4c7lw_w_out_6)
                        , .ltl4c7lw_w_out_9(ltl4c7lw_w_out_9)
                        , .ltl4c7lw_w_out_11(ltl4c7lw_w_out_11)
                    );

Automata_ltl7c7lw automata_ltl7c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c7lw_w_out_4(ltl7c7lw_w_out_4)
                        , .ltl7c7lw_w_out_6(ltl7c7lw_w_out_6)
                        , .ltl7c7lw_w_out_9(ltl7c7lw_w_out_9)
                        , .ltl7c7lw_w_out_11(ltl7c7lw_w_out_11)
                    );

Automata_ltl2c7lw automata_ltl2c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c7lw_w_out_4(ltl2c7lw_w_out_4)
                        , .ltl2c7lw_w_out_6(ltl2c7lw_w_out_6)
                        , .ltl2c7lw_w_out_9(ltl2c7lw_w_out_9)
                        , .ltl2c7lw_w_out_11(ltl2c7lw_w_out_11)
                    );

Automata_ltl1c7lw automata_ltl1c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c7lw_w_out_4(ltl1c7lw_w_out_4)
                        , .ltl1c7lw_w_out_6(ltl1c7lw_w_out_6)
                        , .ltl1c7lw_w_out_9(ltl1c7lw_w_out_9)
                        , .ltl1c7lw_w_out_11(ltl1c7lw_w_out_11)
                    );

Automata_ltl8c7lw automata_ltl8c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c7lw_w_out_4(ltl8c7lw_w_out_4)
                        , .ltl8c7lw_w_out_6(ltl8c7lw_w_out_6)
                        , .ltl8c7lw_w_out_9(ltl8c7lw_w_out_9)
                        , .ltl8c7lw_w_out_11(ltl8c7lw_w_out_11)
                    );

Automata_ltl3c7lw automata_ltl3c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c7lw_w_out_4(ltl3c7lw_w_out_4)
                        , .ltl3c7lw_w_out_6(ltl3c7lw_w_out_6)
                        , .ltl3c7lw_w_out_9(ltl3c7lw_w_out_9)
                        , .ltl3c7lw_w_out_11(ltl3c7lw_w_out_11)
                    );

Automata_ltl5c7lw automata_ltl5c7lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c7lw_w_out_4(ltl5c7lw_w_out_4)
                        , .ltl5c7lw_w_out_6(ltl5c7lw_w_out_6)
                        , .ltl5c7lw_w_out_9(ltl5c7lw_w_out_9)
                        , .ltl5c7lw_w_out_11(ltl5c7lw_w_out_11)
                    );
























    



 










endmodule

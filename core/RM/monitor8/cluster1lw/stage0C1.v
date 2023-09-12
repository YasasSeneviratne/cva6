





/*
******************** Summary {}********************
total nodes = 55
total reports = 20
total edges = 110
average symbols len = 6.92727272727
#######################################################
*/

module Automata_Stage0C1lw(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl4c1lw_w_out_4
                    , output ltl4c1lw_w_out_6
                    , output ltl4c1lw_w_out_9
                    , output ltl4c1lw_w_out_11
                    
                    , output ltl1c1lw_w_out_4
                    , output ltl1c1lw_w_out_6
                    , output ltl1c1lw_w_out_9
                    , output ltl1c1lw_w_out_11
                    
                    , output ltl3c1lw_w_out_4
                    , output ltl3c1lw_w_out_6
                    , output ltl3c1lw_w_out_9
                    , output ltl3c1lw_w_out_11
                    
                    , output ltl2c1lw_w_out_4
                    , output ltl2c1lw_w_out_6
                    , output ltl2c1lw_w_out_9
                    , output ltl2c1lw_w_out_11
                    
                    , output ltl0c1lw_w_out_4
                    , output ltl0c1lw_w_out_6
                    , output ltl0c1lw_w_out_9
                    , output ltl0c1lw_w_out_11
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



Automata_ltl4c1lw automata_ltl4c1lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c1lw_w_out_4(ltl4c1lw_w_out_4)
                        , .ltl4c1lw_w_out_6(ltl4c1lw_w_out_6)
                        , .ltl4c1lw_w_out_9(ltl4c1lw_w_out_9)
                        , .ltl4c1lw_w_out_11(ltl4c1lw_w_out_11)
                    );

Automata_ltl1c1lw automata_ltl1c1lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c1lw_w_out_4(ltl1c1lw_w_out_4)
                        , .ltl1c1lw_w_out_6(ltl1c1lw_w_out_6)
                        , .ltl1c1lw_w_out_9(ltl1c1lw_w_out_9)
                        , .ltl1c1lw_w_out_11(ltl1c1lw_w_out_11)
                    );

Automata_ltl3c1lw automata_ltl3c1lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c1lw_w_out_4(ltl3c1lw_w_out_4)
                        , .ltl3c1lw_w_out_6(ltl3c1lw_w_out_6)
                        , .ltl3c1lw_w_out_9(ltl3c1lw_w_out_9)
                        , .ltl3c1lw_w_out_11(ltl3c1lw_w_out_11)
                    );

Automata_ltl2c1lw automata_ltl2c1lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c1lw_w_out_4(ltl2c1lw_w_out_4)
                        , .ltl2c1lw_w_out_6(ltl2c1lw_w_out_6)
                        , .ltl2c1lw_w_out_9(ltl2c1lw_w_out_9)
                        , .ltl2c1lw_w_out_11(ltl2c1lw_w_out_11)
                    );

Automata_ltl0c1lw automata_ltl0c1lw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c1lw_w_out_4(ltl0c1lw_w_out_4)
                        , .ltl0c1lw_w_out_6(ltl0c1lw_w_out_6)
                        , .ltl0c1lw_w_out_9(ltl0c1lw_w_out_9)
                        , .ltl0c1lw_w_out_11(ltl0c1lw_w_out_11)
                    );














    



 










endmodule

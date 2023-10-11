





/*
******************** Summary {}********************
total nodes = 44
total reports = 16
total edges = 88
average symbols len = 19.4090909091
#######################################################
*/

module Automata_Stage0lwsw(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl1c0lwsw_w_out_4
                    , output ltl1c0lwsw_w_out_6
                    , output ltl1c0lwsw_w_out_9
                    , output ltl1c0lwsw_w_out_11
                    
                    , output ltl3c0lwsw_w_out_4
                    , output ltl3c0lwsw_w_out_6
                    , output ltl3c0lwsw_w_out_9
                    , output ltl3c0lwsw_w_out_11
                    
                    , output ltl0c0lwsw_w_out_4
                    , output ltl0c0lwsw_w_out_6
                    , output ltl0c0lwsw_w_out_9
                    , output ltl0c0lwsw_w_out_11
                    
                    , output ltl2c0lwsw_w_out_4
                    , output ltl2c0lwsw_w_out_6
                    , output ltl2c0lwsw_w_out_9
                    , output ltl2c0lwsw_w_out_11
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



Automata_ltl1c0lwsw automata_ltl1c0lwsw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c0lwsw_w_out_4(ltl1c0lwsw_w_out_4)
                        , .ltl1c0lwsw_w_out_6(ltl1c0lwsw_w_out_6)
                        , .ltl1c0lwsw_w_out_9(ltl1c0lwsw_w_out_9)
                        , .ltl1c0lwsw_w_out_11(ltl1c0lwsw_w_out_11)
                    );

Automata_ltl3c0lwsw automata_ltl3c0lwsw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c0lwsw_w_out_4(ltl3c0lwsw_w_out_4)
                        , .ltl3c0lwsw_w_out_6(ltl3c0lwsw_w_out_6)
                        , .ltl3c0lwsw_w_out_9(ltl3c0lwsw_w_out_9)
                        , .ltl3c0lwsw_w_out_11(ltl3c0lwsw_w_out_11)
                    );

Automata_ltl0c0lwsw automata_ltl0c0lwsw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c0lwsw_w_out_4(ltl0c0lwsw_w_out_4)
                        , .ltl0c0lwsw_w_out_6(ltl0c0lwsw_w_out_6)
                        , .ltl0c0lwsw_w_out_9(ltl0c0lwsw_w_out_9)
                        , .ltl0c0lwsw_w_out_11(ltl0c0lwsw_w_out_11)
                    );

Automata_ltl2c0lwsw automata_ltl2c0lwsw (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c0lwsw_w_out_4(ltl2c0lwsw_w_out_4)
                        , .ltl2c0lwsw_w_out_6(ltl2c0lwsw_w_out_6)
                        , .ltl2c0lwsw_w_out_9(ltl2c0lwsw_w_out_9)
                        , .ltl2c0lwsw_w_out_11(ltl2c0lwsw_w_out_11)
                    );












    



 










endmodule

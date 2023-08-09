





/*
******************** Summary {}********************
total nodes = 117
total reports = 52
total edges = 221
average symbols len = 19.3931623932
#######################################################
*/

module Automata_Stage0C6(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl11c6_w_out_2
                    , output ltl11c6_w_out_4
                    , output ltl11c6_w_out_7
                    , output ltl11c6_w_out_9
                    
                    , output ltl9c6_w_out_2
                    , output ltl9c6_w_out_4
                    , output ltl9c6_w_out_7
                    , output ltl9c6_w_out_9
                    
                    , output ltl8c6_w_out_2
                    , output ltl8c6_w_out_4
                    , output ltl8c6_w_out_7
                    , output ltl8c6_w_out_9
                    
                    , output ltl1c6_w_out_2
                    , output ltl1c6_w_out_4
                    , output ltl1c6_w_out_7
                    , output ltl1c6_w_out_9
                    
                    , output ltl6c6_w_out_2
                    , output ltl6c6_w_out_4
                    , output ltl6c6_w_out_7
                    , output ltl6c6_w_out_9
                    
                    , output ltl7c6_w_out_2
                    , output ltl7c6_w_out_4
                    , output ltl7c6_w_out_7
                    , output ltl7c6_w_out_9
                    
                    , output ltl4c6_w_out_2
                    , output ltl4c6_w_out_4
                    , output ltl4c6_w_out_7
                    , output ltl4c6_w_out_9
                    
                    , output ltl5c6_w_out_2
                    , output ltl5c6_w_out_4
                    , output ltl5c6_w_out_7
                    , output ltl5c6_w_out_9
                    
                    , output ltl10c6_w_out_2
                    , output ltl10c6_w_out_4
                    , output ltl10c6_w_out_7
                    , output ltl10c6_w_out_9
                    
                    , output ltl0c6_w_out_2
                    , output ltl0c6_w_out_4
                    , output ltl0c6_w_out_7
                    , output ltl0c6_w_out_9
                    
                    , output ltl2c6_w_out_2
                    , output ltl2c6_w_out_4
                    , output ltl2c6_w_out_7
                    , output ltl2c6_w_out_9
                    
                    , output ltl12c6_w_out_3
                    , output ltl12c6_w_out_5
                    , output ltl12c6_w_out_7
                    , output ltl12c6_w_out_9
                    
                    , output ltl3c6_w_out_2
                    , output ltl3c6_w_out_4
                    , output ltl3c6_w_out_7
                    , output ltl3c6_w_out_9
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



Automata_ltl11c6 automata_ltl11c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl11c6_w_out_2(ltl11c6_w_out_2)
                        , .ltl11c6_w_out_4(ltl11c6_w_out_4)
                        , .ltl11c6_w_out_7(ltl11c6_w_out_7)
                        , .ltl11c6_w_out_9(ltl11c6_w_out_9)
                    );

Automata_ltl9c6 automata_ltl9c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c6_w_out_2(ltl9c6_w_out_2)
                        , .ltl9c6_w_out_4(ltl9c6_w_out_4)
                        , .ltl9c6_w_out_7(ltl9c6_w_out_7)
                        , .ltl9c6_w_out_9(ltl9c6_w_out_9)
                    );

Automata_ltl8c6 automata_ltl8c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c6_w_out_2(ltl8c6_w_out_2)
                        , .ltl8c6_w_out_4(ltl8c6_w_out_4)
                        , .ltl8c6_w_out_7(ltl8c6_w_out_7)
                        , .ltl8c6_w_out_9(ltl8c6_w_out_9)
                    );

Automata_ltl1c6 automata_ltl1c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c6_w_out_2(ltl1c6_w_out_2)
                        , .ltl1c6_w_out_4(ltl1c6_w_out_4)
                        , .ltl1c6_w_out_7(ltl1c6_w_out_7)
                        , .ltl1c6_w_out_9(ltl1c6_w_out_9)
                    );

Automata_ltl6c6 automata_ltl6c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c6_w_out_2(ltl6c6_w_out_2)
                        , .ltl6c6_w_out_4(ltl6c6_w_out_4)
                        , .ltl6c6_w_out_7(ltl6c6_w_out_7)
                        , .ltl6c6_w_out_9(ltl6c6_w_out_9)
                    );

Automata_ltl7c6 automata_ltl7c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c6_w_out_2(ltl7c6_w_out_2)
                        , .ltl7c6_w_out_4(ltl7c6_w_out_4)
                        , .ltl7c6_w_out_7(ltl7c6_w_out_7)
                        , .ltl7c6_w_out_9(ltl7c6_w_out_9)
                    );

Automata_ltl4c6 automata_ltl4c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c6_w_out_2(ltl4c6_w_out_2)
                        , .ltl4c6_w_out_4(ltl4c6_w_out_4)
                        , .ltl4c6_w_out_7(ltl4c6_w_out_7)
                        , .ltl4c6_w_out_9(ltl4c6_w_out_9)
                    );

Automata_ltl5c6 automata_ltl5c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c6_w_out_2(ltl5c6_w_out_2)
                        , .ltl5c6_w_out_4(ltl5c6_w_out_4)
                        , .ltl5c6_w_out_7(ltl5c6_w_out_7)
                        , .ltl5c6_w_out_9(ltl5c6_w_out_9)
                    );

Automata_ltl10c6 automata_ltl10c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl10c6_w_out_2(ltl10c6_w_out_2)
                        , .ltl10c6_w_out_4(ltl10c6_w_out_4)
                        , .ltl10c6_w_out_7(ltl10c6_w_out_7)
                        , .ltl10c6_w_out_9(ltl10c6_w_out_9)
                    );

Automata_ltl0c6 automata_ltl0c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c6_w_out_2(ltl0c6_w_out_2)
                        , .ltl0c6_w_out_4(ltl0c6_w_out_4)
                        , .ltl0c6_w_out_7(ltl0c6_w_out_7)
                        , .ltl0c6_w_out_9(ltl0c6_w_out_9)
                    );

Automata_ltl2c6 automata_ltl2c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c6_w_out_2(ltl2c6_w_out_2)
                        , .ltl2c6_w_out_4(ltl2c6_w_out_4)
                        , .ltl2c6_w_out_7(ltl2c6_w_out_7)
                        , .ltl2c6_w_out_9(ltl2c6_w_out_9)
                    );

Automata_ltl12c6 automata_ltl12c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl12c6_w_out_3(ltl12c6_w_out_3)
                        , .ltl12c6_w_out_5(ltl12c6_w_out_5)
                        , .ltl12c6_w_out_7(ltl12c6_w_out_7)
                        , .ltl12c6_w_out_9(ltl12c6_w_out_9)
                    );

Automata_ltl3c6 automata_ltl3c6 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c6_w_out_2(ltl3c6_w_out_2)
                        , .ltl3c6_w_out_4(ltl3c6_w_out_4)
                        , .ltl3c6_w_out_7(ltl3c6_w_out_7)
                        , .ltl3c6_w_out_9(ltl3c6_w_out_9)
                    );






























    



 










endmodule

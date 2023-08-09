





/*
******************** Summary {}********************
total nodes = 99
total reports = 44
total edges = 187
average symbols len = 12.9696969697
#######################################################
*/

module Automata_Stage0C0(input clk,
                    input run,
                    input reset,
                    input [7 : 0] top_symbols
                    , output ltl2c0_w_out_2
                    , output ltl2c0_w_out_4
                    , output ltl2c0_w_out_7
                    , output ltl2c0_w_out_9
                    
                    , output ltl9c0_w_out_2
                    , output ltl9c0_w_out_4
                    , output ltl9c0_w_out_7
                    , output ltl9c0_w_out_9
                    
                    , output ltl0c0_w_out_2
                    , output ltl0c0_w_out_4
                    , output ltl0c0_w_out_7
                    , output ltl0c0_w_out_9
                    
                    , output ltl8c0_w_out_2
                    , output ltl8c0_w_out_4
                    , output ltl8c0_w_out_7
                    , output ltl8c0_w_out_9
                    
                    , output ltl1c0_w_out_2
                    , output ltl1c0_w_out_4
                    , output ltl1c0_w_out_7
                    , output ltl1c0_w_out_9
                    
                    , output ltl4c0_w_out_2
                    , output ltl4c0_w_out_4
                    , output ltl4c0_w_out_7
                    , output ltl4c0_w_out_9
                    
                    , output ltl3c0_w_out_2
                    , output ltl3c0_w_out_4
                    , output ltl3c0_w_out_7
                    , output ltl3c0_w_out_9
                    
                    , output ltl10c0_w_out_3
                    , output ltl10c0_w_out_5
                    , output ltl10c0_w_out_7
                    , output ltl10c0_w_out_9
                    
                    , output ltl7c0_w_out_2
                    , output ltl7c0_w_out_4
                    , output ltl7c0_w_out_7
                    , output ltl7c0_w_out_9
                    
                    , output ltl5c0_w_out_2
                    , output ltl5c0_w_out_4
                    , output ltl5c0_w_out_7
                    , output ltl5c0_w_out_9
                    
                    , output ltl6c0_w_out_2
                    , output ltl6c0_w_out_4
                    , output ltl6c0_w_out_7
                    , output ltl6c0_w_out_9
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



Automata_ltl2c0 automata_ltl2c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl2c0_w_out_2(ltl2c0_w_out_2)
                        , .ltl2c0_w_out_4(ltl2c0_w_out_4)
                        , .ltl2c0_w_out_7(ltl2c0_w_out_7)
                        , .ltl2c0_w_out_9(ltl2c0_w_out_9)
                    );

Automata_ltl9c0 automata_ltl9c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl9c0_w_out_2(ltl9c0_w_out_2)
                        , .ltl9c0_w_out_4(ltl9c0_w_out_4)
                        , .ltl9c0_w_out_7(ltl9c0_w_out_7)
                        , .ltl9c0_w_out_9(ltl9c0_w_out_9)
                    );

Automata_ltl0c0 automata_ltl0c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl0c0_w_out_2(ltl0c0_w_out_2)
                        , .ltl0c0_w_out_4(ltl0c0_w_out_4)
                        , .ltl0c0_w_out_7(ltl0c0_w_out_7)
                        , .ltl0c0_w_out_9(ltl0c0_w_out_9)
                    );

Automata_ltl8c0 automata_ltl8c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl8c0_w_out_2(ltl8c0_w_out_2)
                        , .ltl8c0_w_out_4(ltl8c0_w_out_4)
                        , .ltl8c0_w_out_7(ltl8c0_w_out_7)
                        , .ltl8c0_w_out_9(ltl8c0_w_out_9)
                    );

Automata_ltl1c0 automata_ltl1c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl1c0_w_out_2(ltl1c0_w_out_2)
                        , .ltl1c0_w_out_4(ltl1c0_w_out_4)
                        , .ltl1c0_w_out_7(ltl1c0_w_out_7)
                        , .ltl1c0_w_out_9(ltl1c0_w_out_9)
                    );

Automata_ltl4c0 automata_ltl4c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl4c0_w_out_2(ltl4c0_w_out_2)
                        , .ltl4c0_w_out_4(ltl4c0_w_out_4)
                        , .ltl4c0_w_out_7(ltl4c0_w_out_7)
                        , .ltl4c0_w_out_9(ltl4c0_w_out_9)
                    );

Automata_ltl3c0 automata_ltl3c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl3c0_w_out_2(ltl3c0_w_out_2)
                        , .ltl3c0_w_out_4(ltl3c0_w_out_4)
                        , .ltl3c0_w_out_7(ltl3c0_w_out_7)
                        , .ltl3c0_w_out_9(ltl3c0_w_out_9)
                    );

Automata_ltl10c0 automata_ltl10c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl10c0_w_out_3(ltl10c0_w_out_3)
                        , .ltl10c0_w_out_5(ltl10c0_w_out_5)
                        , .ltl10c0_w_out_7(ltl10c0_w_out_7)
                        , .ltl10c0_w_out_9(ltl10c0_w_out_9)
                    );

Automata_ltl7c0 automata_ltl7c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl7c0_w_out_2(ltl7c0_w_out_2)
                        , .ltl7c0_w_out_4(ltl7c0_w_out_4)
                        , .ltl7c0_w_out_7(ltl7c0_w_out_7)
                        , .ltl7c0_w_out_9(ltl7c0_w_out_9)
                    );

Automata_ltl5c0 automata_ltl5c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl5c0_w_out_2(ltl5c0_w_out_2)
                        , .ltl5c0_w_out_4(ltl5c0_w_out_4)
                        , .ltl5c0_w_out_7(ltl5c0_w_out_7)
                        , .ltl5c0_w_out_9(ltl5c0_w_out_9)
                    );

Automata_ltl6c0 automata_ltl6c0 (
                     .clk(clk),
                     .run(run),
                     .reset(reset),
                        .symbols(top_symbols )
                        , .ltl6c0_w_out_2(ltl6c0_w_out_2)
                        , .ltl6c0_w_out_4(ltl6c0_w_out_4)
                        , .ltl6c0_w_out_7(ltl6c0_w_out_7)
                        , .ltl6c0_w_out_9(ltl6c0_w_out_9)
                    );


























    



 










endmodule

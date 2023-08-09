module ltlwrap(
input clk,
input run,
input reset,
input [7 : 0] symbols,

output ltl0c0_w_out_2,
output ltl0c0_w_out_4,
output ltl0c0_w_out_7,
output ltl0c0_w_out_9

);

logic run_reg;
logic reset_reg;
logic lreset_reg;
logic [7 : 0] symbols_reg;
           
//logic ltl0c0_w_out_2;
//logic ltl0c0_w_out_4;
//logic ltl0c0_w_out_7;
//logic ltl0c0_w_out_9;

Automata_ltl0c0 dut(.symbols(symbols_reg),
		    .run(run_reg),
	            .reset(reset_reg),
		    .*);

always_ff @(posedge clk) begin
  symbols_reg <= symbols;
  run_reg <= run;
  reset_reg <= reset;
end
endmodule

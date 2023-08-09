




/*
******************** Summary ********************
report for ltl0c5
Number of nodes = 9
Number of edges = 17
Average edge per node = 0.529411764706
Number of start nodes = 3
Number of report nodes = 4
does have all_input = False
does have special element = False
is Homogenous = True
stride value = 1
Max Fan-in = 4
Max Fan-out = 3
Max value in dim = 255
average number of intervals per STE = 1.11111111111
#######################################################
*/

 



module LUT_Match_ltl0c5_1 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_2 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
     ((input_capture[7:0] >= 8'd192) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_4 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_5 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_6 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_7 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_8 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl0c5_9 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl0c5(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl0c5_w_out_2
           , output ltl0c5_w_out_4
           , output ltl0c5_w_out_7
           , output ltl0c5_w_out_9);

wire all_input;
wire start_of_data;

assign all_input = 1'b1;
logic start_of_data;
logic start_of_data_reg;
logic start_of_data_reg_ne;

always_ff @ (posedge clk) begin
    if (reset) begin
        start_of_data_reg <= 1;
    end
    else begin
        start_of_data_reg <= 0;
    end
end

always_ff @ (negedge clk) begin
    if (reset) begin
        start_of_data_reg_ne <= 1;
    end
    else begin
        start_of_data_reg_ne <= 0;
    end
end
assign start_of_data = start_of_data_reg & start_of_data_reg_ne & ~reset;


wire ltl0c5_w_out_1;
wire ltl0c5_lut_match_1;
wire ltl0c5_w_match_1;

    
    
    

LUT_Match_ltl0c5_1 #(8) lut_match_ltl0c5_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_1));


assign ltl0c5_w_match_1 = ltl0c5_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl0c5_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl0c5_w_out_1 }),
                .match(ltl0c5_w_match_1) ,
                .active_state(ltl0c5_w_out_1));


wire ltl0c5_lut_match_2;
wire ltl0c5_w_match_2;

    
    
    

LUT_Match_ltl0c5_2 #(8) lut_match_ltl0c5_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_2));


assign ltl0c5_w_match_2 = ltl0c5_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl0c5_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl0c5_w_out_1 }),
                .match(ltl0c5_w_match_2) ,
                .active_state(ltl0c5_w_out_2));


wire ltl0c5_w_out_3;
wire ltl0c5_lut_match_3;
wire ltl0c5_w_match_3;

    
    
    

LUT_Match_ltl0c5_3 #(8) lut_match_ltl0c5_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_3));


assign ltl0c5_w_match_3 = ltl0c5_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl0c5_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl0c5_w_out_1 }),
                .match(ltl0c5_w_match_3) ,
                .active_state(ltl0c5_w_out_3));


wire ltl0c5_lut_match_4;
wire ltl0c5_w_match_4;

    
    
    

LUT_Match_ltl0c5_4 #(8) lut_match_ltl0c5_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_4));


assign ltl0c5_w_match_4 = ltl0c5_lut_match_4 ;

STE #(.fan_in(4)) ltl0c5_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl0c5_w_out_9, ltl0c5_w_out_2, ltl0c5_w_out_4, ltl0c5_w_out_7 }),
                .match(ltl0c5_w_match_4) ,
                .active_state(ltl0c5_w_out_4));


wire ltl0c5_w_out_5;
wire ltl0c5_lut_match_5;
wire ltl0c5_w_match_5;

    
    
    

LUT_Match_ltl0c5_5 #(8) lut_match_ltl0c5_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_5));


assign ltl0c5_w_match_5 = ltl0c5_lut_match_5 ;

STE #(.fan_in(2)) ltl0c5_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl0c5_w_out_3, ltl0c5_w_out_5 }),
                .match(ltl0c5_w_match_5) ,
                .active_state(ltl0c5_w_out_5));


wire ltl0c5_w_out_6;
wire ltl0c5_lut_match_6;
wire ltl0c5_w_match_6;

    
    
    

LUT_Match_ltl0c5_6 #(8) lut_match_ltl0c5_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_6));


assign ltl0c5_w_match_6 = ltl0c5_lut_match_6 ;

STE #(.fan_in(2)) ltl0c5_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl0c5_w_out_3, ltl0c5_w_out_5 }),
                .match(ltl0c5_w_match_6) ,
                .active_state(ltl0c5_w_out_6));


wire ltl0c5_lut_match_7;
wire ltl0c5_w_match_7;

    
    
    

LUT_Match_ltl0c5_7 #(8) lut_match_ltl0c5_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_7));


assign ltl0c5_w_match_7 = ltl0c5_lut_match_7 ;

STE #(.fan_in(2)) ltl0c5_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl0c5_w_out_3, ltl0c5_w_out_5 }),
                .match(ltl0c5_w_match_7) ,
                .active_state(ltl0c5_w_out_7));


wire ltl0c5_w_out_8;
wire ltl0c5_lut_match_8;
wire ltl0c5_w_match_8;

    
    
    

LUT_Match_ltl0c5_8 #(8) lut_match_ltl0c5_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_8));


assign ltl0c5_w_match_8 = ltl0c5_lut_match_8 ;

STE #(.fan_in(2)) ltl0c5_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl0c5_w_out_8, ltl0c5_w_out_6 }),
                .match(ltl0c5_w_match_8) ,
                .active_state(ltl0c5_w_out_8));


wire ltl0c5_lut_match_9;
wire ltl0c5_w_match_9;

    
    
    

LUT_Match_ltl0c5_9 #(8) lut_match_ltl0c5_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl0c5_lut_match_9));


assign ltl0c5_w_match_9 = ltl0c5_lut_match_9 ;

STE #(.fan_in(2)) ltl0c5_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl0c5_w_out_8, ltl0c5_w_out_6 }),
                .match(ltl0c5_w_match_9) ,
                .active_state(ltl0c5_w_out_9));




endmodule







/*
******************** Summary ********************
report for ltl4c1
Number of nodes = 11
Number of edges = 22
Average edge per node = 0.5
Number of start nodes = 4
Number of report nodes = 4
does have all_input = False
does have special element = False
is Homogenous = True
stride value = 1
Max Fan-in = 4
Max Fan-out = 4
Max value in dim = 255
average number of intervals per STE = 4.45454545455
#######################################################
*/

 



module LUT_Match_ltl4c1_1 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_2 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd111) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd55) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd119) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_4 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd56) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd120) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_5 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_6 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd56) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd111) && 1'b1) ||
     ((input_capture[7:0] >= 8'd120) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_7 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd55) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd119) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_8 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd55) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd119) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_9 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_10 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl4c1_11 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl4c1(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl4c1_w_out_4
           , output ltl4c1_w_out_6
           , output ltl4c1_w_out_9
           , output ltl4c1_w_out_11);

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


wire ltl4c1_w_out_1;
wire ltl4c1_lut_match_1;
wire ltl4c1_w_match_1;

    
    
    

LUT_Match_ltl4c1_1 #(8) lut_match_ltl4c1_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_1));


assign ltl4c1_w_match_1 = ltl4c1_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl4c1_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl4c1_w_out_1 }),
                .match(ltl4c1_w_match_1) ,
                .active_state(ltl4c1_w_out_1));


wire ltl4c1_w_out_2;
wire ltl4c1_lut_match_2;
wire ltl4c1_w_match_2;

    
    
    

LUT_Match_ltl4c1_2 #(8) lut_match_ltl4c1_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_2));


assign ltl4c1_w_match_2 = ltl4c1_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl4c1_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl4c1_w_out_1 }),
                .match(ltl4c1_w_match_2) ,
                .active_state(ltl4c1_w_out_2));


wire ltl4c1_w_out_3;
wire ltl4c1_lut_match_3;
wire ltl4c1_w_match_3;

    
    
    

LUT_Match_ltl4c1_3 #(8) lut_match_ltl4c1_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_3));


assign ltl4c1_w_match_3 = ltl4c1_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl4c1_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl4c1_w_out_1 }),
                .match(ltl4c1_w_match_3) ,
                .active_state(ltl4c1_w_out_3));


wire ltl4c1_lut_match_4;
wire ltl4c1_w_match_4;

    
    
    

LUT_Match_ltl4c1_4 #(8) lut_match_ltl4c1_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_4));


assign ltl4c1_w_match_4 = ltl4c1_lut_match_4 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl4c1_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl4c1_w_out_1 }),
                .match(ltl4c1_w_match_4) ,
                .active_state(ltl4c1_w_out_4));


wire ltl4c1_w_out_5;
wire ltl4c1_lut_match_5;
wire ltl4c1_w_match_5;

    
    
    

LUT_Match_ltl4c1_5 #(8) lut_match_ltl4c1_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_5));


assign ltl4c1_w_match_5 = ltl4c1_lut_match_5 ;

STE #(.fan_in(2)) ltl4c1_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl4c1_w_out_2, ltl4c1_w_out_5 }),
                .match(ltl4c1_w_match_5) ,
                .active_state(ltl4c1_w_out_5));


wire ltl4c1_lut_match_6;
wire ltl4c1_w_match_6;

    
    
    

LUT_Match_ltl4c1_6 #(8) lut_match_ltl4c1_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_6));


assign ltl4c1_w_match_6 = ltl4c1_lut_match_6 ;

STE #(.fan_in(4)) ltl4c1_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl4c1_w_out_8, ltl4c1_w_out_2, ltl4c1_w_out_3, ltl4c1_w_out_5 }),
                .match(ltl4c1_w_match_6) ,
                .active_state(ltl4c1_w_out_6));


wire ltl4c1_w_out_7;
wire ltl4c1_lut_match_7;
wire ltl4c1_w_match_7;

    
    
    

LUT_Match_ltl4c1_7 #(8) lut_match_ltl4c1_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_7));


assign ltl4c1_w_match_7 = ltl4c1_lut_match_7 ;

STE #(.fan_in(2)) ltl4c1_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl4c1_w_out_2, ltl4c1_w_out_5 }),
                .match(ltl4c1_w_match_7) ,
                .active_state(ltl4c1_w_out_7));


wire ltl4c1_w_out_8;
wire ltl4c1_lut_match_8;
wire ltl4c1_w_match_8;

    
    
    

LUT_Match_ltl4c1_8 #(8) lut_match_ltl4c1_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_8));


assign ltl4c1_w_match_8 = ltl4c1_lut_match_8 ;

STE #(.fan_in(2)) ltl4c1_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl4c1_w_out_8, ltl4c1_w_out_3 }),
                .match(ltl4c1_w_match_8) ,
                .active_state(ltl4c1_w_out_8));


wire ltl4c1_lut_match_9;
wire ltl4c1_w_match_9;

    
    
    

LUT_Match_ltl4c1_9 #(8) lut_match_ltl4c1_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_9));


assign ltl4c1_w_match_9 = ltl4c1_lut_match_9 ;

STE #(.fan_in(4)) ltl4c1_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl4c1_w_out_9, ltl4c1_w_out_11, ltl4c1_w_out_4, ltl4c1_w_out_6 }),
                .match(ltl4c1_w_match_9) ,
                .active_state(ltl4c1_w_out_9));


wire ltl4c1_w_out_10;
wire ltl4c1_lut_match_10;
wire ltl4c1_w_match_10;

    
    
    

LUT_Match_ltl4c1_10 #(8) lut_match_ltl4c1_10(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_10));


assign ltl4c1_w_match_10 = ltl4c1_lut_match_10 ;

STE #(.fan_in(2)) ltl4c1_ste_10 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl4c1_w_out_10, ltl4c1_w_out_7 }),
                .match(ltl4c1_w_match_10) ,
                .active_state(ltl4c1_w_out_10));


wire ltl4c1_lut_match_11;
wire ltl4c1_w_match_11;

    
    
    

LUT_Match_ltl4c1_11 #(8) lut_match_ltl4c1_11(
                .clk(clk),
                .symbols(symbols),
                .match(ltl4c1_lut_match_11));


assign ltl4c1_w_match_11 = ltl4c1_lut_match_11 ;

STE #(.fan_in(2)) ltl4c1_ste_11 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl4c1_w_out_10, ltl4c1_w_out_7 }),
                .match(ltl4c1_w_match_11) ,
                .active_state(ltl4c1_w_out_11));




endmodule


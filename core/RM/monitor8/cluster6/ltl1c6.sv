




/*
******************** Summary ********************
report for ltl1c6
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
average number of intervals per STE = 6.09090909091
#######################################################
*/

 



module LUT_Match_ltl1c6_1 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_2 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd135) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd151) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd167) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd183) && 1'b1) ||
     ((input_capture[7:0] >= 8'd192) &&(input_capture[7:0] <= 8'd199) && 1'b1) ||
     ((input_capture[7:0] >= 8'd208) &&(input_capture[7:0] <= 8'd215) && 1'b1) ||
     ((input_capture[7:0] >= 8'd224) &&(input_capture[7:0] <= 8'd231) && 1'b1) ||
     ((input_capture[7:0] >= 8'd240) &&(input_capture[7:0] <= 8'd247) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl1c6_4 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd136) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd152) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd168) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
     ((input_capture[7:0] >= 8'd184) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
     ((input_capture[7:0] >= 8'd200) &&(input_capture[7:0] <= 8'd207) && 1'b1) ||
     ((input_capture[7:0] >= 8'd216) &&(input_capture[7:0] <= 8'd223) && 1'b1) ||
     ((input_capture[7:0] >= 8'd232) &&(input_capture[7:0] <= 8'd239) && 1'b1) ||
     ((input_capture[7:0] >= 8'd248) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl1c6_5 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_6 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_7 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_8 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_9 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_10 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl1c6_11 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd120) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl1c6(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl1c6_w_out_4
           , output ltl1c6_w_out_6
           , output ltl1c6_w_out_9
           , output ltl1c6_w_out_11);

wire all_input;

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


wire ltl1c6_w_out_1;
wire ltl1c6_lut_match_1;
wire ltl1c6_w_match_1;

    
    
    

LUT_Match_ltl1c6_1 #(8) lut_match_ltl1c6_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_1));


assign ltl1c6_w_match_1 = ltl1c6_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl1c6_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl1c6_w_out_1 }),
                .match(ltl1c6_w_match_1) ,
                .active_state(ltl1c6_w_out_1));


wire ltl1c6_w_out_2;
wire ltl1c6_lut_match_2;
wire ltl1c6_w_match_2;

    
    
    

LUT_Match_ltl1c6_2 #(8) lut_match_ltl1c6_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_2));


assign ltl1c6_w_match_2 = ltl1c6_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl1c6_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl1c6_w_out_1 }),
                .match(ltl1c6_w_match_2) ,
                .active_state(ltl1c6_w_out_2));


wire ltl1c6_w_out_3;
wire ltl1c6_lut_match_3;
wire ltl1c6_w_match_3;

    
    
    

LUT_Match_ltl1c6_3 #(8) lut_match_ltl1c6_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_3));


assign ltl1c6_w_match_3 = ltl1c6_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl1c6_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl1c6_w_out_1 }),
                .match(ltl1c6_w_match_3) ,
                .active_state(ltl1c6_w_out_3));


wire ltl1c6_lut_match_4;
wire ltl1c6_w_match_4;

    
    
    

LUT_Match_ltl1c6_4 #(8) lut_match_ltl1c6_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_4));


assign ltl1c6_w_match_4 = ltl1c6_lut_match_4 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl1c6_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl1c6_w_out_1 }),
                .match(ltl1c6_w_match_4) ,
                .active_state(ltl1c6_w_out_4));


wire ltl1c6_w_out_5;
wire ltl1c6_lut_match_5;
wire ltl1c6_w_match_5;

    
    
    

LUT_Match_ltl1c6_5 #(8) lut_match_ltl1c6_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_5));


assign ltl1c6_w_match_5 = ltl1c6_lut_match_5 ;

STE #(.fan_in(2)) ltl1c6_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl1c6_w_out_2, ltl1c6_w_out_5 }),
                .match(ltl1c6_w_match_5) ,
                .active_state(ltl1c6_w_out_5));


wire ltl1c6_lut_match_6;
wire ltl1c6_w_match_6;

    
    
    

LUT_Match_ltl1c6_6 #(8) lut_match_ltl1c6_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_6));


assign ltl1c6_w_match_6 = ltl1c6_lut_match_6 ;

STE #(.fan_in(4)) ltl1c6_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl1c6_w_out_2, ltl1c6_w_out_3, ltl1c6_w_out_5, ltl1c6_w_out_7 }),
                .match(ltl1c6_w_match_6) ,
                .active_state(ltl1c6_w_out_6));


wire ltl1c6_w_out_7;
wire ltl1c6_lut_match_7;
wire ltl1c6_w_match_7;

    
    
    

LUT_Match_ltl1c6_7 #(8) lut_match_ltl1c6_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_7));


assign ltl1c6_w_match_7 = ltl1c6_lut_match_7 ;

STE #(.fan_in(2)) ltl1c6_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl1c6_w_out_3, ltl1c6_w_out_7 }),
                .match(ltl1c6_w_match_7) ,
                .active_state(ltl1c6_w_out_7));


wire ltl1c6_w_out_8;
wire ltl1c6_lut_match_8;
wire ltl1c6_w_match_8;

    
    
    

LUT_Match_ltl1c6_8 #(8) lut_match_ltl1c6_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_8));


assign ltl1c6_w_match_8 = ltl1c6_lut_match_8 ;

STE #(.fan_in(2)) ltl1c6_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl1c6_w_out_3, ltl1c6_w_out_7 }),
                .match(ltl1c6_w_match_8) ,
                .active_state(ltl1c6_w_out_8));


wire ltl1c6_lut_match_9;
wire ltl1c6_w_match_9;

    
    
    

LUT_Match_ltl1c6_9 #(8) lut_match_ltl1c6_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_9));


assign ltl1c6_w_match_9 = ltl1c6_lut_match_9 ;

STE #(.fan_in(4)) ltl1c6_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl1c6_w_out_9, ltl1c6_w_out_11, ltl1c6_w_out_4, ltl1c6_w_out_6 }),
                .match(ltl1c6_w_match_9) ,
                .active_state(ltl1c6_w_out_9));


wire ltl1c6_w_out_10;
wire ltl1c6_lut_match_10;
wire ltl1c6_w_match_10;

    
    
    

LUT_Match_ltl1c6_10 #(8) lut_match_ltl1c6_10(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_10));


assign ltl1c6_w_match_10 = ltl1c6_lut_match_10 ;

STE #(.fan_in(2)) ltl1c6_ste_10 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl1c6_w_out_8, ltl1c6_w_out_10 }),
                .match(ltl1c6_w_match_10) ,
                .active_state(ltl1c6_w_out_10));


wire ltl1c6_lut_match_11;
wire ltl1c6_w_match_11;

    
    
    

LUT_Match_ltl1c6_11 #(8) lut_match_ltl1c6_11(
                .clk(clk),
                .symbols(symbols),
                .match(ltl1c6_lut_match_11));


assign ltl1c6_w_match_11 = ltl1c6_lut_match_11 ;

STE #(.fan_in(2)) ltl1c6_ste_11 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl1c6_w_out_8, ltl1c6_w_out_10 }),
                .match(ltl1c6_w_match_11) ,
                .active_state(ltl1c6_w_out_11));




endmodule







/*
******************** Summary ********************
report for ltl2c6
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
average number of intervals per STE = 3.88888888889
#######################################################
*/

 



module LUT_Match_ltl2c6_1 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c6_2 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
     ((input_capture[7:0] >= 8'd208) &&(input_capture[7:0] <= 8'd223) && 1'b1) ||
     ((input_capture[7:0] >= 8'd240) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c6_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd111) && 1'b1) ||
     ((input_capture[7:0] >= 8'd192) &&(input_capture[7:0] <= 8'd207) && 1'b1) ||
     ((input_capture[7:0] >= 8'd224) &&(input_capture[7:0] <= 8'd239) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c6_4 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl2c6_5 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c6_6 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c6_7 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl2c6_8 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c6_9 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl2c6(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl2c6_w_out_2
           , output ltl2c6_w_out_4
           , output ltl2c6_w_out_7
           , output ltl2c6_w_out_9);

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


wire ltl2c6_w_out_1;
wire ltl2c6_lut_match_1;
wire ltl2c6_w_match_1;

    
    
    

LUT_Match_ltl2c6_1 #(8) lut_match_ltl2c6_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_1));


assign ltl2c6_w_match_1 = ltl2c6_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl2c6_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl2c6_w_out_1 }),
                .match(ltl2c6_w_match_1) ,
                .active_state(ltl2c6_w_out_1));


wire ltl2c6_lut_match_2;
wire ltl2c6_w_match_2;

    
    
    

LUT_Match_ltl2c6_2 #(8) lut_match_ltl2c6_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_2));


assign ltl2c6_w_match_2 = ltl2c6_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl2c6_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl2c6_w_out_1 }),
                .match(ltl2c6_w_match_2) ,
                .active_state(ltl2c6_w_out_2));


wire ltl2c6_w_out_3;
wire ltl2c6_lut_match_3;
wire ltl2c6_w_match_3;

    
    
    

LUT_Match_ltl2c6_3 #(8) lut_match_ltl2c6_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_3));


assign ltl2c6_w_match_3 = ltl2c6_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl2c6_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl2c6_w_out_1 }),
                .match(ltl2c6_w_match_3) ,
                .active_state(ltl2c6_w_out_3));


wire ltl2c6_lut_match_4;
wire ltl2c6_w_match_4;

    
    
    

LUT_Match_ltl2c6_4 #(8) lut_match_ltl2c6_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_4));


assign ltl2c6_w_match_4 = ltl2c6_lut_match_4 ;

STE #(.fan_in(4)) ltl2c6_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c6_w_out_9, ltl2c6_w_out_2, ltl2c6_w_out_4, ltl2c6_w_out_7 }),
                .match(ltl2c6_w_match_4) ,
                .active_state(ltl2c6_w_out_4));


wire ltl2c6_w_out_5;
wire ltl2c6_lut_match_5;
wire ltl2c6_w_match_5;

    
    
    

LUT_Match_ltl2c6_5 #(8) lut_match_ltl2c6_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_5));


assign ltl2c6_w_match_5 = ltl2c6_lut_match_5 ;

STE #(.fan_in(2)) ltl2c6_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c6_w_out_3, ltl2c6_w_out_5 }),
                .match(ltl2c6_w_match_5) ,
                .active_state(ltl2c6_w_out_5));


wire ltl2c6_w_out_6;
wire ltl2c6_lut_match_6;
wire ltl2c6_w_match_6;

    
    
    

LUT_Match_ltl2c6_6 #(8) lut_match_ltl2c6_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_6));


assign ltl2c6_w_match_6 = ltl2c6_lut_match_6 ;

STE #(.fan_in(2)) ltl2c6_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c6_w_out_3, ltl2c6_w_out_5 }),
                .match(ltl2c6_w_match_6) ,
                .active_state(ltl2c6_w_out_6));


wire ltl2c6_lut_match_7;
wire ltl2c6_w_match_7;

    
    
    

LUT_Match_ltl2c6_7 #(8) lut_match_ltl2c6_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_7));


assign ltl2c6_w_match_7 = ltl2c6_lut_match_7 ;

STE #(.fan_in(2)) ltl2c6_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c6_w_out_3, ltl2c6_w_out_5 }),
                .match(ltl2c6_w_match_7) ,
                .active_state(ltl2c6_w_out_7));


wire ltl2c6_w_out_8;
wire ltl2c6_lut_match_8;
wire ltl2c6_w_match_8;

    
    
    

LUT_Match_ltl2c6_8 #(8) lut_match_ltl2c6_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_8));


assign ltl2c6_w_match_8 = ltl2c6_lut_match_8 ;

STE #(.fan_in(2)) ltl2c6_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c6_w_out_8, ltl2c6_w_out_6 }),
                .match(ltl2c6_w_match_8) ,
                .active_state(ltl2c6_w_out_8));


wire ltl2c6_lut_match_9;
wire ltl2c6_w_match_9;

    
    
    

LUT_Match_ltl2c6_9 #(8) lut_match_ltl2c6_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c6_lut_match_9));


assign ltl2c6_w_match_9 = ltl2c6_lut_match_9 ;

STE #(.fan_in(2)) ltl2c6_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c6_w_out_8, ltl2c6_w_out_6 }),
                .match(ltl2c6_w_match_9) ,
                .active_state(ltl2c6_w_out_9));




endmodule


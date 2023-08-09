




/*
******************** Summary ********************
report for ltl5c3
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
average number of intervals per STE = 7.66666666667
#######################################################
*/

 



module LUT_Match_ltl5c3_1 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd135) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd151) && 1'b1) ||
     ((input_capture[7:0] >= 8'd192) &&(input_capture[7:0] <= 8'd199) && 1'b1) ||
     ((input_capture[7:0] >= 8'd208) &&(input_capture[7:0] <= 8'd215) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c3_2 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd136) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd152) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd168) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
     ((input_capture[7:0] >= 8'd184) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
     ((input_capture[7:0] >= 8'd200) &&(input_capture[7:0] <= 8'd207) && 1'b1) ||
     ((input_capture[7:0] >= 8'd216) &&(input_capture[7:0] <= 8'd223) && 1'b1) ||
     ((input_capture[7:0] >= 8'd232) &&(input_capture[7:0] <= 8'd239) && 1'b1) ||
     ((input_capture[7:0] >= 8'd248) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c3_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd55) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd119) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd167) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd183) && 1'b1) ||
     ((input_capture[7:0] >= 8'd224) &&(input_capture[7:0] <= 8'd231) && 1'b1) ||
     ((input_capture[7:0] >= 8'd240) &&(input_capture[7:0] <= 8'd247) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c3_4 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl5c3_5 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd135) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd151) && 1'b1) ||
     ((input_capture[7:0] >= 8'd192) &&(input_capture[7:0] <= 8'd199) && 1'b1) ||
     ((input_capture[7:0] >= 8'd208) &&(input_capture[7:0] <= 8'd215) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c3_6 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd136) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd152) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd200) &&(input_capture[7:0] <= 8'd207) && 1'b1) ||
     ((input_capture[7:0] >= 8'd216) &&(input_capture[7:0] <= 8'd223) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c3_7 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
     ((input_capture[7:0] >= 8'd224) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c3_8 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd135) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd151) && 1'b1) ||
     ((input_capture[7:0] >= 8'd192) &&(input_capture[7:0] <= 8'd199) && 1'b1) ||
     ((input_capture[7:0] >= 8'd208) &&(input_capture[7:0] <= 8'd215) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c3_9 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
     ((input_capture[7:0] >= 8'd136) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd152) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
     ((input_capture[7:0] >= 8'd200) &&(input_capture[7:0] <= 8'd207) && 1'b1) ||
     ((input_capture[7:0] >= 8'd216) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl5c3(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl5c3_w_out_2
           , output ltl5c3_w_out_4
           , output ltl5c3_w_out_7
           , output ltl5c3_w_out_9);

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


wire ltl5c3_w_out_1;
wire ltl5c3_lut_match_1;
wire ltl5c3_w_match_1;

    
    
    

LUT_Match_ltl5c3_1 #(8) lut_match_ltl5c3_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_1));


assign ltl5c3_w_match_1 = ltl5c3_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl5c3_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl5c3_w_out_1 }),
                .match(ltl5c3_w_match_1) ,
                .active_state(ltl5c3_w_out_1));


wire ltl5c3_lut_match_2;
wire ltl5c3_w_match_2;

    
    
    

LUT_Match_ltl5c3_2 #(8) lut_match_ltl5c3_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_2));


assign ltl5c3_w_match_2 = ltl5c3_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl5c3_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl5c3_w_out_1 }),
                .match(ltl5c3_w_match_2) ,
                .active_state(ltl5c3_w_out_2));


wire ltl5c3_w_out_3;
wire ltl5c3_lut_match_3;
wire ltl5c3_w_match_3;

    
    
    

LUT_Match_ltl5c3_3 #(8) lut_match_ltl5c3_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_3));


assign ltl5c3_w_match_3 = ltl5c3_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl5c3_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl5c3_w_out_1 }),
                .match(ltl5c3_w_match_3) ,
                .active_state(ltl5c3_w_out_3));


wire ltl5c3_lut_match_4;
wire ltl5c3_w_match_4;

    
    
    

LUT_Match_ltl5c3_4 #(8) lut_match_ltl5c3_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_4));


assign ltl5c3_w_match_4 = ltl5c3_lut_match_4 ;

STE #(.fan_in(4)) ltl5c3_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c3_w_out_9, ltl5c3_w_out_2, ltl5c3_w_out_4, ltl5c3_w_out_7 }),
                .match(ltl5c3_w_match_4) ,
                .active_state(ltl5c3_w_out_4));


wire ltl5c3_w_out_5;
wire ltl5c3_lut_match_5;
wire ltl5c3_w_match_5;

    
    
    

LUT_Match_ltl5c3_5 #(8) lut_match_ltl5c3_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_5));


assign ltl5c3_w_match_5 = ltl5c3_lut_match_5 ;

STE #(.fan_in(2)) ltl5c3_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c3_w_out_3, ltl5c3_w_out_5 }),
                .match(ltl5c3_w_match_5) ,
                .active_state(ltl5c3_w_out_5));


wire ltl5c3_w_out_6;
wire ltl5c3_lut_match_6;
wire ltl5c3_w_match_6;

    
    
    

LUT_Match_ltl5c3_6 #(8) lut_match_ltl5c3_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_6));


assign ltl5c3_w_match_6 = ltl5c3_lut_match_6 ;

STE #(.fan_in(2)) ltl5c3_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c3_w_out_3, ltl5c3_w_out_5 }),
                .match(ltl5c3_w_match_6) ,
                .active_state(ltl5c3_w_out_6));


wire ltl5c3_lut_match_7;
wire ltl5c3_w_match_7;

    
    
    

LUT_Match_ltl5c3_7 #(8) lut_match_ltl5c3_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_7));


assign ltl5c3_w_match_7 = ltl5c3_lut_match_7 ;

STE #(.fan_in(2)) ltl5c3_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c3_w_out_3, ltl5c3_w_out_5 }),
                .match(ltl5c3_w_match_7) ,
                .active_state(ltl5c3_w_out_7));


wire ltl5c3_w_out_8;
wire ltl5c3_lut_match_8;
wire ltl5c3_w_match_8;

    
    
    

LUT_Match_ltl5c3_8 #(8) lut_match_ltl5c3_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_8));


assign ltl5c3_w_match_8 = ltl5c3_lut_match_8 ;

STE #(.fan_in(2)) ltl5c3_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c3_w_out_8, ltl5c3_w_out_6 }),
                .match(ltl5c3_w_match_8) ,
                .active_state(ltl5c3_w_out_8));


wire ltl5c3_lut_match_9;
wire ltl5c3_w_match_9;

    
    
    

LUT_Match_ltl5c3_9 #(8) lut_match_ltl5c3_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c3_lut_match_9));


assign ltl5c3_w_match_9 = ltl5c3_lut_match_9 ;

STE #(.fan_in(2)) ltl5c3_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c3_w_out_8, ltl5c3_w_out_6 }),
                .match(ltl5c3_w_match_9) ,
                .active_state(ltl5c3_w_out_9));




endmodule


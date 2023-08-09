




/*
******************** Summary ********************
report for ltl2c1
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

 



module LUT_Match_ltl2c1_1 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd3) && 1'b1) ||
     ((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd11) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd35) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd43) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd67) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd75) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd99) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd107) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c1_2 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd4) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd12) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd20) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd28) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd36) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd44) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd52) &&(input_capture[7:0] <= 8'd55) && 1'b1) ||
     ((input_capture[7:0] >= 8'd60) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd68) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd76) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd84) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd92) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd100) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
     ((input_capture[7:0] >= 8'd108) &&(input_capture[7:0] <= 8'd111) && 1'b1) ||
     ((input_capture[7:0] >= 8'd116) &&(input_capture[7:0] <= 8'd119) && 1'b1) ||
     ((input_capture[7:0] >= 8'd124) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c1_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd19) && 1'b1) ||
     ((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd27) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd51) && 1'b1) ||
     ((input_capture[7:0] >= 8'd56) &&(input_capture[7:0] <= 8'd59) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd83) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd91) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd115) && 1'b1) ||
     ((input_capture[7:0] >= 8'd120) &&(input_capture[7:0] <= 8'd123) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c1_4 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl2c1_5 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd3) && 1'b1) ||
     ((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd11) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd35) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd43) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd67) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd75) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd99) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd107) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c1_6 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd4) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd12) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd36) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd44) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd68) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd76) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd100) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
     ((input_capture[7:0] >= 8'd108) &&(input_capture[7:0] <= 8'd111) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c1_7 #(parameter integer width = 8)(
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
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c1_8 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd3) && 1'b1) ||
     ((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd11) && 1'b1) ||
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd35) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd43) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd67) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd75) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd99) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd107) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl2c1_9 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd4) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd12) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd36) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd44) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd68) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd76) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd100) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
     ((input_capture[7:0] >= 8'd108) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl2c1(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl2c1_w_out_2
           , output ltl2c1_w_out_4
           , output ltl2c1_w_out_7
           , output ltl2c1_w_out_9);

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


wire ltl2c1_w_out_1;
wire ltl2c1_lut_match_1;
wire ltl2c1_w_match_1;

    
    
    

LUT_Match_ltl2c1_1 #(8) lut_match_ltl2c1_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_1));


assign ltl2c1_w_match_1 = ltl2c1_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl2c1_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl2c1_w_out_1 }),
                .match(ltl2c1_w_match_1) ,
                .active_state(ltl2c1_w_out_1));


wire ltl2c1_lut_match_2;
wire ltl2c1_w_match_2;

    
    
    

LUT_Match_ltl2c1_2 #(8) lut_match_ltl2c1_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_2));


assign ltl2c1_w_match_2 = ltl2c1_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl2c1_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl2c1_w_out_1 }),
                .match(ltl2c1_w_match_2) ,
                .active_state(ltl2c1_w_out_2));


wire ltl2c1_w_out_3;
wire ltl2c1_lut_match_3;
wire ltl2c1_w_match_3;

    
    
    

LUT_Match_ltl2c1_3 #(8) lut_match_ltl2c1_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_3));


assign ltl2c1_w_match_3 = ltl2c1_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl2c1_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl2c1_w_out_1 }),
                .match(ltl2c1_w_match_3) ,
                .active_state(ltl2c1_w_out_3));


wire ltl2c1_lut_match_4;
wire ltl2c1_w_match_4;

    
    
    

LUT_Match_ltl2c1_4 #(8) lut_match_ltl2c1_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_4));


assign ltl2c1_w_match_4 = ltl2c1_lut_match_4 ;

STE #(.fan_in(4)) ltl2c1_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c1_w_out_9, ltl2c1_w_out_2, ltl2c1_w_out_4, ltl2c1_w_out_7 }),
                .match(ltl2c1_w_match_4) ,
                .active_state(ltl2c1_w_out_4));


wire ltl2c1_w_out_5;
wire ltl2c1_lut_match_5;
wire ltl2c1_w_match_5;

    
    
    

LUT_Match_ltl2c1_5 #(8) lut_match_ltl2c1_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_5));


assign ltl2c1_w_match_5 = ltl2c1_lut_match_5 ;

STE #(.fan_in(2)) ltl2c1_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c1_w_out_3, ltl2c1_w_out_5 }),
                .match(ltl2c1_w_match_5) ,
                .active_state(ltl2c1_w_out_5));


wire ltl2c1_w_out_6;
wire ltl2c1_lut_match_6;
wire ltl2c1_w_match_6;

    
    
    

LUT_Match_ltl2c1_6 #(8) lut_match_ltl2c1_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_6));


assign ltl2c1_w_match_6 = ltl2c1_lut_match_6 ;

STE #(.fan_in(2)) ltl2c1_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c1_w_out_3, ltl2c1_w_out_5 }),
                .match(ltl2c1_w_match_6) ,
                .active_state(ltl2c1_w_out_6));


wire ltl2c1_lut_match_7;
wire ltl2c1_w_match_7;

    
    
    

LUT_Match_ltl2c1_7 #(8) lut_match_ltl2c1_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_7));


assign ltl2c1_w_match_7 = ltl2c1_lut_match_7 ;

STE #(.fan_in(2)) ltl2c1_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c1_w_out_3, ltl2c1_w_out_5 }),
                .match(ltl2c1_w_match_7) ,
                .active_state(ltl2c1_w_out_7));


wire ltl2c1_w_out_8;
wire ltl2c1_lut_match_8;
wire ltl2c1_w_match_8;

    
    
    

LUT_Match_ltl2c1_8 #(8) lut_match_ltl2c1_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_8));


assign ltl2c1_w_match_8 = ltl2c1_lut_match_8 ;

STE #(.fan_in(2)) ltl2c1_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c1_w_out_8, ltl2c1_w_out_6 }),
                .match(ltl2c1_w_match_8) ,
                .active_state(ltl2c1_w_out_8));


wire ltl2c1_lut_match_9;
wire ltl2c1_w_match_9;

    
    
    

LUT_Match_ltl2c1_9 #(8) lut_match_ltl2c1_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl2c1_lut_match_9));


assign ltl2c1_w_match_9 = ltl2c1_lut_match_9 ;

STE #(.fan_in(2)) ltl2c1_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl2c1_w_out_8, ltl2c1_w_out_6 }),
                .match(ltl2c1_w_match_9) ,
                .active_state(ltl2c1_w_out_9));




endmodule


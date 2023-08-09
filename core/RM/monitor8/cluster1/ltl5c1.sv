




/*
******************** Summary ********************
report for ltl5c1
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
average number of intervals per STE = 14.5555555556
#######################################################
*/

 



module LUT_Match_ltl5c1_1 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd1) && 1'b1) ||
     ((input_capture[7:0] >= 8'd4) &&(input_capture[7:0] <= 8'd5) && 1'b1) ||
     ((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd9) && 1'b1) ||
     ((input_capture[7:0] >= 8'd12) &&(input_capture[7:0] <= 8'd13) && 1'b1) ||
     ((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd17) && 1'b1) ||
     ((input_capture[7:0] >= 8'd20) &&(input_capture[7:0] <= 8'd21) && 1'b1) ||
     ((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd25) && 1'b1) ||
     ((input_capture[7:0] >= 8'd28) &&(input_capture[7:0] <= 8'd29) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd65) && 1'b1) ||
     ((input_capture[7:0] >= 8'd68) &&(input_capture[7:0] <= 8'd69) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd73) && 1'b1) ||
     ((input_capture[7:0] >= 8'd76) &&(input_capture[7:0] <= 8'd77) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd81) && 1'b1) ||
     ((input_capture[7:0] >= 8'd84) &&(input_capture[7:0] <= 8'd85) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd89) && 1'b1) ||
     ((input_capture[7:0] >= 8'd92) &&(input_capture[7:0] <= 8'd93) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c1_2 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd2) &&(input_capture[7:0] <= 8'd3) && 1'b1) ||
     ((input_capture[7:0] >= 8'd6) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd10) &&(input_capture[7:0] <= 8'd11) && 1'b1) ||
     ((input_capture[7:0] >= 8'd14) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd18) &&(input_capture[7:0] <= 8'd19) && 1'b1) ||
     ((input_capture[7:0] >= 8'd22) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd26) &&(input_capture[7:0] <= 8'd27) && 1'b1) ||
     ((input_capture[7:0] >= 8'd30) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd66) &&(input_capture[7:0] <= 8'd67) && 1'b1) ||
     ((input_capture[7:0] >= 8'd70) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd74) &&(input_capture[7:0] <= 8'd75) && 1'b1) ||
     ((input_capture[7:0] >= 8'd78) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd82) &&(input_capture[7:0] <= 8'd83) && 1'b1) ||
     ((input_capture[7:0] >= 8'd86) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd90) &&(input_capture[7:0] <= 8'd91) && 1'b1) ||
     ((input_capture[7:0] >= 8'd94) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c1_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c1_4 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd1) && 1'b1) ||
     ((input_capture[7:0] >= 8'd4) &&(input_capture[7:0] <= 8'd5) && 1'b1) ||
     ((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd9) && 1'b1) ||
     ((input_capture[7:0] >= 8'd12) &&(input_capture[7:0] <= 8'd13) && 1'b1) ||
     ((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd17) && 1'b1) ||
     ((input_capture[7:0] >= 8'd20) &&(input_capture[7:0] <= 8'd21) && 1'b1) ||
     ((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd25) && 1'b1) ||
     ((input_capture[7:0] >= 8'd28) &&(input_capture[7:0] <= 8'd29) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd65) && 1'b1) ||
     ((input_capture[7:0] >= 8'd68) &&(input_capture[7:0] <= 8'd69) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd73) && 1'b1) ||
     ((input_capture[7:0] >= 8'd76) &&(input_capture[7:0] <= 8'd77) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd81) && 1'b1) ||
     ((input_capture[7:0] >= 8'd84) &&(input_capture[7:0] <= 8'd85) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd89) && 1'b1) ||
     ((input_capture[7:0] >= 8'd92) &&(input_capture[7:0] <= 8'd93) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c1_5 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd2) &&(input_capture[7:0] <= 8'd3) && 1'b1) ||
     ((input_capture[7:0] >= 8'd6) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd10) &&(input_capture[7:0] <= 8'd11) && 1'b1) ||
     ((input_capture[7:0] >= 8'd14) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd18) &&(input_capture[7:0] <= 8'd19) && 1'b1) ||
     ((input_capture[7:0] >= 8'd22) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd26) &&(input_capture[7:0] <= 8'd27) && 1'b1) ||
     ((input_capture[7:0] >= 8'd30) &&(input_capture[7:0] <= 8'd31) && 1'b1) ||
     ((input_capture[7:0] >= 8'd34) &&(input_capture[7:0] <= 8'd35) && 1'b1) ||
     ((input_capture[7:0] >= 8'd38) &&(input_capture[7:0] <= 8'd39) && 1'b1) ||
     ((input_capture[7:0] >= 8'd42) &&(input_capture[7:0] <= 8'd43) && 1'b1) ||
     ((input_capture[7:0] >= 8'd46) &&(input_capture[7:0] <= 8'd47) && 1'b1) ||
     ((input_capture[7:0] >= 8'd50) &&(input_capture[7:0] <= 8'd51) && 1'b1) ||
     ((input_capture[7:0] >= 8'd54) &&(input_capture[7:0] <= 8'd55) && 1'b1) ||
     ((input_capture[7:0] >= 8'd58) &&(input_capture[7:0] <= 8'd59) && 1'b1) ||
     ((input_capture[7:0] >= 8'd62) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd66) &&(input_capture[7:0] <= 8'd67) && 1'b1) ||
     ((input_capture[7:0] >= 8'd70) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd74) &&(input_capture[7:0] <= 8'd75) && 1'b1) ||
     ((input_capture[7:0] >= 8'd78) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd82) &&(input_capture[7:0] <= 8'd83) && 1'b1) ||
     ((input_capture[7:0] >= 8'd86) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd90) &&(input_capture[7:0] <= 8'd91) && 1'b1) ||
     ((input_capture[7:0] >= 8'd94) &&(input_capture[7:0] <= 8'd95) && 1'b1) ||
     ((input_capture[7:0] >= 8'd98) &&(input_capture[7:0] <= 8'd99) && 1'b1) ||
     ((input_capture[7:0] >= 8'd102) &&(input_capture[7:0] <= 8'd103) && 1'b1) ||
     ((input_capture[7:0] >= 8'd106) &&(input_capture[7:0] <= 8'd107) && 1'b1) ||
     ((input_capture[7:0] >= 8'd110) &&(input_capture[7:0] <= 8'd111) && 1'b1) ||
     ((input_capture[7:0] >= 8'd114) &&(input_capture[7:0] <= 8'd115) && 1'b1) ||
     ((input_capture[7:0] >= 8'd118) &&(input_capture[7:0] <= 8'd119) && 1'b1) ||
     ((input_capture[7:0] >= 8'd122) &&(input_capture[7:0] <= 8'd123) && 1'b1) ||
     ((input_capture[7:0] >= 8'd126) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c1_6 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd33) && 1'b1) ||
     ((input_capture[7:0] >= 8'd36) &&(input_capture[7:0] <= 8'd37) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd41) && 1'b1) ||
     ((input_capture[7:0] >= 8'd44) &&(input_capture[7:0] <= 8'd45) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd49) && 1'b1) ||
     ((input_capture[7:0] >= 8'd52) &&(input_capture[7:0] <= 8'd53) && 1'b1) ||
     ((input_capture[7:0] >= 8'd56) &&(input_capture[7:0] <= 8'd57) && 1'b1) ||
     ((input_capture[7:0] >= 8'd60) &&(input_capture[7:0] <= 8'd61) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd97) && 1'b1) ||
     ((input_capture[7:0] >= 8'd100) &&(input_capture[7:0] <= 8'd101) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd105) && 1'b1) ||
     ((input_capture[7:0] >= 8'd108) &&(input_capture[7:0] <= 8'd109) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd113) && 1'b1) ||
     ((input_capture[7:0] >= 8'd116) &&(input_capture[7:0] <= 8'd117) && 1'b1) ||
     ((input_capture[7:0] >= 8'd120) &&(input_capture[7:0] <= 8'd121) && 1'b1) ||
     ((input_capture[7:0] >= 8'd124) &&(input_capture[7:0] <= 8'd125) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c1_7 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl5c1_8 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd1) && 1'b1) ||
     ((input_capture[7:0] >= 8'd4) &&(input_capture[7:0] <= 8'd5) && 1'b1) ||
     ((input_capture[7:0] >= 8'd8) &&(input_capture[7:0] <= 8'd9) && 1'b1) ||
     ((input_capture[7:0] >= 8'd12) &&(input_capture[7:0] <= 8'd13) && 1'b1) ||
     ((input_capture[7:0] >= 8'd16) &&(input_capture[7:0] <= 8'd17) && 1'b1) ||
     ((input_capture[7:0] >= 8'd20) &&(input_capture[7:0] <= 8'd21) && 1'b1) ||
     ((input_capture[7:0] >= 8'd24) &&(input_capture[7:0] <= 8'd25) && 1'b1) ||
     ((input_capture[7:0] >= 8'd28) &&(input_capture[7:0] <= 8'd29) && 1'b1) ||
     ((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd65) && 1'b1) ||
     ((input_capture[7:0] >= 8'd68) &&(input_capture[7:0] <= 8'd69) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd73) && 1'b1) ||
     ((input_capture[7:0] >= 8'd76) &&(input_capture[7:0] <= 8'd77) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd81) && 1'b1) ||
     ((input_capture[7:0] >= 8'd84) &&(input_capture[7:0] <= 8'd85) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd89) && 1'b1) ||
     ((input_capture[7:0] >= 8'd92) &&(input_capture[7:0] <= 8'd93) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl5c1_9 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd2) &&(input_capture[7:0] <= 8'd3) && 1'b1) ||
     ((input_capture[7:0] >= 8'd6) &&(input_capture[7:0] <= 8'd7) && 1'b1) ||
     ((input_capture[7:0] >= 8'd10) &&(input_capture[7:0] <= 8'd11) && 1'b1) ||
     ((input_capture[7:0] >= 8'd14) &&(input_capture[7:0] <= 8'd15) && 1'b1) ||
     ((input_capture[7:0] >= 8'd18) &&(input_capture[7:0] <= 8'd19) && 1'b1) ||
     ((input_capture[7:0] >= 8'd22) &&(input_capture[7:0] <= 8'd23) && 1'b1) ||
     ((input_capture[7:0] >= 8'd26) &&(input_capture[7:0] <= 8'd27) && 1'b1) ||
     ((input_capture[7:0] >= 8'd30) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd66) &&(input_capture[7:0] <= 8'd67) && 1'b1) ||
     ((input_capture[7:0] >= 8'd70) &&(input_capture[7:0] <= 8'd71) && 1'b1) ||
     ((input_capture[7:0] >= 8'd74) &&(input_capture[7:0] <= 8'd75) && 1'b1) ||
     ((input_capture[7:0] >= 8'd78) &&(input_capture[7:0] <= 8'd79) && 1'b1) ||
     ((input_capture[7:0] >= 8'd82) &&(input_capture[7:0] <= 8'd83) && 1'b1) ||
     ((input_capture[7:0] >= 8'd86) &&(input_capture[7:0] <= 8'd87) && 1'b1) ||
     ((input_capture[7:0] >= 8'd90) &&(input_capture[7:0] <= 8'd91) && 1'b1) ||
     ((input_capture[7:0] >= 8'd94) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl5c1(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl5c1_w_out_3
           , output ltl5c1_w_out_5
           , output ltl5c1_w_out_7
           , output ltl5c1_w_out_9);

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


wire ltl5c1_w_out_1;
wire ltl5c1_lut_match_1;
wire ltl5c1_w_match_1;

    
    
    

LUT_Match_ltl5c1_1 #(8) lut_match_ltl5c1_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_1));


assign ltl5c1_w_match_1 = ltl5c1_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl5c1_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl5c1_w_out_1 }),
                .match(ltl5c1_w_match_1) ,
                .active_state(ltl5c1_w_out_1));


wire ltl5c1_w_out_2;
wire ltl5c1_lut_match_2;
wire ltl5c1_w_match_2;

    
    
    

LUT_Match_ltl5c1_2 #(8) lut_match_ltl5c1_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_2));


assign ltl5c1_w_match_2 = ltl5c1_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl5c1_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl5c1_w_out_1 }),
                .match(ltl5c1_w_match_2) ,
                .active_state(ltl5c1_w_out_2));


wire ltl5c1_lut_match_3;
wire ltl5c1_w_match_3;

    
    
    

LUT_Match_ltl5c1_3 #(8) lut_match_ltl5c1_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_3));


assign ltl5c1_w_match_3 = ltl5c1_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl5c1_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl5c1_w_out_1 }),
                .match(ltl5c1_w_match_3) ,
                .active_state(ltl5c1_w_out_3));


wire ltl5c1_w_out_4;
wire ltl5c1_lut_match_4;
wire ltl5c1_w_match_4;

    
    
    

LUT_Match_ltl5c1_4 #(8) lut_match_ltl5c1_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_4));


assign ltl5c1_w_match_4 = ltl5c1_lut_match_4 ;

STE #(.fan_in(2)) ltl5c1_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c1_w_out_2, ltl5c1_w_out_4 }),
                .match(ltl5c1_w_match_4) ,
                .active_state(ltl5c1_w_out_4));


wire ltl5c1_lut_match_5;
wire ltl5c1_w_match_5;

    
    
    

LUT_Match_ltl5c1_5 #(8) lut_match_ltl5c1_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_5));


assign ltl5c1_w_match_5 = ltl5c1_lut_match_5 ;

STE #(.fan_in(2)) ltl5c1_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c1_w_out_2, ltl5c1_w_out_4 }),
                .match(ltl5c1_w_match_5) ,
                .active_state(ltl5c1_w_out_5));


wire ltl5c1_w_out_6;
wire ltl5c1_lut_match_6;
wire ltl5c1_w_match_6;

    
    
    

LUT_Match_ltl5c1_6 #(8) lut_match_ltl5c1_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_6));


assign ltl5c1_w_match_6 = ltl5c1_lut_match_6 ;

STE #(.fan_in(2)) ltl5c1_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c1_w_out_2, ltl5c1_w_out_4 }),
                .match(ltl5c1_w_match_6) ,
                .active_state(ltl5c1_w_out_6));


wire ltl5c1_lut_match_7;
wire ltl5c1_w_match_7;

    
    
    

LUT_Match_ltl5c1_7 #(8) lut_match_ltl5c1_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_7));


assign ltl5c1_w_match_7 = ltl5c1_lut_match_7 ;

STE #(.fan_in(4)) ltl5c1_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c1_w_out_9, ltl5c1_w_out_3, ltl5c1_w_out_5, ltl5c1_w_out_7 }),
                .match(ltl5c1_w_match_7) ,
                .active_state(ltl5c1_w_out_7));


wire ltl5c1_w_out_8;
wire ltl5c1_lut_match_8;
wire ltl5c1_w_match_8;

    
    
    

LUT_Match_ltl5c1_8 #(8) lut_match_ltl5c1_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_8));


assign ltl5c1_w_match_8 = ltl5c1_lut_match_8 ;

STE #(.fan_in(2)) ltl5c1_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c1_w_out_8, ltl5c1_w_out_6 }),
                .match(ltl5c1_w_match_8) ,
                .active_state(ltl5c1_w_out_8));


wire ltl5c1_lut_match_9;
wire ltl5c1_w_match_9;

    
    
    

LUT_Match_ltl5c1_9 #(8) lut_match_ltl5c1_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl5c1_lut_match_9));


assign ltl5c1_w_match_9 = ltl5c1_lut_match_9 ;

STE #(.fan_in(2)) ltl5c1_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl5c1_w_out_8, ltl5c1_w_out_6 }),
                .match(ltl5c1_w_match_9) ,
                .active_state(ltl5c1_w_out_9));




endmodule


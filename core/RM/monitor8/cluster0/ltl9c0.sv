




/*
******************** Summary ********************
report for ltl9c0
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
average number of intervals per STE = 23.7272727273
#######################################################
*/

 



module LUT_Match_ltl9c0_1 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd33) && 1'b1) ||
     ((input_capture[7:0] >= 8'd36) &&(input_capture[7:0] <= 8'd37) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd41) && 1'b1) ||
     ((input_capture[7:0] >= 8'd44) &&(input_capture[7:0] <= 8'd45) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd49) && 1'b1) ||
     ((input_capture[7:0] >= 8'd52) &&(input_capture[7:0] <= 8'd53) && 1'b1) ||
     ((input_capture[7:0] >= 8'd56) &&(input_capture[7:0] <= 8'd57) && 1'b1) ||
     ((input_capture[7:0] >= 8'd60) &&(input_capture[7:0] <= 8'd61) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd129) && 1'b1) ||
     ((input_capture[7:0] >= 8'd132) &&(input_capture[7:0] <= 8'd133) && 1'b1) ||
     ((input_capture[7:0] >= 8'd136) &&(input_capture[7:0] <= 8'd137) && 1'b1) ||
     ((input_capture[7:0] >= 8'd140) &&(input_capture[7:0] <= 8'd141) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd145) && 1'b1) ||
     ((input_capture[7:0] >= 8'd148) &&(input_capture[7:0] <= 8'd149) && 1'b1) ||
     ((input_capture[7:0] >= 8'd152) &&(input_capture[7:0] <= 8'd153) && 1'b1) ||
     ((input_capture[7:0] >= 8'd156) &&(input_capture[7:0] <= 8'd157) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd161) && 1'b1) ||
     ((input_capture[7:0] >= 8'd164) &&(input_capture[7:0] <= 8'd165) && 1'b1) ||
     ((input_capture[7:0] >= 8'd168) &&(input_capture[7:0] <= 8'd169) && 1'b1) ||
     ((input_capture[7:0] >= 8'd172) &&(input_capture[7:0] <= 8'd173) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd177) && 1'b1) ||
     ((input_capture[7:0] >= 8'd180) &&(input_capture[7:0] <= 8'd181) && 1'b1) ||
     ((input_capture[7:0] >= 8'd184) &&(input_capture[7:0] <= 8'd185) && 1'b1) ||
     ((input_capture[7:0] >= 8'd188) &&(input_capture[7:0] <= 8'd189) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_2 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd130) &&(input_capture[7:0] <= 8'd131) && 1'b1) ||
     ((input_capture[7:0] >= 8'd134) &&(input_capture[7:0] <= 8'd135) && 1'b1) ||
     ((input_capture[7:0] >= 8'd138) &&(input_capture[7:0] <= 8'd139) && 1'b1) ||
     ((input_capture[7:0] >= 8'd142) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd146) &&(input_capture[7:0] <= 8'd147) && 1'b1) ||
     ((input_capture[7:0] >= 8'd150) &&(input_capture[7:0] <= 8'd151) && 1'b1) ||
     ((input_capture[7:0] >= 8'd154) &&(input_capture[7:0] <= 8'd155) && 1'b1) ||
     ((input_capture[7:0] >= 8'd158) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd162) &&(input_capture[7:0] <= 8'd163) && 1'b1) ||
     ((input_capture[7:0] >= 8'd166) &&(input_capture[7:0] <= 8'd167) && 1'b1) ||
     ((input_capture[7:0] >= 8'd170) &&(input_capture[7:0] <= 8'd171) && 1'b1) ||
     ((input_capture[7:0] >= 8'd174) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
     ((input_capture[7:0] >= 8'd178) &&(input_capture[7:0] <= 8'd179) && 1'b1) ||
     ((input_capture[7:0] >= 8'd182) &&(input_capture[7:0] <= 8'd183) && 1'b1) ||
     ((input_capture[7:0] >= 8'd186) &&(input_capture[7:0] <= 8'd187) && 1'b1) ||
     ((input_capture[7:0] >= 8'd190) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_3 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd64) &&(input_capture[7:0] <= 8'd65) && 1'b1) ||
     ((input_capture[7:0] >= 8'd68) &&(input_capture[7:0] <= 8'd69) && 1'b1) ||
     ((input_capture[7:0] >= 8'd72) &&(input_capture[7:0] <= 8'd73) && 1'b1) ||
     ((input_capture[7:0] >= 8'd76) &&(input_capture[7:0] <= 8'd77) && 1'b1) ||
     ((input_capture[7:0] >= 8'd80) &&(input_capture[7:0] <= 8'd81) && 1'b1) ||
     ((input_capture[7:0] >= 8'd84) &&(input_capture[7:0] <= 8'd85) && 1'b1) ||
     ((input_capture[7:0] >= 8'd88) &&(input_capture[7:0] <= 8'd89) && 1'b1) ||
     ((input_capture[7:0] >= 8'd92) &&(input_capture[7:0] <= 8'd93) && 1'b1) ||
     ((input_capture[7:0] >= 8'd96) &&(input_capture[7:0] <= 8'd97) && 1'b1) ||
     ((input_capture[7:0] >= 8'd100) &&(input_capture[7:0] <= 8'd101) && 1'b1) ||
     ((input_capture[7:0] >= 8'd104) &&(input_capture[7:0] <= 8'd105) && 1'b1) ||
     ((input_capture[7:0] >= 8'd108) &&(input_capture[7:0] <= 8'd109) && 1'b1) ||
     ((input_capture[7:0] >= 8'd112) &&(input_capture[7:0] <= 8'd113) && 1'b1) ||
     ((input_capture[7:0] >= 8'd116) &&(input_capture[7:0] <= 8'd117) && 1'b1) ||
     ((input_capture[7:0] >= 8'd120) &&(input_capture[7:0] <= 8'd121) && 1'b1) ||
     ((input_capture[7:0] >= 8'd124) &&(input_capture[7:0] <= 8'd125) && 1'b1) ||
     ((input_capture[7:0] >= 8'd192) &&(input_capture[7:0] <= 8'd193) && 1'b1) ||
     ((input_capture[7:0] >= 8'd196) &&(input_capture[7:0] <= 8'd197) && 1'b1) ||
     ((input_capture[7:0] >= 8'd200) &&(input_capture[7:0] <= 8'd201) && 1'b1) ||
     ((input_capture[7:0] >= 8'd204) &&(input_capture[7:0] <= 8'd205) && 1'b1) ||
     ((input_capture[7:0] >= 8'd208) &&(input_capture[7:0] <= 8'd209) && 1'b1) ||
     ((input_capture[7:0] >= 8'd212) &&(input_capture[7:0] <= 8'd213) && 1'b1) ||
     ((input_capture[7:0] >= 8'd216) &&(input_capture[7:0] <= 8'd217) && 1'b1) ||
     ((input_capture[7:0] >= 8'd220) &&(input_capture[7:0] <= 8'd221) && 1'b1) ||
     ((input_capture[7:0] >= 8'd224) &&(input_capture[7:0] <= 8'd225) && 1'b1) ||
     ((input_capture[7:0] >= 8'd228) &&(input_capture[7:0] <= 8'd229) && 1'b1) ||
     ((input_capture[7:0] >= 8'd232) &&(input_capture[7:0] <= 8'd233) && 1'b1) ||
     ((input_capture[7:0] >= 8'd236) &&(input_capture[7:0] <= 8'd237) && 1'b1) ||
     ((input_capture[7:0] >= 8'd240) &&(input_capture[7:0] <= 8'd241) && 1'b1) ||
     ((input_capture[7:0] >= 8'd244) &&(input_capture[7:0] <= 8'd245) && 1'b1) ||
     ((input_capture[7:0] >= 8'd248) &&(input_capture[7:0] <= 8'd249) && 1'b1) ||
     ((input_capture[7:0] >= 8'd252) &&(input_capture[7:0] <= 8'd253) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_4 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd66) &&(input_capture[7:0] <= 8'd67) && 1'b1) ||
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
     ((input_capture[7:0] >= 8'd194) &&(input_capture[7:0] <= 8'd195) && 1'b1) ||
     ((input_capture[7:0] >= 8'd198) &&(input_capture[7:0] <= 8'd199) && 1'b1) ||
     ((input_capture[7:0] >= 8'd202) &&(input_capture[7:0] <= 8'd203) && 1'b1) ||
     ((input_capture[7:0] >= 8'd206) &&(input_capture[7:0] <= 8'd207) && 1'b1) ||
     ((input_capture[7:0] >= 8'd210) &&(input_capture[7:0] <= 8'd211) && 1'b1) ||
     ((input_capture[7:0] >= 8'd214) &&(input_capture[7:0] <= 8'd215) && 1'b1) ||
     ((input_capture[7:0] >= 8'd218) &&(input_capture[7:0] <= 8'd219) && 1'b1) ||
     ((input_capture[7:0] >= 8'd222) &&(input_capture[7:0] <= 8'd223) && 1'b1) ||
     ((input_capture[7:0] >= 8'd226) &&(input_capture[7:0] <= 8'd227) && 1'b1) ||
     ((input_capture[7:0] >= 8'd230) &&(input_capture[7:0] <= 8'd231) && 1'b1) ||
     ((input_capture[7:0] >= 8'd234) &&(input_capture[7:0] <= 8'd235) && 1'b1) ||
     ((input_capture[7:0] >= 8'd238) &&(input_capture[7:0] <= 8'd239) && 1'b1) ||
     ((input_capture[7:0] >= 8'd242) &&(input_capture[7:0] <= 8'd243) && 1'b1) ||
     ((input_capture[7:0] >= 8'd246) &&(input_capture[7:0] <= 8'd247) && 1'b1) ||
     ((input_capture[7:0] >= 8'd250) &&(input_capture[7:0] <= 8'd251) && 1'b1) ||
     ((input_capture[7:0] >= 8'd254) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_5 #(parameter integer width = 8)(
        input clk,
        input [width-1:0] symbols,
        output match);

wire match_internal;
wire [width-1:0] input_capture;
assign input_capture = symbols;
assign match = match_internal;

assign match_internal = (((input_capture[7:0] >= 8'd0) &&(input_capture[7:0] <= 8'd63) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_6 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl9c0_7 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd33) && 1'b1) ||
     ((input_capture[7:0] >= 8'd36) &&(input_capture[7:0] <= 8'd37) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd41) && 1'b1) ||
     ((input_capture[7:0] >= 8'd44) &&(input_capture[7:0] <= 8'd45) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd49) && 1'b1) ||
     ((input_capture[7:0] >= 8'd52) &&(input_capture[7:0] <= 8'd53) && 1'b1) ||
     ((input_capture[7:0] >= 8'd56) &&(input_capture[7:0] <= 8'd57) && 1'b1) ||
     ((input_capture[7:0] >= 8'd60) &&(input_capture[7:0] <= 8'd61) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd129) && 1'b1) ||
     ((input_capture[7:0] >= 8'd132) &&(input_capture[7:0] <= 8'd133) && 1'b1) ||
     ((input_capture[7:0] >= 8'd136) &&(input_capture[7:0] <= 8'd137) && 1'b1) ||
     ((input_capture[7:0] >= 8'd140) &&(input_capture[7:0] <= 8'd141) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd145) && 1'b1) ||
     ((input_capture[7:0] >= 8'd148) &&(input_capture[7:0] <= 8'd149) && 1'b1) ||
     ((input_capture[7:0] >= 8'd152) &&(input_capture[7:0] <= 8'd153) && 1'b1) ||
     ((input_capture[7:0] >= 8'd156) &&(input_capture[7:0] <= 8'd157) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd161) && 1'b1) ||
     ((input_capture[7:0] >= 8'd164) &&(input_capture[7:0] <= 8'd165) && 1'b1) ||
     ((input_capture[7:0] >= 8'd168) &&(input_capture[7:0] <= 8'd169) && 1'b1) ||
     ((input_capture[7:0] >= 8'd172) &&(input_capture[7:0] <= 8'd173) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd177) && 1'b1) ||
     ((input_capture[7:0] >= 8'd180) &&(input_capture[7:0] <= 8'd181) && 1'b1) ||
     ((input_capture[7:0] >= 8'd184) &&(input_capture[7:0] <= 8'd185) && 1'b1) ||
     ((input_capture[7:0] >= 8'd188) &&(input_capture[7:0] <= 8'd189) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_8 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd130) &&(input_capture[7:0] <= 8'd131) && 1'b1) ||
     ((input_capture[7:0] >= 8'd134) &&(input_capture[7:0] <= 8'd135) && 1'b1) ||
     ((input_capture[7:0] >= 8'd138) &&(input_capture[7:0] <= 8'd139) && 1'b1) ||
     ((input_capture[7:0] >= 8'd142) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd146) &&(input_capture[7:0] <= 8'd147) && 1'b1) ||
     ((input_capture[7:0] >= 8'd150) &&(input_capture[7:0] <= 8'd151) && 1'b1) ||
     ((input_capture[7:0] >= 8'd154) &&(input_capture[7:0] <= 8'd155) && 1'b1) ||
     ((input_capture[7:0] >= 8'd158) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd162) &&(input_capture[7:0] <= 8'd163) && 1'b1) ||
     ((input_capture[7:0] >= 8'd166) &&(input_capture[7:0] <= 8'd167) && 1'b1) ||
     ((input_capture[7:0] >= 8'd170) &&(input_capture[7:0] <= 8'd171) && 1'b1) ||
     ((input_capture[7:0] >= 8'd174) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
     ((input_capture[7:0] >= 8'd178) &&(input_capture[7:0] <= 8'd179) && 1'b1) ||
     ((input_capture[7:0] >= 8'd182) &&(input_capture[7:0] <= 8'd183) && 1'b1) ||
     ((input_capture[7:0] >= 8'd186) &&(input_capture[7:0] <= 8'd187) && 1'b1) ||
     ((input_capture[7:0] >= 8'd190) &&(input_capture[7:0] <= 8'd191) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_9 #(parameter integer width = 8)(
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

 



module LUT_Match_ltl9c0_10 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd32) &&(input_capture[7:0] <= 8'd33) && 1'b1) ||
     ((input_capture[7:0] >= 8'd36) &&(input_capture[7:0] <= 8'd37) && 1'b1) ||
     ((input_capture[7:0] >= 8'd40) &&(input_capture[7:0] <= 8'd41) && 1'b1) ||
     ((input_capture[7:0] >= 8'd44) &&(input_capture[7:0] <= 8'd45) && 1'b1) ||
     ((input_capture[7:0] >= 8'd48) &&(input_capture[7:0] <= 8'd49) && 1'b1) ||
     ((input_capture[7:0] >= 8'd52) &&(input_capture[7:0] <= 8'd53) && 1'b1) ||
     ((input_capture[7:0] >= 8'd56) &&(input_capture[7:0] <= 8'd57) && 1'b1) ||
     ((input_capture[7:0] >= 8'd60) &&(input_capture[7:0] <= 8'd61) && 1'b1) ||
     ((input_capture[7:0] >= 8'd128) &&(input_capture[7:0] <= 8'd129) && 1'b1) ||
     ((input_capture[7:0] >= 8'd132) &&(input_capture[7:0] <= 8'd133) && 1'b1) ||
     ((input_capture[7:0] >= 8'd136) &&(input_capture[7:0] <= 8'd137) && 1'b1) ||
     ((input_capture[7:0] >= 8'd140) &&(input_capture[7:0] <= 8'd141) && 1'b1) ||
     ((input_capture[7:0] >= 8'd144) &&(input_capture[7:0] <= 8'd145) && 1'b1) ||
     ((input_capture[7:0] >= 8'd148) &&(input_capture[7:0] <= 8'd149) && 1'b1) ||
     ((input_capture[7:0] >= 8'd152) &&(input_capture[7:0] <= 8'd153) && 1'b1) ||
     ((input_capture[7:0] >= 8'd156) &&(input_capture[7:0] <= 8'd157) && 1'b1) ||
     ((input_capture[7:0] >= 8'd160) &&(input_capture[7:0] <= 8'd161) && 1'b1) ||
     ((input_capture[7:0] >= 8'd164) &&(input_capture[7:0] <= 8'd165) && 1'b1) ||
     ((input_capture[7:0] >= 8'd168) &&(input_capture[7:0] <= 8'd169) && 1'b1) ||
     ((input_capture[7:0] >= 8'd172) &&(input_capture[7:0] <= 8'd173) && 1'b1) ||
     ((input_capture[7:0] >= 8'd176) &&(input_capture[7:0] <= 8'd177) && 1'b1) ||
     ((input_capture[7:0] >= 8'd180) &&(input_capture[7:0] <= 8'd181) && 1'b1) ||
     ((input_capture[7:0] >= 8'd184) &&(input_capture[7:0] <= 8'd185) && 1'b1) ||
     ((input_capture[7:0] >= 8'd188) &&(input_capture[7:0] <= 8'd189) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule

 



module LUT_Match_ltl9c0_11 #(parameter integer width = 8)(
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
     ((input_capture[7:0] >= 8'd62) &&(input_capture[7:0] <= 8'd127) && 1'b1) ||
     ((input_capture[7:0] >= 8'd130) &&(input_capture[7:0] <= 8'd131) && 1'b1) ||
     ((input_capture[7:0] >= 8'd134) &&(input_capture[7:0] <= 8'd135) && 1'b1) ||
     ((input_capture[7:0] >= 8'd138) &&(input_capture[7:0] <= 8'd139) && 1'b1) ||
     ((input_capture[7:0] >= 8'd142) &&(input_capture[7:0] <= 8'd143) && 1'b1) ||
     ((input_capture[7:0] >= 8'd146) &&(input_capture[7:0] <= 8'd147) && 1'b1) ||
     ((input_capture[7:0] >= 8'd150) &&(input_capture[7:0] <= 8'd151) && 1'b1) ||
     ((input_capture[7:0] >= 8'd154) &&(input_capture[7:0] <= 8'd155) && 1'b1) ||
     ((input_capture[7:0] >= 8'd158) &&(input_capture[7:0] <= 8'd159) && 1'b1) ||
     ((input_capture[7:0] >= 8'd162) &&(input_capture[7:0] <= 8'd163) && 1'b1) ||
     ((input_capture[7:0] >= 8'd166) &&(input_capture[7:0] <= 8'd167) && 1'b1) ||
     ((input_capture[7:0] >= 8'd170) &&(input_capture[7:0] <= 8'd171) && 1'b1) ||
     ((input_capture[7:0] >= 8'd174) &&(input_capture[7:0] <= 8'd175) && 1'b1) ||
     ((input_capture[7:0] >= 8'd178) &&(input_capture[7:0] <= 8'd179) && 1'b1) ||
     ((input_capture[7:0] >= 8'd182) &&(input_capture[7:0] <= 8'd183) && 1'b1) ||
     ((input_capture[7:0] >= 8'd186) &&(input_capture[7:0] <= 8'd187) && 1'b1) ||
     ((input_capture[7:0] >= 8'd190) &&(input_capture[7:0] <= 8'd255) && 1'b1) ||
      1'b0) ? 1'b1 : 1'b0;


endmodule



module Automata_ltl9c0(input clk,
           input run,
           input reset,
           input [7 : 0] symbols
           
           , output ltl9c0_w_out_4
           , output ltl9c0_w_out_6
           , output ltl9c0_w_out_9
           , output ltl9c0_w_out_11);

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


wire ltl9c0_w_out_1;
wire ltl9c0_lut_match_1;
wire ltl9c0_w_match_1;

    
    
    

LUT_Match_ltl9c0_1 #(8) lut_match_ltl9c0_1(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_1));


assign ltl9c0_w_match_1 = ltl9c0_lut_match_1 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl9c0_ste_1 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl9c0_w_out_1 }),
                .match(ltl9c0_w_match_1) ,
                .active_state(ltl9c0_w_out_1));


wire ltl9c0_w_out_2;
wire ltl9c0_lut_match_2;
wire ltl9c0_w_match_2;

    
    
    

LUT_Match_ltl9c0_2 #(8) lut_match_ltl9c0_2(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_2));


assign ltl9c0_w_match_2 = ltl9c0_lut_match_2 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl9c0_ste_2 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl9c0_w_out_1 }),
                .match(ltl9c0_w_match_2) ,
                .active_state(ltl9c0_w_out_2));


wire ltl9c0_w_out_3;
wire ltl9c0_lut_match_3;
wire ltl9c0_w_match_3;

    
    
    

LUT_Match_ltl9c0_3 #(8) lut_match_ltl9c0_3(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_3));


assign ltl9c0_w_match_3 = ltl9c0_lut_match_3 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl9c0_ste_3 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl9c0_w_out_1 }),
                .match(ltl9c0_w_match_3) ,
                .active_state(ltl9c0_w_out_3));


wire ltl9c0_lut_match_4;
wire ltl9c0_w_match_4;

    
    
    

LUT_Match_ltl9c0_4 #(8) lut_match_ltl9c0_4(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_4));


assign ltl9c0_w_match_4 = ltl9c0_lut_match_4 ;

STE #(.fan_in(2),.START_TYPE(1)) ltl9c0_ste_4 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ start_of_data, ltl9c0_w_out_1 }),
                .match(ltl9c0_w_match_4) ,
                .active_state(ltl9c0_w_out_4));


wire ltl9c0_w_out_5;
wire ltl9c0_lut_match_5;
wire ltl9c0_w_match_5;

    
    
    

LUT_Match_ltl9c0_5 #(8) lut_match_ltl9c0_5(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_5));


assign ltl9c0_w_match_5 = ltl9c0_lut_match_5 ;

STE #(.fan_in(2)) ltl9c0_ste_5 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl9c0_w_out_2, ltl9c0_w_out_5 }),
                .match(ltl9c0_w_match_5) ,
                .active_state(ltl9c0_w_out_5));


wire ltl9c0_lut_match_6;
wire ltl9c0_w_match_6;

    
    
    

LUT_Match_ltl9c0_6 #(8) lut_match_ltl9c0_6(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_6));


assign ltl9c0_w_match_6 = ltl9c0_lut_match_6 ;

STE #(.fan_in(4)) ltl9c0_ste_6 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl9c0_w_out_2, ltl9c0_w_out_3, ltl9c0_w_out_5, ltl9c0_w_out_7 }),
                .match(ltl9c0_w_match_6) ,
                .active_state(ltl9c0_w_out_6));


wire ltl9c0_w_out_7;
wire ltl9c0_lut_match_7;
wire ltl9c0_w_match_7;

    
    
    

LUT_Match_ltl9c0_7 #(8) lut_match_ltl9c0_7(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_7));


assign ltl9c0_w_match_7 = ltl9c0_lut_match_7 ;

STE #(.fan_in(2)) ltl9c0_ste_7 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl9c0_w_out_3, ltl9c0_w_out_7 }),
                .match(ltl9c0_w_match_7) ,
                .active_state(ltl9c0_w_out_7));


wire ltl9c0_w_out_8;
wire ltl9c0_lut_match_8;
wire ltl9c0_w_match_8;

    
    
    

LUT_Match_ltl9c0_8 #(8) lut_match_ltl9c0_8(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_8));


assign ltl9c0_w_match_8 = ltl9c0_lut_match_8 ;

STE #(.fan_in(2)) ltl9c0_ste_8 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl9c0_w_out_3, ltl9c0_w_out_7 }),
                .match(ltl9c0_w_match_8) ,
                .active_state(ltl9c0_w_out_8));


wire ltl9c0_lut_match_9;
wire ltl9c0_w_match_9;

    
    
    

LUT_Match_ltl9c0_9 #(8) lut_match_ltl9c0_9(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_9));


assign ltl9c0_w_match_9 = ltl9c0_lut_match_9 ;

STE #(.fan_in(4)) ltl9c0_ste_9 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl9c0_w_out_9, ltl9c0_w_out_11, ltl9c0_w_out_4, ltl9c0_w_out_6 }),
                .match(ltl9c0_w_match_9) ,
                .active_state(ltl9c0_w_out_9));


wire ltl9c0_w_out_10;
wire ltl9c0_lut_match_10;
wire ltl9c0_w_match_10;

    
    
    

LUT_Match_ltl9c0_10 #(8) lut_match_ltl9c0_10(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_10));


assign ltl9c0_w_match_10 = ltl9c0_lut_match_10 ;

STE #(.fan_in(2)) ltl9c0_ste_10 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl9c0_w_out_8, ltl9c0_w_out_10 }),
                .match(ltl9c0_w_match_10) ,
                .active_state(ltl9c0_w_out_10));


wire ltl9c0_lut_match_11;
wire ltl9c0_w_match_11;

    
    
    

LUT_Match_ltl9c0_11 #(8) lut_match_ltl9c0_11(
                .clk(clk),
                .symbols(symbols),
                .match(ltl9c0_lut_match_11));


assign ltl9c0_w_match_11 = ltl9c0_lut_match_11 ;

STE #(.fan_in(2)) ltl9c0_ste_11 (
                .clk(clk),
                .run(run),
                .reset(reset),
		.start_of_data,
                .income_edges({ ltl9c0_w_out_8, ltl9c0_w_out_10 }),
                .match(ltl9c0_w_match_11) ,
                .active_state(ltl9c0_w_out_11));




endmodule


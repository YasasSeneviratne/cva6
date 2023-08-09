// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "rm_tb_ltl__Syms.h"


VL_ATTR_COLD void rm_tb_ltl___024root__trace_init_sub__TOP__0(rm_tb_ltl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+31,"run", false,-1);
    tracep->declBit(c+32,"reset", false,-1);
    tracep->declBus(c+33,"symbols", false,-1, 7,0);
    tracep->declBit(c+34,"ltl0c0_w_out_2", false,-1);
    tracep->declBit(c+35,"ltl0c0_w_out_4", false,-1);
    tracep->declBit(c+36,"ltl0c0_w_out_7", false,-1);
    tracep->declBit(c+37,"ltl0c0_w_out_9", false,-1);
    tracep->pushNamePrefix("ltlwrap ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+31,"run", false,-1);
    tracep->declBit(c+32,"reset", false,-1);
    tracep->declBus(c+33,"symbols", false,-1, 7,0);
    tracep->declBit(c+34,"ltl0c0_w_out_2", false,-1);
    tracep->declBit(c+35,"ltl0c0_w_out_4", false,-1);
    tracep->declBit(c+36,"ltl0c0_w_out_7", false,-1);
    tracep->declBit(c+37,"ltl0c0_w_out_9", false,-1);
    tracep->declBit(c+1,"run_reg", false,-1);
    tracep->declBit(c+2,"reset_reg", false,-1);
    tracep->declBit(c+39,"lreset_reg", false,-1);
    tracep->declBus(c+3,"symbols_reg", false,-1, 7,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+34,"ltl0c0_w_out_2", false,-1);
    tracep->declBit(c+35,"ltl0c0_w_out_4", false,-1);
    tracep->declBit(c+36,"ltl0c0_w_out_7", false,-1);
    tracep->declBit(c+37,"ltl0c0_w_out_9", false,-1);
    tracep->declBit(c+40,"all_input", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBit(c+5,"start_of_data_reg", false,-1);
    tracep->declBit(c+6,"ltl0c0_lut_match_1", false,-1);
    tracep->declBit(c+6,"ltl0c0_w_match_1", false,-1);
    tracep->declBit(c+7,"ltl0c0_w_out_1", false,-1);
    tracep->declBit(c+8,"ltl0c0_lut_match_2", false,-1);
    tracep->declBit(c+8,"ltl0c0_w_match_2", false,-1);
    tracep->declBit(c+9,"ltl0c0_lut_match_3", false,-1);
    tracep->declBit(c+9,"ltl0c0_w_match_3", false,-1);
    tracep->declBit(c+10,"ltl0c0_w_out_3", false,-1);
    tracep->declBit(c+11,"ltl0c0_lut_match_4", false,-1);
    tracep->declBit(c+11,"ltl0c0_w_match_4", false,-1);
    tracep->declBit(c+6,"ltl0c0_lut_match_5", false,-1);
    tracep->declBit(c+6,"ltl0c0_w_match_5", false,-1);
    tracep->declBit(c+12,"ltl0c0_w_out_5", false,-1);
    tracep->declBit(c+13,"ltl0c0_lut_match_6", false,-1);
    tracep->declBit(c+13,"ltl0c0_w_match_6", false,-1);
    tracep->declBit(c+14,"ltl0c0_w_out_6", false,-1);
    tracep->declBit(c+15,"ltl0c0_lut_match_7", false,-1);
    tracep->declBit(c+15,"ltl0c0_w_match_7", false,-1);
    tracep->declBit(c+6,"ltl0c0_lut_match_8", false,-1);
    tracep->declBit(c+6,"ltl0c0_w_match_8", false,-1);
    tracep->declBit(c+16,"ltl0c0_w_out_8", false,-1);
    tracep->declBit(c+17,"ltl0c0_lut_match_9", false,-1);
    tracep->declBit(c+17,"ltl0c0_w_match_9", false,-1);
    tracep->pushNamePrefix("ltl0c0_ste_1 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+18,"income_edges", false,-1, 1,0);
    tracep->declBit(c+6,"match", false,-1);
    tracep->declBit(c+7,"active_state", false,-1);
    tracep->declBus(c+41,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+19,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_2 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+18,"income_edges", false,-1, 1,0);
    tracep->declBit(c+8,"match", false,-1);
    tracep->declBit(c+34,"active_state", false,-1);
    tracep->declBus(c+41,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+20,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_3 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+18,"income_edges", false,-1, 1,0);
    tracep->declBit(c+9,"match", false,-1);
    tracep->declBit(c+10,"active_state", false,-1);
    tracep->declBus(c+41,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+21,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_4 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+38,"income_edges", false,-1, 3,0);
    tracep->declBit(c+11,"match", false,-1);
    tracep->declBit(c+35,"active_state", false,-1);
    tracep->declBus(c+43,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+44,"fan_in", false,-1, 31,0);
    tracep->declBit(c+22,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_5 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+23,"income_edges", false,-1, 1,0);
    tracep->declBit(c+6,"match", false,-1);
    tracep->declBit(c+12,"active_state", false,-1);
    tracep->declBus(c+43,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+24,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_6 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+23,"income_edges", false,-1, 1,0);
    tracep->declBit(c+13,"match", false,-1);
    tracep->declBit(c+14,"active_state", false,-1);
    tracep->declBus(c+43,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+25,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_7 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+23,"income_edges", false,-1, 1,0);
    tracep->declBit(c+15,"match", false,-1);
    tracep->declBit(c+36,"active_state", false,-1);
    tracep->declBus(c+43,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+26,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_8 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+27,"income_edges", false,-1, 1,0);
    tracep->declBit(c+6,"match", false,-1);
    tracep->declBit(c+16,"active_state", false,-1);
    tracep->declBus(c+43,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+28,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ltl0c0_ste_9 ");
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBit(c+1,"run", false,-1);
    tracep->declBit(c+2,"reset", false,-1);
    tracep->declBit(c+4,"start_of_data", false,-1);
    tracep->declBus(c+27,"income_edges", false,-1, 1,0);
    tracep->declBit(c+17,"match", false,-1);
    tracep->declBit(c+37,"active_state", false,-1);
    tracep->declBus(c+43,"START_TYPE", false,-1, 31,0);
    tracep->declBus(c+42,"fan_in", false,-1, 31,0);
    tracep->declBit(c+29,"internal_reg", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_1 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+6,"match", false,-1);
    tracep->declBit(c+6,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_2 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+8,"match", false,-1);
    tracep->declBit(c+8,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_3 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+9,"match", false,-1);
    tracep->declBit(c+9,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_4 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+11,"match", false,-1);
    tracep->declBit(c+11,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_5 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+6,"match", false,-1);
    tracep->declBit(c+6,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_6 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+13,"match", false,-1);
    tracep->declBit(c+13,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_7 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+15,"match", false,-1);
    tracep->declBit(c+15,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_8 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+6,"match", false,-1);
    tracep->declBit(c+6,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("lut_match_ltl0c0_9 ");
    tracep->declBus(c+45,"width", false,-1, 31,0);
    tracep->declBit(c+30,"clk", false,-1);
    tracep->declBus(c+3,"symbols", false,-1, 7,0);
    tracep->declBit(c+17,"match", false,-1);
    tracep->declBit(c+17,"match_internal", false,-1);
    tracep->declBus(c+3,"input_capture", false,-1, 7,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void rm_tb_ltl___024root__trace_init_top(rm_tb_ltl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_init_top\n"); );
    // Body
    rm_tb_ltl___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void rm_tb_ltl___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void rm_tb_ltl___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void rm_tb_ltl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void rm_tb_ltl___024root__trace_register(rm_tb_ltl___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&rm_tb_ltl___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&rm_tb_ltl___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&rm_tb_ltl___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void rm_tb_ltl___024root__trace_full_sub_0(rm_tb_ltl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void rm_tb_ltl___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_full_top_0\n"); );
    // Init
    rm_tb_ltl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<rm_tb_ltl___024root*>(voidSelf);
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    rm_tb_ltl___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void rm_tb_ltl___024root__trace_full_sub_0(rm_tb_ltl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->ltlwrap__DOT__run_reg));
    bufp->fullBit(oldp+2,(vlSelf->ltlwrap__DOT__reset_reg));
    bufp->fullCData(oldp+3,(vlSelf->ltlwrap__DOT__symbols_reg),8);
    bufp->fullBit(oldp+4,(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data));
    bufp->fullBit(oldp+5,(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data_reg));
    bufp->fullBit(oldp+6,(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal));
    bufp->fullBit(oldp+7,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                           & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal))));
    bufp->fullBit(oldp+8,(((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                           | (((6U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                               & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                              | ((IData)(vlSelf->__VdfgTmp_hbe0d7d58__0) 
                                 | ((0xeU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                    & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))))));
    bufp->fullBit(oldp+9,((((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                            & (5U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                           | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                              & (0xdU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))));
    bufp->fullBit(oldp+10,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg) 
                            & (((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                & (5U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                               | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                  & (0xdU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)))))));
    bufp->fullBit(oldp+11,((0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))));
    bufp->fullBit(oldp+12,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                            & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal))));
    bufp->fullBit(oldp+13,(((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                            | (IData)(vlSelf->__VdfgTmp_hbe0d7d58__0))));
    bufp->fullBit(oldp+14,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg) 
                            & ((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                               | (IData)(vlSelf->__VdfgTmp_hbe0d7d58__0)))));
    bufp->fullBit(oldp+15,((((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                             & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                            | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                               & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))));
    bufp->fullBit(oldp+16,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                            & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal))));
    bufp->fullBit(oldp+17,((((2U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                             & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                            | ((0xaU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                               & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))));
    bufp->fullCData(oldp+18,(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges),2);
    bufp->fullBit(oldp+19,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg));
    bufp->fullBit(oldp+20,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg));
    bufp->fullBit(oldp+21,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg));
    bufp->fullBit(oldp+22,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_4__DOT__internal_reg));
    bufp->fullCData(oldp+23,(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges),2);
    bufp->fullBit(oldp+24,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg));
    bufp->fullBit(oldp+25,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg));
    bufp->fullBit(oldp+26,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_7__DOT__internal_reg));
    bufp->fullCData(oldp+27,(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_8__income_edges),2);
    bufp->fullBit(oldp+28,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg));
    bufp->fullBit(oldp+29,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_9__DOT__internal_reg));
    bufp->fullBit(oldp+30,(vlSelf->clk));
    bufp->fullBit(oldp+31,(vlSelf->run));
    bufp->fullBit(oldp+32,(vlSelf->reset));
    bufp->fullCData(oldp+33,(vlSelf->symbols),8);
    bufp->fullBit(oldp+34,(vlSelf->ltl0c0_w_out_2));
    bufp->fullBit(oldp+35,(vlSelf->ltl0c0_w_out_4));
    bufp->fullBit(oldp+36,(vlSelf->ltl0c0_w_out_7));
    bufp->fullBit(oldp+37,(vlSelf->ltl0c0_w_out_9));
    bufp->fullCData(oldp+38,((((IData)(vlSelf->ltl0c0_w_out_9) 
                               << 3U) | (((IData)(vlSelf->ltl0c0_w_out_2) 
                                          << 2U) | 
                                         (((IData)(vlSelf->ltl0c0_w_out_4) 
                                           << 1U) | (IData)(vlSelf->ltl0c0_w_out_7))))),4);
    bufp->fullBit(oldp+39,(vlSelf->ltlwrap__DOT__lreset_reg));
    bufp->fullBit(oldp+40,(1U));
    bufp->fullIData(oldp+41,(1U),32);
    bufp->fullIData(oldp+42,(2U),32);
    bufp->fullIData(oldp+43,(0U),32);
    bufp->fullIData(oldp+44,(4U),32);
    bufp->fullIData(oldp+45,(8U),32);
}

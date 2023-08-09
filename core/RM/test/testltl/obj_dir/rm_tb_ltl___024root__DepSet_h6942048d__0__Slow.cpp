// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_ltl.h for the primary calling header

#include "verilated.h"

#include "rm_tb_ltl___024root.h"

VL_ATTR_COLD void rm_tb_ltl___024root___eval_static(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_static\n"); );
}

VL_ATTR_COLD void rm_tb_ltl___024root___eval_initial(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void rm_tb_ltl___024root___eval_final(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_final\n"); );
}

VL_ATTR_COLD void rm_tb_ltl___024root___eval_triggers__stl(rm_tb_ltl___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___dump_triggers__stl(rm_tb_ltl___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___eval_stl(rm_tb_ltl___024root* vlSelf);

VL_ATTR_COLD void rm_tb_ltl___024root___eval_settle(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        rm_tb_ltl___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                rm_tb_ltl___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("tb_top_ltl.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            rm_tb_ltl___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___dump_triggers__stl(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void rm_tb_ltl___024root___stl_sequent__TOP__0(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->ltl0c0_w_out_4 = ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_4__DOT__internal_reg) 
                              & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)));
    vlSelf->ltl0c0_w_out_7 = ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_7__DOT__internal_reg) 
                              & (((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                  & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                                 | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                    & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)))));
    vlSelf->ltl0c0_w_out_9 = ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_9__DOT__internal_reg) 
                              & (((2U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                  & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                                 | ((0xaU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                    & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)))));
    vlSelf->ltlwrap__DOT__dut__DOT__start_of_data = 
        ((~ (IData)(vlSelf->ltlwrap__DOT__reset_reg)) 
         & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data_reg));
    vlSelf->__VdfgTmp_h075c32ea__0 = ((2U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                      & (3U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)));
    vlSelf->__VdfgTmp_hbe0d7d58__0 = ((0xaU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                      & (0xbU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)));
    vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal 
        = ((1U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
           | ((8U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
              & (9U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))));
    vlSelf->ltl0c0_w_out_2 = ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg) 
                              & ((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                                 | (((6U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                     & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                                    | ((IData)(vlSelf->__VdfgTmp_hbe0d7d58__0) 
                                       | ((0xeU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                          & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)))))));
    vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges 
        = ((((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg) 
             & (((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                 & (5U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                   & (0xdU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))) 
            << 1U) | ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                      & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
    vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_8__income_edges 
        = ((((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg) 
             & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal)) 
            << 1U) | ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg) 
                      & ((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                         | (IData)(vlSelf->__VdfgTmp_hbe0d7d58__0))));
}

VL_ATTR_COLD void rm_tb_ltl___024root___eval_stl(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        rm_tb_ltl___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___dump_triggers__act(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___dump_triggers__nba(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void rm_tb_ltl___024root___ctor_var_reset(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->run = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->symbols = VL_RAND_RESET_I(8);
    vlSelf->ltl0c0_w_out_2 = VL_RAND_RESET_I(1);
    vlSelf->ltl0c0_w_out_4 = VL_RAND_RESET_I(1);
    vlSelf->ltl0c0_w_out_7 = VL_RAND_RESET_I(1);
    vlSelf->ltl0c0_w_out_9 = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__run_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__reset_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__lreset_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__symbols_reg = VL_RAND_RESET_I(8);
    vlSelf->ltlwrap__DOT__dut__DOT__start_of_data = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__start_of_data_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges = VL_RAND_RESET_I(2);
    vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges = VL_RAND_RESET_I(2);
    vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_8__income_edges = VL_RAND_RESET_I(2);
    vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_4__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_7__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_9__DOT__internal_reg = VL_RAND_RESET_I(1);
    vlSelf->__VdfgTmp_h075c32ea__0 = 0;
    vlSelf->__VdfgTmp_hbe0d7d58__0 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}

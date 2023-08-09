// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_ltl.h for the primary calling header

#include "verilated.h"

#include "rm_tb_ltl___024root.h"

void rm_tb_ltl___024root___eval_act(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_act\n"); );
}

VL_INLINE_OPT void rm_tb_ltl___024root___nba_sequent__TOP__0(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___nba_sequent__TOP__0\n"); );
    // Body
    if (vlSelf->ltlwrap__DOT__reset_reg) {
        vlSelf->ltlwrap__DOT__dut__DOT__start_of_data_reg = 1U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_9__DOT__internal_reg = 0U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_7__DOT__internal_reg = 0U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg = 0U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg = 0U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg = 0U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_4__DOT__internal_reg = 0U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg = 1U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg = 1U;
        vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg = 1U;
    } else {
        vlSelf->ltlwrap__DOT__dut__DOT__start_of_data_reg = 0U;
        if (vlSelf->ltlwrap__DOT__run_reg) {
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_9__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_8__income_edges));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_7__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_8__income_edges));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_4__DOT__internal_reg 
                = ((IData)(vlSelf->ltl0c0_w_out_9) 
                   | ((IData)(vlSelf->ltl0c0_w_out_2) 
                      | ((IData)(vlSelf->ltl0c0_w_out_4) 
                         | (IData)(vlSelf->ltl0c0_w_out_7))));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges));
            vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg 
                = (0U != (IData)(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges));
            if (vlSelf->ltlwrap__DOT__dut__DOT__start_of_data) {
                vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg = 1U;
                vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg = 1U;
                vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg = 1U;
            }
        }
    }
    vlSelf->ltlwrap__DOT__symbols_reg = vlSelf->symbols;
    vlSelf->ltlwrap__DOT__run_reg = vlSelf->run;
    vlSelf->ltlwrap__DOT__reset_reg = vlSelf->reset;
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
    vlSelf->ltlwrap__DOT__dut__DOT__start_of_data = 
        ((~ (IData)(vlSelf->ltlwrap__DOT__reset_reg)) 
         & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data_reg));
    vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges 
        = (((IData)(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data) 
            << 1U) | ((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                      & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal)));
}

void rm_tb_ltl___024root___eval_nba(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        rm_tb_ltl___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void rm_tb_ltl___024root___eval_triggers__act(rm_tb_ltl___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___dump_triggers__act(rm_tb_ltl___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___dump_triggers__nba(rm_tb_ltl___024root* vlSelf);
#endif  // VL_DEBUG

void rm_tb_ltl___024root___eval(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            rm_tb_ltl___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    rm_tb_ltl___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("tb_top_ltl.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                rm_tb_ltl___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                rm_tb_ltl___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("tb_top_ltl.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            rm_tb_ltl___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void rm_tb_ltl___024root___eval_debug_assertions(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->run & 0xfeU))) {
        Verilated::overWidthError("run");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG

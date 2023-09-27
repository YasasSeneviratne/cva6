// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_top_routerlinkedlist.h for the primary calling header

#include "verilated.h"

#include "rm_tb_top_routerlinkedlist___024root.h"

void rm_tb_top_routerlinkedlist___024root___eval_triggers__act(rm_tb_top_routerlinkedlist___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_top_routerlinkedlist___024root___dump_triggers__act(rm_tb_top_routerlinkedlist___024root* vlSelf);
#endif  // VL_DEBUG
void rm_tb_top_routerlinkedlist___024root___eval_act(rm_tb_top_routerlinkedlist___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_top_routerlinkedlist___024root___dump_triggers__nba(rm_tb_top_routerlinkedlist___024root* vlSelf);
#endif  // VL_DEBUG
void rm_tb_top_routerlinkedlist___024root___eval_nba(rm_tb_top_routerlinkedlist___024root* vlSelf);

void rm_tb_top_routerlinkedlist___024root___eval(rm_tb_top_routerlinkedlist___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_top_routerlinkedlist___024root___eval\n"); );
    // Init
    VlTriggerVec<11> __VpreTriggered;
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
            rm_tb_top_routerlinkedlist___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    rm_tb_top_routerlinkedlist___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("rm_tb_top_routerlinkedlist.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                rm_tb_top_routerlinkedlist___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                rm_tb_top_routerlinkedlist___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("rm_tb_top_routerlinkedlist.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            rm_tb_top_routerlinkedlist___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void rm_tb_top_routerlinkedlist___024root___eval_debug_assertions(rm_tb_top_routerlinkedlist___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_top_routerlinkedlist___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst_ni_tb & 0xfeU))) {
        Verilated::overWidthError("rst_ni_tb");}
    if (VL_UNLIKELY((vlSelf->enque_ins_tb & 0xfeU))) {
        Verilated::overWidthError("enque_ins_tb");}
    if (VL_UNLIKELY((vlSelf->opcode_i_tb & 0x80U))) {
        Verilated::overWidthError("opcode_i_tb");}
}
#endif  // VL_DEBUG

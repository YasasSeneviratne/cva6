// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_ltl.h for the primary calling header

#include "verilated.h"

#include "rm_tb_ltl__Syms.h"
#include "rm_tb_ltl___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_ltl___024root___dump_triggers__act(rm_tb_ltl___024root* vlSelf);
#endif  // VL_DEBUG

void rm_tb_ltl___024root___eval_triggers__act(rm_tb_ltl___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(0U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        rm_tb_ltl___024root___dump_triggers__act(vlSelf);
    }
#endif
}

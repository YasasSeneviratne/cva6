// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See rm_tb_lane.h for the primary calling header

#include "verilated.h"

#include "rm_tb_lane__Syms.h"
#include "rm_tb_lane___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void rm_tb_lane___024root___dump_triggers__stl(rm_tb_lane___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void rm_tb_lane___024root___eval_triggers__stl(rm_tb_lane___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_lane___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        rm_tb_lane___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

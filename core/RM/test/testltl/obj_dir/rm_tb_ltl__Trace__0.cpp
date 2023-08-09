// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "rm_tb_ltl__Syms.h"


void rm_tb_ltl___024root__trace_chg_sub_0(rm_tb_ltl___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void rm_tb_ltl___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_chg_top_0\n"); );
    // Init
    rm_tb_ltl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<rm_tb_ltl___024root*>(voidSelf);
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    rm_tb_ltl___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void rm_tb_ltl___024root__trace_chg_sub_0(rm_tb_ltl___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->ltlwrap__DOT__run_reg));
        bufp->chgBit(oldp+1,(vlSelf->ltlwrap__DOT__reset_reg));
        bufp->chgCData(oldp+2,(vlSelf->ltlwrap__DOT__symbols_reg),8);
        bufp->chgBit(oldp+3,(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data));
        bufp->chgBit(oldp+4,(vlSelf->ltlwrap__DOT__dut__DOT__start_of_data_reg));
        bufp->chgBit(oldp+5,(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal));
        bufp->chgBit(oldp+6,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg) 
                              & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal))));
        bufp->chgBit(oldp+7,(((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                              | (((6U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                  & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                                 | ((IData)(vlSelf->__VdfgTmp_hbe0d7d58__0) 
                                    | ((0xeU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                       & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))))));
        bufp->chgBit(oldp+8,((((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                               & (5U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                              | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                 & (0xdU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))));
        bufp->chgBit(oldp+9,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg) 
                              & (((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                  & (5U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                                 | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                    & (0xdU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)))))));
        bufp->chgBit(oldp+10,((0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))));
        bufp->chgBit(oldp+11,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg) 
                               & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal))));
        bufp->chgBit(oldp+12,(((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                               | (IData)(vlSelf->__VdfgTmp_hbe0d7d58__0))));
        bufp->chgBit(oldp+13,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg) 
                               & ((IData)(vlSelf->__VdfgTmp_h075c32ea__0) 
                                  | (IData)(vlSelf->__VdfgTmp_hbe0d7d58__0)))));
        bufp->chgBit(oldp+14,((((4U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                               | ((0xcU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                  & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))));
        bufp->chgBit(oldp+15,(((IData)(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg) 
                               & (IData)(vlSelf->ltlwrap__DOT__dut__DOT__lut_match_ltl0c0_1__DOT__match_internal))));
        bufp->chgBit(oldp+16,((((2U <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                & (7U >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))) 
                               | ((0xaU <= (IData)(vlSelf->ltlwrap__DOT__symbols_reg)) 
                                  & (0xfU >= (IData)(vlSelf->ltlwrap__DOT__symbols_reg))))));
        bufp->chgCData(oldp+17,(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_1__income_edges),2);
        bufp->chgBit(oldp+18,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_1__DOT__internal_reg));
        bufp->chgBit(oldp+19,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_2__DOT__internal_reg));
        bufp->chgBit(oldp+20,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_3__DOT__internal_reg));
        bufp->chgBit(oldp+21,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_4__DOT__internal_reg));
        bufp->chgCData(oldp+22,(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_5__income_edges),2);
        bufp->chgBit(oldp+23,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_5__DOT__internal_reg));
        bufp->chgBit(oldp+24,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_6__DOT__internal_reg));
        bufp->chgBit(oldp+25,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_7__DOT__internal_reg));
        bufp->chgCData(oldp+26,(vlSelf->ltlwrap__DOT__dut__DOT____Vcellinp__ltl0c0_ste_8__income_edges),2);
        bufp->chgBit(oldp+27,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_8__DOT__internal_reg));
        bufp->chgBit(oldp+28,(vlSelf->ltlwrap__DOT__dut__DOT__ltl0c0_ste_9__DOT__internal_reg));
    }
    bufp->chgBit(oldp+29,(vlSelf->clk));
    bufp->chgBit(oldp+30,(vlSelf->run));
    bufp->chgBit(oldp+31,(vlSelf->reset));
    bufp->chgCData(oldp+32,(vlSelf->symbols),8);
    bufp->chgBit(oldp+33,(vlSelf->ltl0c0_w_out_2));
    bufp->chgBit(oldp+34,(vlSelf->ltl0c0_w_out_4));
    bufp->chgBit(oldp+35,(vlSelf->ltl0c0_w_out_7));
    bufp->chgBit(oldp+36,(vlSelf->ltl0c0_w_out_9));
    bufp->chgCData(oldp+37,((((IData)(vlSelf->ltl0c0_w_out_9) 
                              << 3U) | (((IData)(vlSelf->ltl0c0_w_out_2) 
                                         << 2U) | (
                                                   ((IData)(vlSelf->ltl0c0_w_out_4) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->ltl0c0_w_out_7))))),4);
}

void rm_tb_ltl___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    rm_tb_ltl___024root__trace_cleanup\n"); );
    // Init
    rm_tb_ltl___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<rm_tb_ltl___024root*>(voidSelf);
    rm_tb_ltl__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}

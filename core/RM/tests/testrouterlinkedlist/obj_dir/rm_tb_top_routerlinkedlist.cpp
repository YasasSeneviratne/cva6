// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "rm_tb_top_routerlinkedlist.h"
#include "rm_tb_top_routerlinkedlist__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

rm_tb_top_routerlinkedlist::rm_tb_top_routerlinkedlist(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new rm_tb_top_routerlinkedlist__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , rst_ni_tb{vlSymsp->TOP.rst_ni_tb}
    , signal_tb{vlSymsp->TOP.signal_tb}
    , reset_lane_i_tb{vlSymsp->TOP.reset_lane_i_tb}
    , enque_ins_tb{vlSymsp->TOP.enque_ins_tb}
    , opcode_i_tb{vlSymsp->TOP.opcode_i_tb}
    , lane_vector{vlSymsp->TOP.lane_vector}
    , lane_reset{vlSymsp->TOP.lane_reset}
    , itype{vlSymsp->TOP.itype}
    , lane0{vlSymsp->TOP.lane0}
    , lane1{vlSymsp->TOP.lane1}
    , lane_mask{vlSymsp->TOP.lane_mask}
    , parent_idx{vlSymsp->TOP.parent_idx}
    , has_parent{vlSymsp->TOP.has_parent}
    , child_idx{vlSymsp->TOP.child_idx}
    , has_child{vlSymsp->TOP.has_child}
    , valid{vlSymsp->TOP.valid}
    , list_reset_mask{vlSymsp->TOP.list_reset_mask}
    , monitor_ins{vlSymsp->TOP.monitor_ins}
    , next_idx{vlSymsp->TOP.next_idx}
    , monitor_o{vlSymsp->TOP.monitor_o}
    , num_events{vlSymsp->TOP.num_events}
    , num_lanes{vlSymsp->TOP.num_lanes}
    , num_rules{vlSymsp->TOP.num_rules}
    , test_type{vlSymsp->TOP.test_type}
    , pc_i_tb{vlSymsp->TOP.pc_i_tb}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I0c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__0__KET____DOT__lane__DOT__I1c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I0c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__1__KET____DOT__lane__DOT__I1c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I0c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__2__KET____DOT__lane__DOT__I1c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I0c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__3__KET____DOT__lane__DOT__I1c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I0c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__4__KET____DOT__lane__DOT__I1c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I0c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__5__KET____DOT__lane__DOT__I1c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I0c1}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c0{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c0}
    , __PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1{vlSymsp->TOP.__PVT__rm_tb_top_routerlinkedlist__DOT__rm__DOT__genblk1__BRA__6__KET____DOT__lane__DOT__I1c1}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

rm_tb_top_routerlinkedlist::rm_tb_top_routerlinkedlist(const char* _vcname__)
    : rm_tb_top_routerlinkedlist(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

rm_tb_top_routerlinkedlist::~rm_tb_top_routerlinkedlist() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void rm_tb_top_routerlinkedlist___024root___eval_debug_assertions(rm_tb_top_routerlinkedlist___024root* vlSelf);
#endif  // VL_DEBUG
void rm_tb_top_routerlinkedlist___024root___eval_static(rm_tb_top_routerlinkedlist___024root* vlSelf);
void rm_tb_top_routerlinkedlist___024root___eval_initial(rm_tb_top_routerlinkedlist___024root* vlSelf);
void rm_tb_top_routerlinkedlist___024root___eval_settle(rm_tb_top_routerlinkedlist___024root* vlSelf);
void rm_tb_top_routerlinkedlist___024root___eval(rm_tb_top_routerlinkedlist___024root* vlSelf);

void rm_tb_top_routerlinkedlist::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate rm_tb_top_routerlinkedlist::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    rm_tb_top_routerlinkedlist___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        rm_tb_top_routerlinkedlist___024root___eval_static(&(vlSymsp->TOP));
        rm_tb_top_routerlinkedlist___024root___eval_initial(&(vlSymsp->TOP));
        rm_tb_top_routerlinkedlist___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    rm_tb_top_routerlinkedlist___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool rm_tb_top_routerlinkedlist::eventsPending() { return false; }

uint64_t rm_tb_top_routerlinkedlist::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* rm_tb_top_routerlinkedlist::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void rm_tb_top_routerlinkedlist___024root___eval_final(rm_tb_top_routerlinkedlist___024root* vlSelf);

VL_ATTR_COLD void rm_tb_top_routerlinkedlist::final() {
    rm_tb_top_routerlinkedlist___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* rm_tb_top_routerlinkedlist::hierName() const { return vlSymsp->name(); }
const char* rm_tb_top_routerlinkedlist::modelName() const { return "rm_tb_top_routerlinkedlist"; }
unsigned rm_tb_top_routerlinkedlist::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> rm_tb_top_routerlinkedlist::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void rm_tb_top_routerlinkedlist___024root__trace_init_top(rm_tb_top_routerlinkedlist___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    rm_tb_top_routerlinkedlist___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<rm_tb_top_routerlinkedlist___024root*>(voidSelf);
    rm_tb_top_routerlinkedlist__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    rm_tb_top_routerlinkedlist___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void rm_tb_top_routerlinkedlist___024root__trace_register(rm_tb_top_routerlinkedlist___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void rm_tb_top_routerlinkedlist::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'rm_tb_top_routerlinkedlist::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    rm_tb_top_routerlinkedlist___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

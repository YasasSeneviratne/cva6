// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "rm_tb_lane.h"
#include "rm_tb_lane__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

rm_tb_lane::rm_tb_lane(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new rm_tb_lane__Syms(contextp(), _vcname__, this)}
    , clk_i{vlSymsp->TOP.clk_i}
    , lane_vector_i{vlSymsp->TOP.lane_vector_i}
    , lane_reset_i{vlSymsp->TOP.lane_reset_i}
    , monitor_o{vlSymsp->TOP.monitor_o}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

rm_tb_lane::rm_tb_lane(const char* _vcname__)
    : rm_tb_lane(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

rm_tb_lane::~rm_tb_lane() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void rm_tb_lane___024root___eval_debug_assertions(rm_tb_lane___024root* vlSelf);
#endif  // VL_DEBUG
void rm_tb_lane___024root___eval_static(rm_tb_lane___024root* vlSelf);
void rm_tb_lane___024root___eval_initial(rm_tb_lane___024root* vlSelf);
void rm_tb_lane___024root___eval_settle(rm_tb_lane___024root* vlSelf);
void rm_tb_lane___024root___eval(rm_tb_lane___024root* vlSelf);

void rm_tb_lane::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate rm_tb_lane::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    rm_tb_lane___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        rm_tb_lane___024root___eval_static(&(vlSymsp->TOP));
        rm_tb_lane___024root___eval_initial(&(vlSymsp->TOP));
        rm_tb_lane___024root___eval_settle(&(vlSymsp->TOP));
    }
    // MTask 0 start
    VL_DEBUG_IF(VL_DBG_MSGF("MTask0 starting\n"););
    Verilated::mtaskId(0);
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    rm_tb_lane___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfThreadMTask(vlSymsp->__Vm_evalMsgQp);
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool rm_tb_lane::eventsPending() { return false; }

uint64_t rm_tb_lane::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* rm_tb_lane::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void rm_tb_lane___024root___eval_final(rm_tb_lane___024root* vlSelf);

VL_ATTR_COLD void rm_tb_lane::final() {
    rm_tb_lane___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* rm_tb_lane::hierName() const { return vlSymsp->name(); }
const char* rm_tb_lane::modelName() const { return "rm_tb_lane"; }
unsigned rm_tb_lane::threads() const { return 1; }
std::unique_ptr<VerilatedTraceConfig> rm_tb_lane::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void rm_tb_lane___024root__trace_init_top(rm_tb_lane___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    rm_tb_lane___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<rm_tb_lane___024root*>(voidSelf);
    rm_tb_lane__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    rm_tb_lane___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void rm_tb_lane___024root__trace_register(rm_tb_lane___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void rm_tb_lane::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'rm_tb_lane::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    rm_tb_lane___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}

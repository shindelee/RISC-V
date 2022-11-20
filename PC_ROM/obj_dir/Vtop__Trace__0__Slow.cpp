// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBus(c+4,"ImmOp", false,-1, 7,0);
    tracep->declBus(c+5,"RD", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBus(c+7,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"DATAOUT_WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBus(c+4,"ImmOp", false,-1, 7,0);
    tracep->declBus(c+5,"RD", false,-1, 31,0);
    tracep->declBus(c+6,"A", false,-1, 7,0);
    tracep->pushNamePrefix("mem ");
    tracep->declBus(c+7,"ADDRESS_WIDTH", false,-1, 31,0);
    tracep->declBus(c+8,"DATAOUT_WIDTH", false,-1, 31,0);
    tracep->declBus(c+7,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBus(c+6,"A", false,-1, 7,0);
    tracep->declBus(c+5,"RD", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("pc ");
    tracep->declBus(c+7,"address_width", false,-1, 31,0);
    tracep->declBit(c+1,"PCsrc", false,-1);
    tracep->declBit(c+2,"clk", false,-1);
    tracep->declBit(c+3,"rst", false,-1);
    tracep->declBus(c+4,"ImmOp", false,-1, 7,0);
    tracep->declBus(c+6,"PC", false,-1, 7,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->PCsrc));
    bufp->fullBit(oldp+2,(vlSelf->clk));
    bufp->fullBit(oldp+3,(vlSelf->rst));
    bufp->fullCData(oldp+4,(vlSelf->ImmOp),8);
    bufp->fullIData(oldp+5,(vlSelf->RD),32);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__A),8);
    bufp->fullIData(oldp+7,(8U),32);
    bufp->fullIData(oldp+8,(0x20U),32);
}

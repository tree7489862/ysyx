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
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"clrn", false,-1);
    tracep->declBit(c+27,"ps2_clk", false,-1);
    tracep->declBit(c+28,"ps2_data", false,-1);
    tracep->declBus(c+29,"seg0", false,-1, 6,0);
    tracep->declBus(c+30,"seg1", false,-1, 6,0);
    tracep->declBus(c+31,"seg2", false,-1, 6,0);
    tracep->declBus(c+32,"seg3", false,-1, 6,0);
    tracep->declBus(c+33,"seg4", false,-1, 6,0);
    tracep->declBus(c+34,"seg5", false,-1, 6,0);
    tracep->declBus(c+35,"seg6", false,-1, 6,0);
    tracep->declBit(c+36,"ready", false,-1);
    tracep->declBit(c+37,"overflow", false,-1);
    tracep->declBit(c+38,"sampling", false,-1);
    tracep->declBit(c+39,"nextdata_n", false,-1);
    tracep->declBit(c+40,"clk_t", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"clrn", false,-1);
    tracep->declBit(c+27,"ps2_clk", false,-1);
    tracep->declBit(c+28,"ps2_data", false,-1);
    tracep->declBus(c+29,"seg0", false,-1, 6,0);
    tracep->declBus(c+30,"seg1", false,-1, 6,0);
    tracep->declBus(c+31,"seg2", false,-1, 6,0);
    tracep->declBus(c+32,"seg3", false,-1, 6,0);
    tracep->declBus(c+33,"seg4", false,-1, 6,0);
    tracep->declBus(c+34,"seg5", false,-1, 6,0);
    tracep->declBus(c+35,"seg6", false,-1, 6,0);
    tracep->declBit(c+36,"ready", false,-1);
    tracep->declBit(c+37,"overflow", false,-1);
    tracep->declBit(c+38,"sampling", false,-1);
    tracep->declBit(c+39,"nextdata_n", false,-1);
    tracep->declBit(c+40,"clk_t", false,-1);
    tracep->declBus(c+14,"scan_code", false,-1, 7,0);
    tracep->declBus(c+41,"data", false,-1, 7,0);
    tracep->declBus(c+15,"ascii_code", false,-1, 7,0);
    tracep->declBus(c+16,"num", false,-1, 7,0);
    tracep->declBit(c+42,"ready_2", false,-1);
    tracep->declBus(c+17,"scan_digit_1", false,-1, 3,0);
    tracep->declBus(c+18,"scan_digit_2", false,-1, 3,0);
    tracep->declBus(c+19,"ascii_digit_1", false,-1, 3,0);
    tracep->declBus(c+20,"ascii_digit_2", false,-1, 3,0);
    tracep->declBus(c+21,"num_digit_1", false,-1, 3,0);
    tracep->declBus(c+22,"num_digit_2", false,-1, 3,0);
    tracep->declBus(c+23,"data_buf", false,-1, 7,0);
    tracep->declBit(c+24,"got_f0", false,-1);
    tracep->declBus(c+43,"key_release_code", false,-1, 7,0);
    tracep->pushNamePrefix("ascii_display_1 ");
    tracep->declBus(c+19,"digit", false,-1, 3,0);
    tracep->declBus(c+31,"seg", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ascii_display_2 ");
    tracep->declBus(c+20,"digit", false,-1, 3,0);
    tracep->declBus(c+32,"seg", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("count_display_1 ");
    tracep->declBus(c+21,"digit", false,-1, 3,0);
    tracep->declBus(c+33,"seg", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("count_display_2 ");
    tracep->declBus(c+22,"digit", false,-1, 3,0);
    tracep->declBus(c+34,"seg", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("decoder ");
    tracep->declBus(c+14,"scan_code", false,-1, 7,0);
    tracep->declBus(c+15,"ascii_code", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("keyboard ");
    tracep->declBit(c+25,"clk", false,-1);
    tracep->declBit(c+26,"clrn", false,-1);
    tracep->declBit(c+27,"ps2_clk", false,-1);
    tracep->declBit(c+28,"ps2_data", false,-1);
    tracep->declBit(c+39,"nextdata_n", false,-1);
    tracep->declBus(c+41,"data", false,-1, 7,0);
    tracep->declBit(c+36,"ready", false,-1);
    tracep->declBit(c+37,"overflow", false,-1);
    tracep->declBit(c+38,"sampling", false,-1);
    tracep->declBus(c+1,"buffer", false,-1, 9,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+2+i*1,"fifo", true,(i+0), 7,0);
    }
    tracep->declBus(c+10,"w_ptr", false,-1, 2,0);
    tracep->declBus(c+11,"r_ptr", false,-1, 2,0);
    tracep->declBus(c+12,"count", false,-1, 3,0);
    tracep->declBus(c+13,"ps2_clk_sync", false,-1, 2,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scan_display_1 ");
    tracep->declBus(c+17,"digit", false,-1, 3,0);
    tracep->declBus(c+29,"seg", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("scan_display_2 ");
    tracep->declBus(c+18,"digit", false,-1, 3,0);
    tracep->declBus(c+30,"seg", false,-1, 6,0);
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
    bufp->fullSData(oldp+1,(vlSelf->top__DOT__keyboard__DOT__buffer),10);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__keyboard__DOT__fifo[0]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__keyboard__DOT__fifo[1]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__keyboard__DOT__fifo[2]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__keyboard__DOT__fifo[3]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__keyboard__DOT__fifo[4]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__keyboard__DOT__fifo[5]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__keyboard__DOT__fifo[6]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__keyboard__DOT__fifo[7]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__keyboard__DOT__w_ptr),3);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__keyboard__DOT__r_ptr),3);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__keyboard__DOT__count),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__keyboard__DOT__ps2_clk_sync),3);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__scan_code),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__ascii_code),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__num),8);
    bufp->fullCData(oldp+17,((0xfU & (IData)(vlSelf->top__DOT__scan_code))),4);
    bufp->fullCData(oldp+18,((0xfU & ((IData)(vlSelf->top__DOT__scan_code) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+19,((0xfU & (IData)(vlSelf->top__DOT__ascii_code))),4);
    bufp->fullCData(oldp+20,((0xfU & ((IData)(vlSelf->top__DOT__ascii_code) 
                                      >> 4U))),4);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__num_digit_1),4);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__num_digit_2),4);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__data_buf),8);
    bufp->fullBit(oldp+24,(vlSelf->top__DOT__got_f0));
    bufp->fullBit(oldp+25,(vlSelf->clk));
    bufp->fullBit(oldp+26,(vlSelf->clrn));
    bufp->fullBit(oldp+27,(vlSelf->ps2_clk));
    bufp->fullBit(oldp+28,(vlSelf->ps2_data));
    bufp->fullCData(oldp+29,(vlSelf->seg0),7);
    bufp->fullCData(oldp+30,(vlSelf->seg1),7);
    bufp->fullCData(oldp+31,(vlSelf->seg2),7);
    bufp->fullCData(oldp+32,(vlSelf->seg3),7);
    bufp->fullCData(oldp+33,(vlSelf->seg4),7);
    bufp->fullCData(oldp+34,(vlSelf->seg5),7);
    bufp->fullCData(oldp+35,(vlSelf->seg6),7);
    bufp->fullBit(oldp+36,(vlSelf->ready));
    bufp->fullBit(oldp+37,(vlSelf->overflow));
    bufp->fullBit(oldp+38,(vlSelf->sampling));
    bufp->fullBit(oldp+39,(vlSelf->nextdata_n));
    bufp->fullBit(oldp+40,(vlSelf->clk_t));
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__data),8);
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__ready_2));
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__key_release_code),8);
}

// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(clrn,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(seg0,6,0);
    VL_OUT8(seg1,6,0);
    VL_OUT8(seg2,6,0);
    VL_OUT8(seg3,6,0);
    VL_OUT8(seg4,6,0);
    VL_OUT8(seg5,6,0);
    VL_OUT8(seg6,6,0);
    VL_OUT8(ready,0,0);
    VL_OUT8(overflow,0,0);
    VL_OUT8(sampling,0,0);
    VL_OUT8(nextdata_n,0,0);
    VL_OUT8(clk_t,0,0);
    CData/*7:0*/ top__DOT__scan_code;
    CData/*7:0*/ top__DOT__data;
    CData/*7:0*/ top__DOT__ascii_code;
    CData/*7:0*/ top__DOT__num;
    CData/*0:0*/ top__DOT__ready_2;
    CData/*3:0*/ top__DOT__num_digit_1;
    CData/*3:0*/ top__DOT__num_digit_2;
    CData/*7:0*/ top__DOT__data_buf;
    CData/*0:0*/ top__DOT__got_f0;
    CData/*7:0*/ top__DOT__key_release_code;
    CData/*2:0*/ top__DOT__keyboard__DOT__w_ptr;
    CData/*2:0*/ top__DOT__keyboard__DOT__r_ptr;
    CData/*3:0*/ top__DOT__keyboard__DOT__count;
    CData/*2:0*/ top__DOT__keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ top__DOT__keyboard__DOT____Vlvbound_h1a91ade8__0;
    CData/*0:0*/ __Vdly__ready;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __Vtrigrprev__TOP__clrn;
    CData/*0:0*/ __VactContinue;
    SData/*9:0*/ top__DOT__keyboard__DOT__buffer;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> top__DOT__keyboard__DOT__fifo;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard

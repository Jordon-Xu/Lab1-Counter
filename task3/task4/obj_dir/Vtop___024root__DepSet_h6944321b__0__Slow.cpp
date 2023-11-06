// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__myDecoder__DOT__result = 0U;
    vlSelf->top__DOT__myDecoder__DOT__result = ((0xfff00U 
                                                 & vlSelf->top__DOT__myDecoder__DOT__result) 
                                                | (IData)(vlSelf->top__DOT__count));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 8U)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xff0ffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf00U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                          >> 8U)) << 8U)));
    }
    if ((5U <= (0xfU & (vlSelf->top__DOT__myDecoder__DOT__result 
                        >> 0xcU)))) {
        vlSelf->top__DOT__myDecoder__DOT__result = 
            ((0xf0fffU & vlSelf->top__DOT__myDecoder__DOT__result) 
             | (0xf000U & (((IData)(3U) + (vlSelf->top__DOT__myDecoder__DOT__result 
                                           >> 0xcU)) 
                           << 0xcU)));
    }
    vlSelf->top__DOT__myDecoder__DOT__result = (0xfffffU 
                                                & (vlSelf->top__DOT__myDecoder__DOT__result 
                                                   << 1U));
    vlSelf->bcd = (0xfffU & (vlSelf->top__DOT__myDecoder__DOT__result 
                             >> 8U));
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->bcd = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__count = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__myDecoder__DOT__result = VL_RAND_RESET_I(20);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
}

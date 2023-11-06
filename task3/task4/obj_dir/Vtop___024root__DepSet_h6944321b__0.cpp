// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__count = ((IData)(vlSelf->rst)
                                ? 0U : (0xffU & ((IData)(vlSelf->top__DOT__count) 
                                                 + (IData)(vlSelf->en))));
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

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
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
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("top.sv", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("top.sv", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
}
#endif  // VL_DEBUG

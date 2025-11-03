#pragma once

// Zorg dat de basis JUCE GUI headers geladen worden.
// Dit maakt LookAndFeel_V4, ColourScheme enz. beschikbaar.
#include <juce_gui_basics/juce_gui_basics.h>

// ==== JUCE5 compat: alias legacy colour-scheme helpers ====
#ifndef CTRLRX_LAF_COMPAT_DEFINED
#define CTRLRX_LAF_COMPAT_DEFINED
#define getJetBlackColourScheme      getDarkColourScheme
#define getYamDxColourScheme         getGreyColourScheme
#define getAkApcColourScheme         getDarkColourScheme
#define getAkMpcColourScheme         getDarkColourScheme
#define getLexiBlueColourScheme      getGreyColourScheme
#define getKurzGreenColourScheme     getGreyColourScheme
#define getKorGreyColourScheme       getGreyColourScheme
#define getKorGoldColourScheme       getLightColourScheme
#define getArturOrangeColourScheme   getDarkColourScheme
#define getAiraGreenColourScheme     getDarkColourScheme
#endif

// ==== JUCE5 compat: alias moderne macOS enum labels ====
#ifndef MacOSX_10_15
#define MacOSX_10_15 MacOSX
#endif
#ifndef MacOS_11
#define MacOS_11     MacOSX
#endif
#ifndef MacOS_12
#define MacOS_12     MacOSX
#endif

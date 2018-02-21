//                                                   
//  kern_resources.cpp                               
//  Shiki                                            
//                                                   
//  Copyright © 2016-2017 vit9696. All rights reserved.   
//                                                   
//  This is an autogenerated file!                   
//  Please avoid any modifications!                  
//                                                   

#include "kern_resources.hpp"                      


// Patch section

alignas(8) static const uint8_t patchBuf0[] { 0xBF, 0x69, 0x6D, 0x72, 0x64, 0xBE, 0x2C, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf1[] { 0xBF, 0x6E, 0x6D, 0x72, 0x64, 0xBE, 0x2C, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf2[] { 0xBF, 0x69, 0x6D, 0x72, 0x64, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf3[] { 0xBF, 0x6E, 0x6D, 0x72, 0x64, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf4[] { 0xBF, 0x63, 0x76, 0x61, 0x71, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf5[] { 0xBF, 0x6E, 0x76, 0x61, 0x71, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf6[] { 0xBF, 0x63, 0x76, 0x61, 0x63, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf7[] { 0xBF, 0x6E, 0x76, 0x61, 0x63, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf8[] { 0xBF, 0x63, 0x76, 0x61, 0x65, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf9[] { 0xBF, 0x6E, 0x76, 0x61, 0x65, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf10[] { 0xBF, 0x63, 0x76, 0x61, 0x7A, 0xBE, 0x90, 0x01, 0x00, 0x00, };
alignas(8) static const uint8_t patchBuf11[] { 0xBF, 0x6E, 0x76, 0x61, 0x7A, 0xBE, 0x90, 0x01, 0x00, 0x00, };
static UserPatcher::BinaryModPatch patches0[] {
	{ CPU_TYPE_X86_64, patchBuf0, patchBuf1, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNDRMI },
	{ CPU_TYPE_X86_64, patchBuf2, patchBuf3, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNDRMI },
	{ CPU_TYPE_X86_64, patchBuf4, patchBuf5, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
	{ CPU_TYPE_X86_64, patchBuf6, patchBuf7, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
	{ CPU_TYPE_X86_64, patchBuf8, patchBuf9, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
	{ CPU_TYPE_X86_64, patchBuf10, patchBuf11, 10, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionNSTREAM },
};
alignas(8) static const uint8_t patchBuf12[] { 0xC7, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x0F, 0xA2, };
alignas(8) static const uint8_t patchBuf13[] { 0xC7, 0xC0, 0xC2, 0x06, 0x02, 0x00, 0x90, 0x90, };
static UserPatcher::BinaryModPatch patches1[] {
	{ CPU_TYPE_X86_64, patchBuf12, patchBuf13, 8, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionFCPUID },
};
alignas(8) static const uint8_t patchBuf14[] { 0x66, 0x6F, 0x72, 0x63, 0x65, 0x4F, 0x66, 0x66, };
alignas(8) static const uint8_t patchBuf15[] { 0x61, 0x76, 0x6F, 0x69, 0x64, 0x4F, 0x66, 0x66, };
alignas(8) static const uint8_t patchBuf16[] { 0x68, 0x77, 0x65, 0x42, 0x47, 0x52, 0x41, };
alignas(8) static const uint8_t patchBuf17[] { 0x73, 0x77, 0x65, 0x42, 0x47, 0x52, 0x41, };
alignas(8) static const uint8_t patchBuf18[] { 0x00, };
alignas(8) static const uint8_t patchBuf19[] { 0x00, };
alignas(8) static const uint8_t patchBuf20[] { 0x00, 0x6B, 0x65, 0x31, 0x00, };
alignas(8) static const uint8_t patchBuf21[] { 0x00, 0x76, 0x65, 0x31, 0x00, };
alignas(8) static const uint8_t patchBuf22[] { 0x62, 0x6F, 0x61, 0x72, 0x64, 0x2D, 0x69, 0x64, 0x00, };
alignas(8) static const uint8_t patchBuf23[] { 0x73, 0x68, 0x69, 0x6B, 0x69, 0x2D, 0x69, 0x64, 0x00, };
alignas(8) static const uint8_t patchBuf24[] { 0x49, 0x6E, 0x74, 0x65, 0x6C, 0x41, 0x63, 0x63, 0x65, 0x6C, 0x65, 0x72, 0x61, 0x74, 0x6F, 0x72, };
alignas(8) static const uint8_t patchBuf25[] { 0x47, 0x65, 0x6E, 0x36, 0x41, 0x63, 0x63, 0x65, 0x6C, 0x65, 0x72, 0x61, 0x74, 0x6F, 0x72, 0x00, };
static UserPatcher::BinaryModPatch patches2[] {
	{ CPU_TYPE_X86_64, patchBuf14, patchBuf15, 8, 0, 1, UserPatcher::FileSegment::SegmentTextCstring, SectionOFFLINE },
	{ CPU_TYPE_X86_64, patchBuf16, patchBuf17, 7, 0, 1, UserPatcher::FileSegment::SegmentTextCstring, SectionBGRA },
	{ CPU_TYPE_X86_64, patchBuf18, patchBuf19, 1, 0, 1, UserPatcher::FileSegment::SegmentTextText, SectionCOMPATRENDERER },
	{ CPU_TYPE_X86_64, patchBuf20, patchBuf21, 5, 0, 1, UserPatcher::FileSegment::SegmentTextCstring, SectionKEGVA },
	{ CPU_TYPE_X86_64, patchBuf22, patchBuf23, 9, 0, 1, UserPatcher::FileSegment::SegmentTextCstring, SectionBOARDID },
	{ CPU_TYPE_X86_64, patchBuf24, patchBuf25, 16, 0, 1, UserPatcher::FileSegment::SegmentTextCstring, SectionSNBPLUGIN },
};

// Mod section

UserPatcher::BinaryModInfo ADDPR(binaryMod)[] {
	{ "/System/Library/Frameworks/VideoToolbox.framework/Versions/A/VideoToolbox", patches0, 6 },
	{ "/System/Library/PrivateFrameworks/CoreFP.framework/Versions/A/CoreFP", patches1, 1 },
	{ "/System/Library/PrivateFrameworks/AppleGVA.framework/Versions/A/AppleGVA", patches2, 6 },
};

const size_t ADDPR(binaryModSize) {3};

// Process list
using PF = UserPatcher::ProcInfo::ProcFlags;

UserPatcher::ProcInfo ADDPR(procInfo)[] {
	{ "/Applications/iTunes.app/Contents/MacOS/iTunes", 46, SectionNDRMI, PF::MatchExact },
	{ "/Applications/iTunes.app/Contents/MacOS/iTunes", 46, SectionKEGVA, PF::MatchExact },
	{ "/Applications/QuickTime Player.app/Contents/MacOS/QuickTime Player", 66, SectionNDRMI, PF::MatchExact },
	{ "/Applications/Safari.app/Contents/MacOS/Safari", 46, SectionNSTREAM, PF::MatchExact },
	{ "/System/Library/Frameworks/WebKit.framework/Versions/A/XPCServices/com.apple.WebKit.WebContent.xpc/Contents/MacOS/com.apple.WebKit.WebContent", 141, SectionNSTREAM, PF::MatchExact },
	{ "/System/Library/Frameworks/WebKit.framework/Versions/A/XPCServices/com.apple.WebKit.WebContent.xpc/Contents/MacOS/com.apple.WebKit.WebContent", 141, SectionWHITELIST, PF::MatchExact },
	{ "/Applications/Safari.app/Contents/MacOS/Safari", 46, SectionWHITELIST, PF::MatchExact },
	{ "/System/Library/Frameworks/VideoToolbox.framework/Versions/A/XPCServices/VTDecoderXPCService.xpc/Contents/MacOS/VTDecoderXPCService", 131, SectionWHITELIST, PF::MatchExact },
	{ "/Final Cut Pro.app/Contents/MacOS/Final Cut Pro", 47, SectionWHITELIST, PF::MatchSuffix },
	{ "/Motion.app/Contents/MacOS/Motion", 33, SectionWHITELIST, PF::MatchSuffix },
	{ "/Compressor.app/Contents/MacOS/Compressor", 41, SectionWHITELIST, PF::MatchSuffix },
	{ "/IINA.app/Contents/MacOS/IINA", 29, SectionWHITELIST, PF::MatchSuffix },
	{ "/VLC.app/Contents/MacOS/VLC", 27, SectionWHITELIST, PF::MatchSuffix },
	{ "/MacX Video Converter Pro.app/Contents/MacOS/MacX Video Converter Pro", 69, SectionWHITELIST, PF::MatchSuffix },
	{ "/XviD4PSP.app/Contents/MacOS/XviD4PSP", 37, SectionWHITELIST, PF::MatchSuffix },
	{ "/Opera.app/Contents/MacOS/Opera", 31, SectionWHITELIST, PF::MatchSuffix },
	{ "/Firefox.app/Contents/MacOS/firefox", 35, SectionWHITELIST, PF::MatchAny },
	{ "/Slack.app/Contents/MacOS/Slack", 31, SectionWHITELIST, PF::MatchSuffix },
	{ "/Visual Studio Code.app/Contents/MacOS/Electron", 47, SectionWHITELIST, PF::MatchSuffix },
	{ "/Google Chrome.app/Contents/MacOS/Google Chrome", 47, SectionWHITELIST, PF::MatchSuffix },
	{ "/VDADecoderChecker", 18, SectionWHITELIST, PF::MatchSuffix },
	{ "/DaVinci Resolve.app/Contents/MacOS/Resolve", 43, SectionWHITELIST, PF::MatchSuffix },
	{ "/bin/mpv", 8, SectionWHITELIST, PF::MatchSuffix },
	{ "/Applications/FaceTime.app/Contents/MacOS/FaceTime", 50, SectionWHITELIST, PF::MatchExact },
	{ "/usr/libexec/AirPlayXPCHelper", 29, SectionWHITELIST, PF::MatchExact },
	{ "/Live Screen Capture.app/Contents/MacOS/Live Screen Capture", 59, SectionWHITELIST, PF::MatchSuffix },
	{ "/iMovie.app/Contents/MacOS/iMovie", 33, SectionWHITELIST, PF::MatchSuffix },
};

const size_t ADDPR(procInfoSize) {27};
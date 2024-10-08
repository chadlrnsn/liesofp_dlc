#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ScreenShotComparisonTools

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct ScreenShotComparisonTools.ImageTolerance
// 0x0010 (0x0010 - 0x0000)
struct FImageTolerance final
{
public:
	uint8                                         Red;                                               // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Green;                                             // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Blue;                                              // 0x0002(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         ALPHA;                                             // 0x0003(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MinBrightness;                                     // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         MaxBrightness;                                     // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IgnoreAntiAliasing;                                // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          IgnoreColors;                                      // 0x0007(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumLocalError;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                         MaximumGlobalError;                                // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FImageTolerance) == 0x000004, "Wrong alignment on FImageTolerance");
static_assert(sizeof(FImageTolerance) == 0x000010, "Wrong size on FImageTolerance");
static_assert(offsetof(FImageTolerance, Red) == 0x000000, "Member 'FImageTolerance::Red' has a wrong offset!");
static_assert(offsetof(FImageTolerance, Green) == 0x000001, "Member 'FImageTolerance::Green' has a wrong offset!");
static_assert(offsetof(FImageTolerance, Blue) == 0x000002, "Member 'FImageTolerance::Blue' has a wrong offset!");
static_assert(offsetof(FImageTolerance, ALPHA) == 0x000003, "Member 'FImageTolerance::ALPHA' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MinBrightness) == 0x000004, "Member 'FImageTolerance::MinBrightness' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MaxBrightness) == 0x000005, "Member 'FImageTolerance::MaxBrightness' has a wrong offset!");
static_assert(offsetof(FImageTolerance, IgnoreAntiAliasing) == 0x000006, "Member 'FImageTolerance::IgnoreAntiAliasing' has a wrong offset!");
static_assert(offsetof(FImageTolerance, IgnoreColors) == 0x000007, "Member 'FImageTolerance::IgnoreColors' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MaximumLocalError) == 0x000008, "Member 'FImageTolerance::MaximumLocalError' has a wrong offset!");
static_assert(offsetof(FImageTolerance, MaximumGlobalError) == 0x00000C, "Member 'FImageTolerance::MaximumGlobalError' has a wrong offset!");

// ScriptStruct ScreenShotComparisonTools.ImageComparisonResult
// 0x00D8 (0x00D8 - 0x0000)
struct FImageComparisonResult final
{
public:
	struct FDateTime                              CreationTime;                                      // 0x0000(0x0008)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SourcePlatform;                                    // 0x0008(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 SourceRHI;                                         // 0x0018(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 IdealApprovedFolderPath;                           // 0x0028(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ApprovedFilePath;                                  // 0x0038(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 IncomingFilePath;                                  // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ComparisonFilePath;                                // 0x0058(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReportApprovedFilePath;                            // 0x0068(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReportIncomingFilePath;                            // 0x0078(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 ReportComparisonFilePath;                          // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        MaxLocalDifference;                                // 0x0098(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                        GlobalDifference;                                  // 0x00A0(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FImageTolerance                        Tolerance;                                         // 0x00A8(0x0010)(NoDestructor, NativeAccessSpecifierPublic)
	class FText                                   ErrorMessage;                                      // 0x00B8(0x0018)(NativeAccessSpecifierPublic)
	int32                                         Version;                                           // 0x00D0(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_D4[0x4];                                       // 0x00D4(0x0004)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(FImageComparisonResult) == 0x000008, "Wrong alignment on FImageComparisonResult");
static_assert(sizeof(FImageComparisonResult) == 0x0000D8, "Wrong size on FImageComparisonResult");
static_assert(offsetof(FImageComparisonResult, CreationTime) == 0x000000, "Member 'FImageComparisonResult::CreationTime' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, SourcePlatform) == 0x000008, "Member 'FImageComparisonResult::SourcePlatform' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, SourceRHI) == 0x000018, "Member 'FImageComparisonResult::SourceRHI' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, IdealApprovedFolderPath) == 0x000028, "Member 'FImageComparisonResult::IdealApprovedFolderPath' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ApprovedFilePath) == 0x000038, "Member 'FImageComparisonResult::ApprovedFilePath' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, IncomingFilePath) == 0x000048, "Member 'FImageComparisonResult::IncomingFilePath' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ComparisonFilePath) == 0x000058, "Member 'FImageComparisonResult::ComparisonFilePath' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ReportApprovedFilePath) == 0x000068, "Member 'FImageComparisonResult::ReportApprovedFilePath' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ReportIncomingFilePath) == 0x000078, "Member 'FImageComparisonResult::ReportIncomingFilePath' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ReportComparisonFilePath) == 0x000088, "Member 'FImageComparisonResult::ReportComparisonFilePath' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, MaxLocalDifference) == 0x000098, "Member 'FImageComparisonResult::MaxLocalDifference' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, GlobalDifference) == 0x0000A0, "Member 'FImageComparisonResult::GlobalDifference' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, Tolerance) == 0x0000A8, "Member 'FImageComparisonResult::Tolerance' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, ErrorMessage) == 0x0000B8, "Member 'FImageComparisonResult::ErrorMessage' has a wrong offset!");
static_assert(offsetof(FImageComparisonResult, Version) == 0x0000D0, "Member 'FImageComparisonResult::Version' has a wrong offset!");

// ScriptStruct ScreenShotComparisonTools.ScreenshotFallbackEntry
// 0x0020 (0x0020 - 0x0000)
struct FScreenshotFallbackEntry final
{
public:
	class FString                                 Parent;                                            // 0x0000(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                 Child;                                             // 0x0010(0x0010)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FScreenshotFallbackEntry) == 0x000008, "Wrong alignment on FScreenshotFallbackEntry");
static_assert(sizeof(FScreenshotFallbackEntry) == 0x000020, "Wrong size on FScreenshotFallbackEntry");
static_assert(offsetof(FScreenshotFallbackEntry, Parent) == 0x000000, "Member 'FScreenshotFallbackEntry::Parent' has a wrong offset!");
static_assert(offsetof(FScreenshotFallbackEntry, Child) == 0x000010, "Member 'FScreenshotFallbackEntry::Child' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: OpenXRHandTracking

#include "Basic.hpp"

#include "LiveLinkInterface_classes.hpp"
#include "OpenXRHandTracking_structs.hpp"
#include "LiveLink_classes.hpp"


namespace SDK
{

// Class OpenXRHandTracking.LiveLinkOpenXRHandTrackingSourceFactory
// 0x0010 (0x0038 - 0x0028)
class ULiveLinkOpenXRHandTrackingSourceFactory final : public ULiveLinkSourceFactory
{
public:
	uint8                                         Pad_28[0x10];                                      // 0x0028(0x0010)(Fixing Struct Size After Last Property [ Dumper-7 ])

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"LiveLinkOpenXRHandTrackingSourceFactory">();
	}
	static class ULiveLinkOpenXRHandTrackingSourceFactory* GetDefaultObj()
	{
		return GetDefaultObjImpl<ULiveLinkOpenXRHandTrackingSourceFactory>();
	}
};
static_assert(alignof(ULiveLinkOpenXRHandTrackingSourceFactory) == 0x000008, "Wrong alignment on ULiveLinkOpenXRHandTrackingSourceFactory");
static_assert(sizeof(ULiveLinkOpenXRHandTrackingSourceFactory) == 0x000038, "Wrong size on ULiveLinkOpenXRHandTrackingSourceFactory");

// Class OpenXRHandTracking.OpenXRHandTrackingLiveLinkRemapAsset
// 0x0058 (0x0080 - 0x0028)
class UOpenXRHandTrackingLiveLinkRemapAsset final : public ULiveLinkRetargetAsset
{
public:
	bool                                          bHasMetacarpals;                                   // 0x0028(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bRetargetRotationOnly;                             // 0x0029(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                             SwizzleX;                                          // 0x002A(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                             SwizzleY;                                          // 0x002B(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                             SwizzleZ;                                          // 0x002C(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	EQuatSwizzleAxisB                             SwizzleW;                                          // 0x002D(0x0001)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_2E[0x2];                                       // 0x002E(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TMap<class FName, class FName>                HandTrackingBoneNameMap;                           // 0x0030(0x0050)(Edit, NativeAccessSpecifierPublic)

public:
	static class UClass* StaticClass()
	{
		return StaticClassImpl<"OpenXRHandTrackingLiveLinkRemapAsset">();
	}
	static class UOpenXRHandTrackingLiveLinkRemapAsset* GetDefaultObj()
	{
		return GetDefaultObjImpl<UOpenXRHandTrackingLiveLinkRemapAsset>();
	}
};
static_assert(alignof(UOpenXRHandTrackingLiveLinkRemapAsset) == 0x000008, "Wrong alignment on UOpenXRHandTrackingLiveLinkRemapAsset");
static_assert(sizeof(UOpenXRHandTrackingLiveLinkRemapAsset) == 0x000080, "Wrong size on UOpenXRHandTrackingLiveLinkRemapAsset");
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, bHasMetacarpals) == 0x000028, "Member 'UOpenXRHandTrackingLiveLinkRemapAsset::bHasMetacarpals' has a wrong offset!");
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, bRetargetRotationOnly) == 0x000029, "Member 'UOpenXRHandTrackingLiveLinkRemapAsset::bRetargetRotationOnly' has a wrong offset!");
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleX) == 0x00002A, "Member 'UOpenXRHandTrackingLiveLinkRemapAsset::SwizzleX' has a wrong offset!");
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleY) == 0x00002B, "Member 'UOpenXRHandTrackingLiveLinkRemapAsset::SwizzleY' has a wrong offset!");
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleZ) == 0x00002C, "Member 'UOpenXRHandTrackingLiveLinkRemapAsset::SwizzleZ' has a wrong offset!");
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleW) == 0x00002D, "Member 'UOpenXRHandTrackingLiveLinkRemapAsset::SwizzleW' has a wrong offset!");
static_assert(offsetof(UOpenXRHandTrackingLiveLinkRemapAsset, HandTrackingBoneNameMap) == 0x000030, "Member 'UOpenXRHandTrackingLiveLinkRemapAsset::HandTrackingBoneNameMap' has a wrong offset!");

}

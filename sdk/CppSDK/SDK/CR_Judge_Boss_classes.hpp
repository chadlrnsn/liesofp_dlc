#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CR_Judge_Boss

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"
#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass CR_Judge_Boss.CR_Judge_Boss_C
// 0x0070 (0x06C0 - 0x0650)
class UCR_Judge_Boss_C final : public UControlRig
{
public:
	bool                                          DoBakeIK;                                          // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          bAutoLandTrace;                                    // 0x0651(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_652[0x2];                                      // 0x0652(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FootOffset_L_Target;                               // 0x0654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_R_Target;                               // 0x0658(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_L;                                      // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_R;                                      // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PelvisOffset;                                      // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_L_Target;                               // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_R_Target;                               // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_L;                                      // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_R;                                      // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AutoLandTraceAlpha;                                // 0x0678(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         AutoLandTraceAlpha_Target;                         // 0x067C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_Broken_Spine1;                               // 0x0680(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_Broken_Spine2;                               // 0x068C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_Normal_Spine1;                               // 0x0698(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Scale_Normal_Spine2;                               // 0x06A4(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHandIK;                                      // 0x06B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHandIK_L;                                    // 0x06B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHandIK_R;                                    // 0x06B8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CR_Judge_Boss_C">();
	}
	static class UCR_Judge_Boss_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCR_Judge_Boss_C>();
	}
};
static_assert(alignof(UCR_Judge_Boss_C) == 0x000008, "Wrong alignment on UCR_Judge_Boss_C");
static_assert(sizeof(UCR_Judge_Boss_C) == 0x0006C0, "Wrong size on UCR_Judge_Boss_C");
static_assert(offsetof(UCR_Judge_Boss_C, DoBakeIK) == 0x000650, "Member 'UCR_Judge_Boss_C::DoBakeIK' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, bAutoLandTrace) == 0x000651, "Member 'UCR_Judge_Boss_C::bAutoLandTrace' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, FootOffset_L_Target) == 0x000654, "Member 'UCR_Judge_Boss_C::FootOffset_L_Target' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, FootOffset_R_Target) == 0x000658, "Member 'UCR_Judge_Boss_C::FootOffset_R_Target' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, FootOffset_L) == 0x00065C, "Member 'UCR_Judge_Boss_C::FootOffset_L' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, FootOffset_R) == 0x000660, "Member 'UCR_Judge_Boss_C::FootOffset_R' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, PelvisOffset) == 0x000664, "Member 'UCR_Judge_Boss_C::PelvisOffset' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, HandOffset_L_Target) == 0x000668, "Member 'UCR_Judge_Boss_C::HandOffset_L_Target' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, HandOffset_R_Target) == 0x00066C, "Member 'UCR_Judge_Boss_C::HandOffset_R_Target' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, HandOffset_L) == 0x000670, "Member 'UCR_Judge_Boss_C::HandOffset_L' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, HandOffset_R) == 0x000674, "Member 'UCR_Judge_Boss_C::HandOffset_R' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, AutoLandTraceAlpha) == 0x000678, "Member 'UCR_Judge_Boss_C::AutoLandTraceAlpha' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, AutoLandTraceAlpha_Target) == 0x00067C, "Member 'UCR_Judge_Boss_C::AutoLandTraceAlpha_Target' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, Scale_Broken_Spine1) == 0x000680, "Member 'UCR_Judge_Boss_C::Scale_Broken_Spine1' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, Scale_Broken_Spine2) == 0x00068C, "Member 'UCR_Judge_Boss_C::Scale_Broken_Spine2' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, Scale_Normal_Spine1) == 0x000698, "Member 'UCR_Judge_Boss_C::Scale_Normal_Spine1' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, Scale_Normal_Spine2) == 0x0006A4, "Member 'UCR_Judge_Boss_C::Scale_Normal_Spine2' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, EnableHandIK) == 0x0006B0, "Member 'UCR_Judge_Boss_C::EnableHandIK' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, EnableHandIK_L) == 0x0006B4, "Member 'UCR_Judge_Boss_C::EnableHandIK_L' has a wrong offset!");
static_assert(offsetof(UCR_Judge_Boss_C, EnableHandIK_R) == 0x0006B8, "Member 'UCR_Judge_Boss_C::EnableHandIK_R' has a wrong offset!");

}


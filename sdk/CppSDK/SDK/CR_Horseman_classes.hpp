#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CR_Horseman

#include "Basic.hpp"

#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass CR_Horseman.CR_Horseman_C
// 0x0030 (0x0680 - 0x0650)
class UCR_Horseman_C final : public UControlRig
{
public:
	bool                                          DoBakeIK;                                          // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651[0x3];                                      // 0x0651(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         EnableFootIK;                                      // 0x0654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableFootIK_Target;                               // 0x0658(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_L;                                      // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_L_Target;                               // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_R;                                      // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_R_Target;                               // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PelvisOffset;                                      // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHandIK;                                      // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHandIK_L;                                    // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableHandIK_R;                                    // 0x0678(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         WeaponToRHand;                                     // 0x067C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CR_Horseman_C">();
	}
	static class UCR_Horseman_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCR_Horseman_C>();
	}
};
static_assert(alignof(UCR_Horseman_C) == 0x000008, "Wrong alignment on UCR_Horseman_C");
static_assert(sizeof(UCR_Horseman_C) == 0x000680, "Wrong size on UCR_Horseman_C");
static_assert(offsetof(UCR_Horseman_C, DoBakeIK) == 0x000650, "Member 'UCR_Horseman_C::DoBakeIK' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, EnableFootIK) == 0x000654, "Member 'UCR_Horseman_C::EnableFootIK' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, EnableFootIK_Target) == 0x000658, "Member 'UCR_Horseman_C::EnableFootIK_Target' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, FootOffset_L) == 0x00065C, "Member 'UCR_Horseman_C::FootOffset_L' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, FootOffset_L_Target) == 0x000660, "Member 'UCR_Horseman_C::FootOffset_L_Target' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, FootOffset_R) == 0x000664, "Member 'UCR_Horseman_C::FootOffset_R' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, FootOffset_R_Target) == 0x000668, "Member 'UCR_Horseman_C::FootOffset_R_Target' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, PelvisOffset) == 0x00066C, "Member 'UCR_Horseman_C::PelvisOffset' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, EnableHandIK) == 0x000670, "Member 'UCR_Horseman_C::EnableHandIK' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, EnableHandIK_L) == 0x000674, "Member 'UCR_Horseman_C::EnableHandIK_L' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, EnableHandIK_R) == 0x000678, "Member 'UCR_Horseman_C::EnableHandIK_R' has a wrong offset!");
static_assert(offsetof(UCR_Horseman_C, WeaponToRHand) == 0x00067C, "Member 'UCR_Horseman_C::WeaponToRHand' has a wrong offset!");

}

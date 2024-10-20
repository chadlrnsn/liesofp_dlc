#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: CR_WatchDog

#include "Basic.hpp"

#include "ControlRig_classes.hpp"


namespace SDK
{

// ControlRigBlueprintGeneratedClass CR_WatchDog.CR_WatchDog_C
// 0x0030 (0x0680 - 0x0650)
class UCR_WatchDog_C final : public UControlRig
{
public:
	bool                                          DoBakeIK;                                          // 0x0650(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_651[0x3];                                      // 0x0651(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FootOffset_L_Target;                               // 0x0654(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_R_Target;                               // 0x0658(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_L;                                      // 0x065C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FootOffset_R;                                      // 0x0660(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         PelvisOffset;                                      // 0x0664(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_FL_Target;                              // 0x0668(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_FR_Target;                              // 0x066C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_L;                                      // 0x0670(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HandOffset_R;                                      // 0x0674(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableFootIK;                                      // 0x0678(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         EnableFootIK_Target;                               // 0x067C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"CR_WatchDog_C">();
	}
	static class UCR_WatchDog_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UCR_WatchDog_C>();
	}
};
static_assert(alignof(UCR_WatchDog_C) == 0x000008, "Wrong alignment on UCR_WatchDog_C");
static_assert(sizeof(UCR_WatchDog_C) == 0x000680, "Wrong size on UCR_WatchDog_C");
static_assert(offsetof(UCR_WatchDog_C, DoBakeIK) == 0x000650, "Member 'UCR_WatchDog_C::DoBakeIK' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, FootOffset_L_Target) == 0x000654, "Member 'UCR_WatchDog_C::FootOffset_L_Target' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, FootOffset_R_Target) == 0x000658, "Member 'UCR_WatchDog_C::FootOffset_R_Target' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, FootOffset_L) == 0x00065C, "Member 'UCR_WatchDog_C::FootOffset_L' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, FootOffset_R) == 0x000660, "Member 'UCR_WatchDog_C::FootOffset_R' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, PelvisOffset) == 0x000664, "Member 'UCR_WatchDog_C::PelvisOffset' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, HandOffset_FL_Target) == 0x000668, "Member 'UCR_WatchDog_C::HandOffset_FL_Target' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, HandOffset_FR_Target) == 0x00066C, "Member 'UCR_WatchDog_C::HandOffset_FR_Target' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, HandOffset_L) == 0x000670, "Member 'UCR_WatchDog_C::HandOffset_L' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, HandOffset_R) == 0x000674, "Member 'UCR_WatchDog_C::HandOffset_R' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, EnableFootIK) == 0x000678, "Member 'UCR_WatchDog_C::EnableFootIK' has a wrong offset!");
static_assert(offsetof(UCR_WatchDog_C, EnableFootIK_Target) == 0x00067C, "Member 'UCR_WatchDog_C::EnableFootIK_Target' has a wrong offset!");

}


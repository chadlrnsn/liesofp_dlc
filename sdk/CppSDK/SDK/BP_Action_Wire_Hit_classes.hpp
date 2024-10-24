#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Wire_Hit

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "BP_Action_HitBase_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Wire_Hit.BP_Action_Wire_Hit_C
// 0x0030 (0x0450 - 0x0420)
class UBP_Action_Wire_Hit_C final : public UBP_Action_HitBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Wire_Hit_C;               // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   CommonAnimCodeName;                                // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                               CachedAlignRot;                                    // 0x0430(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          CachedDoNotRotate;                                 // 0x043C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_43D[0x3];                                      // 0x043D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Cached_CalcHitAnimDuration;                        // 0x0440(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ApplyInput_GuardDash_Duration_Ratio;               // 0x0444(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Timer_OnHitAnimDuration;                           // 0x0448(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Wire_Hit(int32 EntryPoint);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStart();
	void HitDurationEnded();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Wire_Hit_C">();
	}
	static class UBP_Action_Wire_Hit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Wire_Hit_C>();
	}
};
static_assert(alignof(UBP_Action_Wire_Hit_C) == 0x000008, "Wrong alignment on UBP_Action_Wire_Hit_C");
static_assert(sizeof(UBP_Action_Wire_Hit_C) == 0x000450, "Wrong size on UBP_Action_Wire_Hit_C");
static_assert(offsetof(UBP_Action_Wire_Hit_C, UberGraphFrame_BP_Action_Wire_Hit_C) == 0x000420, "Member 'UBP_Action_Wire_Hit_C::UberGraphFrame_BP_Action_Wire_Hit_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Wire_Hit_C, CommonAnimCodeName) == 0x000428, "Member 'UBP_Action_Wire_Hit_C::CommonAnimCodeName' has a wrong offset!");
static_assert(offsetof(UBP_Action_Wire_Hit_C, CachedAlignRot) == 0x000430, "Member 'UBP_Action_Wire_Hit_C::CachedAlignRot' has a wrong offset!");
static_assert(offsetof(UBP_Action_Wire_Hit_C, CachedDoNotRotate) == 0x00043C, "Member 'UBP_Action_Wire_Hit_C::CachedDoNotRotate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Wire_Hit_C, Cached_CalcHitAnimDuration) == 0x000440, "Member 'UBP_Action_Wire_Hit_C::Cached_CalcHitAnimDuration' has a wrong offset!");
static_assert(offsetof(UBP_Action_Wire_Hit_C, ApplyInput_GuardDash_Duration_Ratio) == 0x000444, "Member 'UBP_Action_Wire_Hit_C::ApplyInput_GuardDash_Duration_Ratio' has a wrong offset!");
static_assert(offsetof(UBP_Action_Wire_Hit_C, Timer_OnHitAnimDuration) == 0x000448, "Member 'UBP_Action_Wire_Hit_C::Timer_OnHitAnimDuration' has a wrong offset!");

}


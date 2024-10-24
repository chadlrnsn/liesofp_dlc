#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Grabbed

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "BP_Action_HitBase_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Grabbed.BP_Action_Grabbed_C
// 0x0030 (0x0450 - 0x0420)
class UBP_Action_Grabbed_C final : public UBP_Action_HitBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Grabbed_C;                // 0x0420(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   PhysicsPivotBoneName;                              // 0x0428(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Option_WatchInfiniteGrabbed;                       // 0x0430(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                         Option_WatchInfiniteGrabbedTime;                   // 0x0438(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                                Cached_DesireLocation;                             // 0x043C(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cached_ScaledCapsuleHalfHeight_Victim;             // 0x0448(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cached_ScaledCapsuleHalfHeight_Attacker;           // 0x044C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Grabbed(int32 EntryPoint);
	void OnStart();
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnGrabbedPlayIsTooLong();
	void OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Grabbed_C">();
	}
	static class UBP_Action_Grabbed_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Grabbed_C>();
	}
};
static_assert(alignof(UBP_Action_Grabbed_C) == 0x000008, "Wrong alignment on UBP_Action_Grabbed_C");
static_assert(sizeof(UBP_Action_Grabbed_C) == 0x000450, "Wrong size on UBP_Action_Grabbed_C");
static_assert(offsetof(UBP_Action_Grabbed_C, UberGraphFrame_BP_Action_Grabbed_C) == 0x000420, "Member 'UBP_Action_Grabbed_C::UberGraphFrame_BP_Action_Grabbed_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grabbed_C, PhysicsPivotBoneName) == 0x000428, "Member 'UBP_Action_Grabbed_C::PhysicsPivotBoneName' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grabbed_C, Option_WatchInfiniteGrabbed) == 0x000430, "Member 'UBP_Action_Grabbed_C::Option_WatchInfiniteGrabbed' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grabbed_C, Option_WatchInfiniteGrabbedTime) == 0x000438, "Member 'UBP_Action_Grabbed_C::Option_WatchInfiniteGrabbedTime' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grabbed_C, Cached_DesireLocation) == 0x00043C, "Member 'UBP_Action_Grabbed_C::Cached_DesireLocation' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grabbed_C, Cached_ScaledCapsuleHalfHeight_Victim) == 0x000448, "Member 'UBP_Action_Grabbed_C::Cached_ScaledCapsuleHalfHeight_Victim' has a wrong offset!");
static_assert(offsetof(UBP_Action_Grabbed_C, Cached_ScaledCapsuleHalfHeight_Attacker) == 0x00044C, "Member 'UBP_Action_Grabbed_C::Cached_ScaledCapsuleHalfHeight_Attacker' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_DragonGlaive_HND

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_DragonGlaive_HND.BP_DragonGlaive_HND_C
// 0x0040 (0x0298 - 0x0258)
class UBP_DragonGlaive_HND_C final : public ULAction_LoopAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FVector                                Cached_Lever;                                      // 0x0260(0x000C)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Option_RotationTime;                               // 0x026C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Cached_LeverAngle;                                 // 0x0270(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_274[0x4];                                      // 0x0274(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UAnimMontage*                           PullingMontage;                                    // 0x0278(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PullingMontage_2;                                  // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PullingMontage_3;                                  // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                           PullingMontage_4;                                  // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_DragonGlaive_HND(int32 EntryPoint);
	void OnStopByMe(class ULActBase* StoppingAction);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_DragonGlaive_HND_C">();
	}
	static class UBP_DragonGlaive_HND_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_DragonGlaive_HND_C>();
	}
};
static_assert(alignof(UBP_DragonGlaive_HND_C) == 0x000008, "Wrong alignment on UBP_DragonGlaive_HND_C");
static_assert(sizeof(UBP_DragonGlaive_HND_C) == 0x000298, "Wrong size on UBP_DragonGlaive_HND_C");
static_assert(offsetof(UBP_DragonGlaive_HND_C, UberGraphFrame) == 0x000258, "Member 'UBP_DragonGlaive_HND_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_DragonGlaive_HND_C, Cached_Lever) == 0x000260, "Member 'UBP_DragonGlaive_HND_C::Cached_Lever' has a wrong offset!");
static_assert(offsetof(UBP_DragonGlaive_HND_C, Option_RotationTime) == 0x00026C, "Member 'UBP_DragonGlaive_HND_C::Option_RotationTime' has a wrong offset!");
static_assert(offsetof(UBP_DragonGlaive_HND_C, Cached_LeverAngle) == 0x000270, "Member 'UBP_DragonGlaive_HND_C::Cached_LeverAngle' has a wrong offset!");
static_assert(offsetof(UBP_DragonGlaive_HND_C, PullingMontage) == 0x000278, "Member 'UBP_DragonGlaive_HND_C::PullingMontage' has a wrong offset!");
static_assert(offsetof(UBP_DragonGlaive_HND_C, PullingMontage_2) == 0x000280, "Member 'UBP_DragonGlaive_HND_C::PullingMontage_2' has a wrong offset!");
static_assert(offsetof(UBP_DragonGlaive_HND_C, PullingMontage_3) == 0x000288, "Member 'UBP_DragonGlaive_HND_C::PullingMontage_3' has a wrong offset!");
static_assert(offsetof(UBP_DragonGlaive_HND_C, PullingMontage_4) == 0x000290, "Member 'UBP_DragonGlaive_HND_C::PullingMontage_4' has a wrong offset!");

}

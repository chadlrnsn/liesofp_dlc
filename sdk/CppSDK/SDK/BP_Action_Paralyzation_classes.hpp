#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Paralyzation

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Action_DMG_STAND_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Paralyzation.BP_Action_Paralyzation_C
// 0x0018 (0x0688 - 0x0670)
class UBP_Action_Paralyzation_C final : public UBP_Action_DMG_STAND_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_Paralyzation_C;           // 0x0670(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                           LoopCancelTimer;                                   // 0x0678(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                   CommonAnim_Paralyzation;                           // 0x0680(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_Paralyzation(int32 EntryPoint);
	void OnGroggyEnded();
	void ProcessHitAnim();
	void OnStart();
	void OnStop(class ULActBase* ReasonAction, class FName Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Paralyzation_C">();
	}
	static class UBP_Action_Paralyzation_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Paralyzation_C>();
	}
};
static_assert(alignof(UBP_Action_Paralyzation_C) == 0x000008, "Wrong alignment on UBP_Action_Paralyzation_C");
static_assert(sizeof(UBP_Action_Paralyzation_C) == 0x000688, "Wrong size on UBP_Action_Paralyzation_C");
static_assert(offsetof(UBP_Action_Paralyzation_C, UberGraphFrame_BP_Action_Paralyzation_C) == 0x000670, "Member 'UBP_Action_Paralyzation_C::UberGraphFrame_BP_Action_Paralyzation_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_Paralyzation_C, LoopCancelTimer) == 0x000678, "Member 'UBP_Action_Paralyzation_C::LoopCancelTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_Paralyzation_C, CommonAnim_Paralyzation) == 0x000680, "Member 'UBP_Action_Paralyzation_C::CommonAnim_Paralyzation' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_GuardEx_Parry

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_GuardEx_Parry.BP_Action_GuardEx_Parry_C
// 0x0010 (0x0268 - 0x0258)
class UBP_Action_GuardEx_Parry_C final : public ULAction_LoopAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   FrenzySkill;                                       // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_GuardEx_Parry(int32 EntryPoint);
	void OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID);
	void OnCurrMontageBlendOutStarted(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID);
	void Hit(class ULHitProcContext* HitContext);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_GuardEx_Parry_C">();
	}
	static class UBP_Action_GuardEx_Parry_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_GuardEx_Parry_C>();
	}
};
static_assert(alignof(UBP_Action_GuardEx_Parry_C) == 0x000008, "Wrong alignment on UBP_Action_GuardEx_Parry_C");
static_assert(sizeof(UBP_Action_GuardEx_Parry_C) == 0x000268, "Wrong size on UBP_Action_GuardEx_Parry_C");
static_assert(offsetof(UBP_Action_GuardEx_Parry_C, UberGraphFrame) == 0x000258, "Member 'UBP_Action_GuardEx_Parry_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_GuardEx_Parry_C, FrenzySkill) == 0x000260, "Member 'UBP_Action_GuardEx_Parry_C::FrenzySkill' has a wrong offset!");

}

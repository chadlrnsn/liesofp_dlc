#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_FatalAttack_Victim_BeforeHit

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Action_FatalAttack_VictimBase_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_FatalAttack_Victim_BeforeHit.BP_Action_FatalAttack_Victim_BeforeHit_C
// 0x0018 (0x0450 - 0x0438)
class UBP_Action_FatalAttack_Victim_BeforeHit_C final : public UBP_Action_FatalAttack_VictimBase_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Action_FatalAttack_Victim_BeforeHit_C; // 0x0438(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                   CommonAnim_FatalNPCHit_Before;                     // 0x0440(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           Cached_TimerTooLongLooping;                        // 0x0448(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_FatalAttack_Victim_BeforeHit(int32 EntryPoint);
	void OnTooLongFalling();
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStopByMe(class ULActBase* StoppingAction);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_FatalAttack_Victim_BeforeHit_C">();
	}
	static class UBP_Action_FatalAttack_Victim_BeforeHit_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_FatalAttack_Victim_BeforeHit_C>();
	}
};
static_assert(alignof(UBP_Action_FatalAttack_Victim_BeforeHit_C) == 0x000008, "Wrong alignment on UBP_Action_FatalAttack_Victim_BeforeHit_C");
static_assert(sizeof(UBP_Action_FatalAttack_Victim_BeforeHit_C) == 0x000450, "Wrong size on UBP_Action_FatalAttack_Victim_BeforeHit_C");
static_assert(offsetof(UBP_Action_FatalAttack_Victim_BeforeHit_C, UberGraphFrame_BP_Action_FatalAttack_Victim_BeforeHit_C) == 0x000438, "Member 'UBP_Action_FatalAttack_Victim_BeforeHit_C::UberGraphFrame_BP_Action_FatalAttack_Victim_BeforeHit_C' has a wrong offset!");
static_assert(offsetof(UBP_Action_FatalAttack_Victim_BeforeHit_C, CommonAnim_FatalNPCHit_Before) == 0x000440, "Member 'UBP_Action_FatalAttack_Victim_BeforeHit_C::CommonAnim_FatalNPCHit_Before' has a wrong offset!");
static_assert(offsetof(UBP_Action_FatalAttack_Victim_BeforeHit_C, Cached_TimerTooLongLooping) == 0x000448, "Member 'UBP_Action_FatalAttack_Victim_BeforeHit_C::Cached_TimerTooLongLooping' has a wrong offset!");

}

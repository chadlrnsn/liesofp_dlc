#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_RockDrill_LoopingCharge

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_RockDrill_LoopingCharge.BP_Action_RockDrill_LoopingCharge_C
// 0x0010 (0x0280 - 0x0270)
class UBP_Action_RockDrill_LoopingCharge_C final : public ULAction_MultiAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          SwingStarted;                                      // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Swing_End_Type;                                    // 0x0279(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_RockDrill_LoopingCharge(int32 EntryPoint);
	void StaminaExhausted();
	void OnTick(float DeltaTime);
	void OnCommandOccurred_Event(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStart();
	int32 OnSelectNextAnim(class UAnimMontage* Montage, bool bInterrupted, int32 CurrentAnimIndex);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_RockDrill_LoopingCharge_C">();
	}
	static class UBP_Action_RockDrill_LoopingCharge_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_RockDrill_LoopingCharge_C>();
	}
};
static_assert(alignof(UBP_Action_RockDrill_LoopingCharge_C) == 0x000008, "Wrong alignment on UBP_Action_RockDrill_LoopingCharge_C");
static_assert(sizeof(UBP_Action_RockDrill_LoopingCharge_C) == 0x000280, "Wrong size on UBP_Action_RockDrill_LoopingCharge_C");
static_assert(offsetof(UBP_Action_RockDrill_LoopingCharge_C, UberGraphFrame) == 0x000270, "Member 'UBP_Action_RockDrill_LoopingCharge_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_RockDrill_LoopingCharge_C, SwingStarted) == 0x000278, "Member 'UBP_Action_RockDrill_LoopingCharge_C::SwingStarted' has a wrong offset!");
static_assert(offsetof(UBP_Action_RockDrill_LoopingCharge_C, Swing_End_Type) == 0x000279, "Member 'UBP_Action_RockDrill_LoopingCharge_C::Swing_End_Type' has a wrong offset!");

}

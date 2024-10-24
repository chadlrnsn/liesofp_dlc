#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Interaction

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_Interaction.BP_Action_Interaction_C
// 0x0098 (0x02F0 - 0x0258)
class UBP_Action_Interaction_C final : public ULAction_LoopAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	float                                         MoveDuration;                                      // 0x0260(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLGameObjectHandle                     Cached_MoveHandle;                                 // 0x0264(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FLGameObjectHandle                     Cached_RotateHandle;                               // 0x0268(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_26C[0x4];                                      // 0x026C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           Cached_MoveTimer;                                  // 0x0270(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ILInteractInterface>   Cached_InteractInterface;                          // 0x0278(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class FName                                   MotionCodeName_Rotate;                             // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequenceBase*                      Cached_TargetAnim_AfterRotate;                     // 0x0290(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MonInstId_Rotate;                                  // 0x0298(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLGameObjectHandle                     Handle_ForceMove;                                  // 0x029C(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                          IsStoppedByDialoging;                              // 0x02A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsPortal;                                          // 0x02A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2A2[0xE];                                      // 0x02A2(0x000E)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             InteractionStartTransform;                         // 0x02B0(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                          IsExistStartTransfrom;                             // 0x02E0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Action_Interaction(int32 EntryPoint);
	void OnCurrMontageBlendOutStarted(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID);
	void MoveToTargetAfterProcess();
	void Interaction_Stop();
	void Interaction_EndProcess();
	void OnCommandOccurred_Event(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck);
	void OnMoveToTargetComplete();
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID);
	void OnStart();
	void StartRotation();
	void AdjustStartTransform();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_Interaction_C">();
	}
	static class UBP_Action_Interaction_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_Interaction_C>();
	}
};
static_assert(alignof(UBP_Action_Interaction_C) == 0x000010, "Wrong alignment on UBP_Action_Interaction_C");
static_assert(sizeof(UBP_Action_Interaction_C) == 0x0002F0, "Wrong size on UBP_Action_Interaction_C");
static_assert(offsetof(UBP_Action_Interaction_C, UberGraphFrame) == 0x000258, "Member 'UBP_Action_Interaction_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, MoveDuration) == 0x000260, "Member 'UBP_Action_Interaction_C::MoveDuration' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, Cached_MoveHandle) == 0x000264, "Member 'UBP_Action_Interaction_C::Cached_MoveHandle' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, Cached_RotateHandle) == 0x000268, "Member 'UBP_Action_Interaction_C::Cached_RotateHandle' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, Cached_MoveTimer) == 0x000270, "Member 'UBP_Action_Interaction_C::Cached_MoveTimer' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, Cached_InteractInterface) == 0x000278, "Member 'UBP_Action_Interaction_C::Cached_InteractInterface' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, MotionCodeName_Rotate) == 0x000288, "Member 'UBP_Action_Interaction_C::MotionCodeName_Rotate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, Cached_TargetAnim_AfterRotate) == 0x000290, "Member 'UBP_Action_Interaction_C::Cached_TargetAnim_AfterRotate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, MonInstId_Rotate) == 0x000298, "Member 'UBP_Action_Interaction_C::MonInstId_Rotate' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, Handle_ForceMove) == 0x00029C, "Member 'UBP_Action_Interaction_C::Handle_ForceMove' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, IsStoppedByDialoging) == 0x0002A0, "Member 'UBP_Action_Interaction_C::IsStoppedByDialoging' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, IsPortal) == 0x0002A1, "Member 'UBP_Action_Interaction_C::IsPortal' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, InteractionStartTransform) == 0x0002B0, "Member 'UBP_Action_Interaction_C::InteractionStartTransform' has a wrong offset!");
static_assert(offsetof(UBP_Action_Interaction_C, IsExistStartTransfrom) == 0x0002E0, "Member 'UBP_Action_Interaction_C::IsExistStartTransfrom' has a wrong offset!");

}


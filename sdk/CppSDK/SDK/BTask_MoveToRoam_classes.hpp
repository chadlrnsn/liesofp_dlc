#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_MoveToRoam

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTask_MoveToRoam.BTask_MoveToRoam_C
// 0x0090 (0x0140 - 0x00B0)
class UBTask_MoveToRoam_C final : public ULBTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	struct FLAIMovementID                         MovementID;                                        // 0x00B8(0x004C)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	uint8                                         Pad_104[0x4];                                      // 0x0104(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLAILocationSampler                    Sampler;                                           // 0x0108(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FLAIMoveBehaviorID                     BehaviorID;                                        // 0x0138(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	int32                                         CustomRoamRange;                                   // 0x013C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTask_MoveToRoam(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTask_MoveToRoam_C">();
	}
	static class UBTask_MoveToRoam_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTask_MoveToRoam_C>();
	}
};
static_assert(alignof(UBTask_MoveToRoam_C) == 0x000008, "Wrong alignment on UBTask_MoveToRoam_C");
static_assert(sizeof(UBTask_MoveToRoam_C) == 0x000140, "Wrong size on UBTask_MoveToRoam_C");
static_assert(offsetof(UBTask_MoveToRoam_C, UberGraphFrame) == 0x0000B0, "Member 'UBTask_MoveToRoam_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToRoam_C, MovementID) == 0x0000B8, "Member 'UBTask_MoveToRoam_C::MovementID' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToRoam_C, Sampler) == 0x000108, "Member 'UBTask_MoveToRoam_C::Sampler' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToRoam_C, BehaviorID) == 0x000138, "Member 'UBTask_MoveToRoam_C::BehaviorID' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToRoam_C, CustomRoamRange) == 0x00013C, "Member 'UBTask_MoveToRoam_C::CustomRoamRange' has a wrong offset!");

}


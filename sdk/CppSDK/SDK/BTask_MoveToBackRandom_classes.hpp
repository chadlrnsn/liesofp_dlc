#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_MoveToBackRandom

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTask_MoveToBackRandom.BTask_MoveToBackRandom_C
// 0x0038 (0x00E8 - 0x00B0)
class UBTask_MoveToBackRandom_C final : public ULBTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	ELAITargetType                                TargetType;                                        // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B9[0x3];                                       // 0x00B9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         GoalRandomRadius;                                  // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RequestInterval;                                   // 0x00C0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RequestMoveTime;                                   // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLAIMoveBehaviorID                     BehaviorID;                                        // 0x00C8(0x0004)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	ELAIMoveSpeedType                             Move_Speed_Type;                                   // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Move_Speed_Rate;                                   // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Begin_Angle;                                       // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         End_Angle;                                         // 0x00D8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_DC[0x4];                                       // 0x00DC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class APawn*                                  Controlled_Pawn;                                   // 0x00E0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BTask_MoveToBackRandom(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTask_MoveToBackRandom_C">();
	}
	static class UBTask_MoveToBackRandom_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTask_MoveToBackRandom_C>();
	}
};
static_assert(alignof(UBTask_MoveToBackRandom_C) == 0x000008, "Wrong alignment on UBTask_MoveToBackRandom_C");
static_assert(sizeof(UBTask_MoveToBackRandom_C) == 0x0000E8, "Wrong size on UBTask_MoveToBackRandom_C");
static_assert(offsetof(UBTask_MoveToBackRandom_C, UberGraphFrame) == 0x0000B0, "Member 'UBTask_MoveToBackRandom_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, TargetType) == 0x0000B8, "Member 'UBTask_MoveToBackRandom_C::TargetType' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, GoalRandomRadius) == 0x0000BC, "Member 'UBTask_MoveToBackRandom_C::GoalRandomRadius' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, RequestInterval) == 0x0000C0, "Member 'UBTask_MoveToBackRandom_C::RequestInterval' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, RequestMoveTime) == 0x0000C4, "Member 'UBTask_MoveToBackRandom_C::RequestMoveTime' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, BehaviorID) == 0x0000C8, "Member 'UBTask_MoveToBackRandom_C::BehaviorID' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, Move_Speed_Type) == 0x0000CC, "Member 'UBTask_MoveToBackRandom_C::Move_Speed_Type' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, Move_Speed_Rate) == 0x0000D0, "Member 'UBTask_MoveToBackRandom_C::Move_Speed_Rate' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, Begin_Angle) == 0x0000D4, "Member 'UBTask_MoveToBackRandom_C::Begin_Angle' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, End_Angle) == 0x0000D8, "Member 'UBTask_MoveToBackRandom_C::End_Angle' has a wrong offset!");
static_assert(offsetof(UBTask_MoveToBackRandom_C, Controlled_Pawn) == 0x0000E0, "Member 'UBTask_MoveToBackRandom_C::Controlled_Pawn' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_InActorRange

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BDeco_InActorRange.BDeco_InActorRange_C
// 0x0018 (0x00C0 - 0x00A8)
class UBDeco_InActorRange_C final : public ULBDecorator_BlueprintBase
{
public:
	ELAIActorClassType                            Actor_Class_Type;                                  // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_A9[0x3];                                       // 0x00A9(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Check_Distance;                                    // 0x00AC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ELHostileType                                 Target_Hostile_Type;                               // 0x00B0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_B1[0x3];                                       // 0x00B1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Target_Code_Name;                                  // 0x00B4(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BDeco_InActorRange_C">();
	}
	static class UBDeco_InActorRange_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBDeco_InActorRange_C>();
	}
};
static_assert(alignof(UBDeco_InActorRange_C) == 0x000008, "Wrong alignment on UBDeco_InActorRange_C");
static_assert(sizeof(UBDeco_InActorRange_C) == 0x0000C0, "Wrong size on UBDeco_InActorRange_C");
static_assert(offsetof(UBDeco_InActorRange_C, Actor_Class_Type) == 0x0000A8, "Member 'UBDeco_InActorRange_C::Actor_Class_Type' has a wrong offset!");
static_assert(offsetof(UBDeco_InActorRange_C, Check_Distance) == 0x0000AC, "Member 'UBDeco_InActorRange_C::Check_Distance' has a wrong offset!");
static_assert(offsetof(UBDeco_InActorRange_C, Target_Hostile_Type) == 0x0000B0, "Member 'UBDeco_InActorRange_C::Target_Hostile_Type' has a wrong offset!");
static_assert(offsetof(UBDeco_InActorRange_C, Target_Code_Name) == 0x0000B4, "Member 'UBDeco_InActorRange_C::Target_Code_Name' has a wrong offset!");

}

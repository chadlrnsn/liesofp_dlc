#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_CanReachTarget

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BDeco_CanReachTarget.BDeco_CanReachTarget_C
// 0x0008 (0x00B0 - 0x00A8)
class UBDeco_CanReachTarget_C final : public ULBDecorator_BlueprintBase
{
public:
	bool                                          Check_Height;                                      // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BDeco_CanReachTarget_C">();
	}
	static class UBDeco_CanReachTarget_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBDeco_CanReachTarget_C>();
	}
};
static_assert(alignof(UBDeco_CanReachTarget_C) == 0x000008, "Wrong alignment on UBDeco_CanReachTarget_C");
static_assert(sizeof(UBDeco_CanReachTarget_C) == 0x0000B0, "Wrong size on UBDeco_CanReachTarget_C");
static_assert(offsetof(UBDeco_CanReachTarget_C, Check_Height) == 0x0000A8, "Member 'UBDeco_CanReachTarget_C::Check_Height' has a wrong offset!");

}

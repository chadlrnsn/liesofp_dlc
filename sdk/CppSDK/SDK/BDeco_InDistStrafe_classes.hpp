#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_InDistStrafe

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BDeco_InDistStrafe.BDeco_InDistStrafe_C
// 0x0000 (0x00A8 - 0x00A8)
class UBDeco_InDistStrafe_C final : public ULBDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BDeco_InDistStrafe_C">();
	}
	static class UBDeco_InDistStrafe_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBDeco_InDistStrafe_C>();
	}
};
static_assert(alignof(UBDeco_InDistStrafe_C) == 0x000008, "Wrong alignment on UBDeco_InDistStrafe_C");
static_assert(sizeof(UBDeco_InDistStrafe_C) == 0x0000A8, "Wrong size on UBDeco_InDistStrafe_C");

}

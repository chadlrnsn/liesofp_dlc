#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Deco_State_IsStandGuard

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass Deco_State_IsStandGuard.Deco_State_IsStandGuard_C
// 0x0000 (0x00A8 - 0x00A8)
class UDeco_State_IsStandGuard_C final : public ULBDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"Deco_State_IsStandGuard_C">();
	}
	static class UDeco_State_IsStandGuard_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UDeco_State_IsStandGuard_C>();
	}
};
static_assert(alignof(UDeco_State_IsStandGuard_C) == 0x000008, "Wrong alignment on UDeco_State_IsStandGuard_C");
static_assert(sizeof(UDeco_State_IsStandGuard_C) == 0x0000A8, "Wrong size on UDeco_State_IsStandGuard_C");

}

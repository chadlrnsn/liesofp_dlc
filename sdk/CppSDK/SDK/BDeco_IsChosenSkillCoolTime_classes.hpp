#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_IsChosenSkillCoolTime

#include "Basic.hpp"

#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BDeco_IsChosenSkillCoolTime.BDeco_IsChosenSkillCoolTime_C
// 0x0000 (0x00A8 - 0x00A8)
class UBDeco_IsChosenSkillCoolTime_C final : public ULBDecorator_BlueprintBase
{
public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BDeco_IsChosenSkillCoolTime_C">();
	}
	static class UBDeco_IsChosenSkillCoolTime_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBDeco_IsChosenSkillCoolTime_C>();
	}
};
static_assert(alignof(UBDeco_IsChosenSkillCoolTime_C) == 0x000008, "Wrong alignment on UBDeco_IsChosenSkillCoolTime_C");
static_assert(sizeof(UBDeco_IsChosenSkillCoolTime_C) == 0x0000A8, "Wrong size on UBDeco_IsChosenSkillCoolTime_C");

}


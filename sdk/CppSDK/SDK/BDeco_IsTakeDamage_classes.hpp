#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_IsTakeDamage

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BDeco_IsTakeDamage.BDeco_IsTakeDamage_C
// 0x0008 (0x00B0 - 0x00A8)
class UBDeco_IsTakeDamage_C final : public ULBDecorator_BlueprintBase
{
public:
	ELAITakeDamageType                            Take_Damage_Type;                                  // 0x00A8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BDeco_IsTakeDamage_C">();
	}
	static class UBDeco_IsTakeDamage_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBDeco_IsTakeDamage_C>();
	}
};
static_assert(alignof(UBDeco_IsTakeDamage_C) == 0x000008, "Wrong alignment on UBDeco_IsTakeDamage_C");
static_assert(sizeof(UBDeco_IsTakeDamage_C) == 0x0000B0, "Wrong size on UBDeco_IsTakeDamage_C");
static_assert(offsetof(UBDeco_IsTakeDamage_C, Take_Damage_Type) == 0x0000A8, "Member 'UBDeco_IsTakeDamage_C::Take_Damage_Type' has a wrong offset!");

}

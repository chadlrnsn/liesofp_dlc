#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_StartCombat

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTask_StartCombat.BTask_StartCombat_C
// 0x0008 (0x00B8 - 0x00B0)
class UBTask_StartCombat_C final : public ULBTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)

public:
	void ExecuteUbergraph_BTask_StartCombat(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTask_StartCombat_C">();
	}
	static class UBTask_StartCombat_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTask_StartCombat_C>();
	}
};
static_assert(alignof(UBTask_StartCombat_C) == 0x000008, "Wrong alignment on UBTask_StartCombat_C");
static_assert(sizeof(UBTask_StartCombat_C) == 0x0000B8, "Wrong size on UBTask_StartCombat_C");
static_assert(offsetof(UBTask_StartCombat_C, UberGraphFrame) == 0x0000B0, "Member 'UBTask_StartCombat_C::UberGraphFrame' has a wrong offset!");

}

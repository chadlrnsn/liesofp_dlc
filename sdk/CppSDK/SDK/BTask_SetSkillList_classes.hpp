#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_SetSkillList

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BTask_SetSkillList.BTask_SetSkillList_C
// 0x0020 (0x00D0 - 0x00B0)
class UBTask_SetSkillList_C final : public ULBTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x00B0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FLNPCStandbySkill>              SkillList;                                         // 0x00B8(0x0010)(Edit, BlueprintVisible)
	bool                                          ResetSkillCoolTime;                                // 0x00C8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BTask_SetSkillList(int32 EntryPoint);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BTask_SetSkillList_C">();
	}
	static class UBTask_SetSkillList_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBTask_SetSkillList_C>();
	}
};
static_assert(alignof(UBTask_SetSkillList_C) == 0x000008, "Wrong alignment on UBTask_SetSkillList_C");
static_assert(sizeof(UBTask_SetSkillList_C) == 0x0000D0, "Wrong size on UBTask_SetSkillList_C");
static_assert(offsetof(UBTask_SetSkillList_C, UberGraphFrame) == 0x0000B0, "Member 'UBTask_SetSkillList_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBTask_SetSkillList_C, SkillList) == 0x0000B8, "Member 'UBTask_SetSkillList_C::SkillList' has a wrong offset!");
static_assert(offsetof(UBTask_SetSkillList_C, ResetSkillCoolTime) == 0x0000C8, "Member 'UBTask_SetSkillList_C::ResetSkillCoolTime' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Trident_BLD

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Trident_BLD.BP_Trident_BLD_C
// 0x0010 (0x0280 - 0x0270)
class UBP_Trident_BLD_C final : public ULAction_MultiAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Release;                                           // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Trident_BLD(int32 EntryPoint);
	void OnTick(float DeltaTime);
	void OnCommandOccurred_Event(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Trident_BLD_C">();
	}
	static class UBP_Trident_BLD_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Trident_BLD_C>();
	}
};
static_assert(alignof(UBP_Trident_BLD_C) == 0x000008, "Wrong alignment on UBP_Trident_BLD_C");
static_assert(sizeof(UBP_Trident_BLD_C) == 0x000280, "Wrong size on UBP_Trident_BLD_C");
static_assert(offsetof(UBP_Trident_BLD_C, UberGraphFrame) == 0x000270, "Member 'UBP_Trident_BLD_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Trident_BLD_C, Release) == 0x000278, "Member 'UBP_Trident_BLD_C::Release' has a wrong offset!");

}

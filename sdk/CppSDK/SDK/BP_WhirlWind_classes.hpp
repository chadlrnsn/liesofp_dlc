#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WhirlWind

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WhirlWind.BP_WhirlWind_C
// 0x0010 (0x0280 - 0x0270)
class UBP_WhirlWind_C final : public ULAction_MultiAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0270(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          Release;                                           // 0x0278(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_WhirlWind(int32 EntryPoint);
	void OnStart();
	void OnTick(float DeltaTime);
	void OnCommandOccurred_Event(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WhirlWind_C">();
	}
	static class UBP_WhirlWind_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_WhirlWind_C>();
	}
};
static_assert(alignof(UBP_WhirlWind_C) == 0x000008, "Wrong alignment on UBP_WhirlWind_C");
static_assert(sizeof(UBP_WhirlWind_C) == 0x000280, "Wrong size on UBP_WhirlWind_C");
static_assert(offsetof(UBP_WhirlWind_C, UberGraphFrame) == 0x000270, "Member 'UBP_WhirlWind_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_WhirlWind_C, Release) == 0x000278, "Member 'UBP_WhirlWind_C::Release' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_WaterLanding

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_WaterLanding.BP_WaterLanding_C
// 0x0030 (0x0290 - 0x0260)
class ABP_WaterLanding_C final : public ALLevelObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                          Trigger;                                           // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                             Sound;                                             // 0x0280(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         WaterType;                                         // 0x0288(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_WaterLanding(int32 EntryPoint);
	void BndEvt__test_waterfx_Trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	void UserConstructionScript();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_WaterLanding_C">();
	}
	static class ABP_WaterLanding_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_WaterLanding_C>();
	}
};
static_assert(alignof(ABP_WaterLanding_C) == 0x000008, "Wrong alignment on ABP_WaterLanding_C");
static_assert(sizeof(ABP_WaterLanding_C) == 0x000290, "Wrong size on ABP_WaterLanding_C");
static_assert(offsetof(ABP_WaterLanding_C, UberGraphFrame) == 0x000260, "Member 'ABP_WaterLanding_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_WaterLanding_C, Trigger) == 0x000268, "Member 'ABP_WaterLanding_C::Trigger' has a wrong offset!");
static_assert(offsetof(ABP_WaterLanding_C, Niagara) == 0x000270, "Member 'ABP_WaterLanding_C::Niagara' has a wrong offset!");
static_assert(offsetof(ABP_WaterLanding_C, DefaultSceneRoot) == 0x000278, "Member 'ABP_WaterLanding_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_WaterLanding_C, Sound) == 0x000280, "Member 'ABP_WaterLanding_C::Sound' has a wrong offset!");
static_assert(offsetof(ABP_WaterLanding_C, WaterType) == 0x000288, "Member 'ABP_WaterLanding_C::WaterType' has a wrong offset!");

}

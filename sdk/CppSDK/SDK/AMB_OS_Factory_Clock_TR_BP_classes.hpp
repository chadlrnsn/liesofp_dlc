#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: AMB_OS_Factory_Clock_TR_BP

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass AMB_OS_Factory_Clock_TR_BP.AMB_OS_Factory_Clock_TR_BP_C
// 0x0020 (0x0200 - 0x01E0)
class AAMB_OS_Factory_Clock_TR_BP_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                        Audio;                                             // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                          Box;                                               // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x01F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_AMB_OS_Factory_Clock_TR_BP(int32 EntryPoint);
	void BndEvt__AMB_OS_OldTown_Castle_BP_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"AMB_OS_Factory_Clock_TR_BP_C">();
	}
	static class AAMB_OS_Factory_Clock_TR_BP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AAMB_OS_Factory_Clock_TR_BP_C>();
	}
};
static_assert(alignof(AAMB_OS_Factory_Clock_TR_BP_C) == 0x000008, "Wrong alignment on AAMB_OS_Factory_Clock_TR_BP_C");
static_assert(sizeof(AAMB_OS_Factory_Clock_TR_BP_C) == 0x000200, "Wrong size on AAMB_OS_Factory_Clock_TR_BP_C");
static_assert(offsetof(AAMB_OS_Factory_Clock_TR_BP_C, UberGraphFrame) == 0x0001E0, "Member 'AAMB_OS_Factory_Clock_TR_BP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AAMB_OS_Factory_Clock_TR_BP_C, Audio) == 0x0001E8, "Member 'AAMB_OS_Factory_Clock_TR_BP_C::Audio' has a wrong offset!");
static_assert(offsetof(AAMB_OS_Factory_Clock_TR_BP_C, Box) == 0x0001F0, "Member 'AAMB_OS_Factory_Clock_TR_BP_C::Box' has a wrong offset!");
static_assert(offsetof(AAMB_OS_Factory_Clock_TR_BP_C, DefaultSceneRoot) == 0x0001F8, "Member 'AAMB_OS_Factory_Clock_TR_BP_C::DefaultSceneRoot' has a wrong offset!");

}

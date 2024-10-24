#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stargazer

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Stargazer.BP_Stargazer_C
// 0x0070 (0x02D0 - 0x0260)
class ABP_Stargazer_C final : public ALStargazerObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      NS_Unstable;                                       // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_active_butterfly;                               // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule_active;                                    // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                      Capsule_waiting;                                   // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SD_active;                                         // 0x0288(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        SD_waiting;                                        // 0x0290(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_waiting;                                        // 0x0298(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_inactive;                                       // 0x02A0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_active;                                         // 0x02A8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                 SK_active;                                         // 0x02B0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x02B8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          RestoreState;                                      // 0x02C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	ELStargazerType                               CurrentStargazerType;                              // 0x02C1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Is_Stargazer_Unstable;                             // 0x02C2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_2C3[0x1];                                      // 0x02C3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         NS_Unstable_Deactivate_Delay;                      // 0x02C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                           NS_Unstable_Deactivate_Timer_Handle;               // 0x02C8(0x0008)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

public:
	void Effect_Ustable_Change_Etc_NSHide(bool Flag);
	float GetInteractTime();
	void SetCapsuleCollioion(class UCapsuleComponent* Capsule, bool Collision_on);
	void EffectWaiting(bool Flag);
	void EffectActive(bool Flag);
	void ResetData();
	void OnNotifyEnd_FDD8B0A44967396E14DF5EB814EA7840(class FName NotifyName);
	void OnNotifyBegin_FDD8B0A44967396E14DF5EB814EA7840(class FName NotifyName);
	void OnInterrupted_FDD8B0A44967396E14DF5EB814EA7840(class FName NotifyName);
	void OnBlendOut_FDD8B0A44967396E14DF5EB814EA7840(class FName NotifyName);
	void OnCompleted_FDD8B0A44967396E14DF5EB814EA7840(class FName NotifyName);
	void OnNotifyEnd_0827B6FB4BDE6917D21174812235DDF9(class FName NotifyName);
	void OnNotifyBegin_0827B6FB4BDE6917D21174812235DDF9(class FName NotifyName);
	void OnInterrupted_0827B6FB4BDE6917D21174812235DDF9(class FName NotifyName);
	void OnBlendOut_0827B6FB4BDE6917D21174812235DDF9(class FName NotifyName);
	void OnCompleted_0827B6FB4BDE6917D21174812235DDF9(class FName NotifyName);
	void OnNotifyEnd_FE326EFE4736A40794D5429C2AA03C25(class FName NotifyName);
	void OnNotifyBegin_FE326EFE4736A40794D5429C2AA03C25(class FName NotifyName);
	void OnInterrupted_FE326EFE4736A40794D5429C2AA03C25(class FName NotifyName);
	void OnBlendOut_FE326EFE4736A40794D5429C2AA03C25(class FName NotifyName);
	void OnCompleted_FE326EFE4736A40794D5429C2AA03C25(class FName NotifyName);
	void OnNotifyEnd_0DF816A84C90EF26D61C4AB78C76201D(class FName NotifyName);
	void OnNotifyBegin_0DF816A84C90EF26D61C4AB78C76201D(class FName NotifyName);
	void OnInterrupted_0DF816A84C90EF26D61C4AB78C76201D(class FName NotifyName);
	void OnBlendOut_0DF816A84C90EF26D61C4AB78C76201D(class FName NotifyName);
	void OnCompleted_0DF816A84C90EF26D61C4AB78C76201D(class FName NotifyName);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void SetStargazerType(ELStargazerType StateData);
	void EventRestoreToActive();
	void EventBrokenToRestore();
	void OnInteractionStart();
	void OnInteractionEnd();
	void SetStargazerUnstable(bool Unstable);
	void NS_Unstable_Deactivate_();
	void ExecuteUbergraph_BP_Stargazer(int32 EntryPoint);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Stargazer_C">();
	}
	static class ABP_Stargazer_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Stargazer_C>();
	}
};
static_assert(alignof(ABP_Stargazer_C) == 0x000008, "Wrong alignment on ABP_Stargazer_C");
static_assert(sizeof(ABP_Stargazer_C) == 0x0002D0, "Wrong size on ABP_Stargazer_C");
static_assert(offsetof(ABP_Stargazer_C, UberGraphFrame) == 0x000260, "Member 'ABP_Stargazer_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, NS_Unstable) == 0x000268, "Member 'ABP_Stargazer_C::NS_Unstable' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, NS_active_butterfly) == 0x000270, "Member 'ABP_Stargazer_C::NS_active_butterfly' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, Capsule_active) == 0x000278, "Member 'ABP_Stargazer_C::Capsule_active' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, Capsule_waiting) == 0x000280, "Member 'ABP_Stargazer_C::Capsule_waiting' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, SD_active) == 0x000288, "Member 'ABP_Stargazer_C::SD_active' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, SD_waiting) == 0x000290, "Member 'ABP_Stargazer_C::SD_waiting' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, NS_waiting) == 0x000298, "Member 'ABP_Stargazer_C::NS_waiting' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, SK_inactive) == 0x0002A0, "Member 'ABP_Stargazer_C::SK_inactive' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, NS_active) == 0x0002A8, "Member 'ABP_Stargazer_C::NS_active' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, SK_active) == 0x0002B0, "Member 'ABP_Stargazer_C::SK_active' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, DefaultSceneRoot) == 0x0002B8, "Member 'ABP_Stargazer_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, RestoreState) == 0x0002C0, "Member 'ABP_Stargazer_C::RestoreState' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, CurrentStargazerType) == 0x0002C1, "Member 'ABP_Stargazer_C::CurrentStargazerType' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, Is_Stargazer_Unstable) == 0x0002C2, "Member 'ABP_Stargazer_C::Is_Stargazer_Unstable' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, NS_Unstable_Deactivate_Delay) == 0x0002C4, "Member 'ABP_Stargazer_C::NS_Unstable_Deactivate_Delay' has a wrong offset!");
static_assert(offsetof(ABP_Stargazer_C, NS_Unstable_Deactivate_Timer_Handle) == 0x0002C8, "Member 'ABP_Stargazer_C::NS_Unstable_Deactivate_Timer_Handle' has a wrong offset!");

}


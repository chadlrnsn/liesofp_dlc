#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ergo_Trail

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Ergo_Trail.BP_Ergo_Trail_C
// 0x0080 (0x0260 - 0x01E0)
class ABP_Ergo_Trail_C final : public AActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01E0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                      ErgoTrail;                                         // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Scene;                                             // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                         FollowTimeLimit;                                   // 0x01F8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FollowTimeDelta;                                   // 0x01FC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                 FollowTarget_Actor;                                // 0x0200(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMeshComponent*                         FollowMeshComponent;                               // 0x0208(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          FollowTargetFlag;                                  // 0x0210(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                         Pad_211[0x3];                                      // 0x0211(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         FollowTargeDistance;                               // 0x0214(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         FollowTargeMoveTime;                               // 0x0218(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         CalcDistancePerSec;                                // 0x021C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RangeMin;                                          // 0x0220(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         RangeMax;                                          // 0x0224(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoveTimeMin;                                       // 0x0228(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         MoveTimeMax;                                       // 0x022C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLDropErgoData                         DropErgoData;                                      // 0x0230(0x0030)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_BP_Ergo_Trail(int32 EntryPoint);
	void BndEvt__BP_Ergo_Trail_ErgoTrail_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
	void SetErgoData(const struct FLDropErgoData& InData);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void FollowTarget(class AActor* TargetActor);
	void FollowEnd();
	void TickFollowTarget(float DeltaTime);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Ergo_Trail_C">();
	}
	static class ABP_Ergo_Trail_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Ergo_Trail_C>();
	}
};
static_assert(alignof(ABP_Ergo_Trail_C) == 0x000008, "Wrong alignment on ABP_Ergo_Trail_C");
static_assert(sizeof(ABP_Ergo_Trail_C) == 0x000260, "Wrong size on ABP_Ergo_Trail_C");
static_assert(offsetof(ABP_Ergo_Trail_C, UberGraphFrame) == 0x0001E0, "Member 'ABP_Ergo_Trail_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, ErgoTrail) == 0x0001E8, "Member 'ABP_Ergo_Trail_C::ErgoTrail' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, Scene) == 0x0001F0, "Member 'ABP_Ergo_Trail_C::Scene' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, FollowTimeLimit) == 0x0001F8, "Member 'ABP_Ergo_Trail_C::FollowTimeLimit' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, FollowTimeDelta) == 0x0001FC, "Member 'ABP_Ergo_Trail_C::FollowTimeDelta' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, FollowTarget_Actor) == 0x000200, "Member 'ABP_Ergo_Trail_C::FollowTarget_Actor' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, FollowMeshComponent) == 0x000208, "Member 'ABP_Ergo_Trail_C::FollowMeshComponent' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, FollowTargetFlag) == 0x000210, "Member 'ABP_Ergo_Trail_C::FollowTargetFlag' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, FollowTargeDistance) == 0x000214, "Member 'ABP_Ergo_Trail_C::FollowTargeDistance' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, FollowTargeMoveTime) == 0x000218, "Member 'ABP_Ergo_Trail_C::FollowTargeMoveTime' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, CalcDistancePerSec) == 0x00021C, "Member 'ABP_Ergo_Trail_C::CalcDistancePerSec' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, RangeMin) == 0x000220, "Member 'ABP_Ergo_Trail_C::RangeMin' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, RangeMax) == 0x000224, "Member 'ABP_Ergo_Trail_C::RangeMax' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, MoveTimeMin) == 0x000228, "Member 'ABP_Ergo_Trail_C::MoveTimeMin' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, MoveTimeMax) == 0x00022C, "Member 'ABP_Ergo_Trail_C::MoveTimeMax' has a wrong offset!");
static_assert(offsetof(ABP_Ergo_Trail_C, DropErgoData) == 0x000230, "Member 'ABP_Ergo_Trail_C::DropErgoData' has a wrong offset!");

}

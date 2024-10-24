#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_ENV_BP_Barrel_02

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_ENV_BP_Barrel_02.BP_ENV_BP_Barrel_02_C
// 0x0068 (0x0248 - 0x01E0)
class ABP_ENV_BP_Barrel_02_C final : public AActor
{
public:
	class UStaticMeshComponent*                   R;                                                 // 0x01E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_OldTown_WoodBoard_07;                           // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_OldTown_WoodBoard_08;                           // 0x01F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_OldTown_WoodBoard_06;                           // 0x0200(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      NS_Env_Wind_Fire_01_GDH;                           // 0x0208(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UPointLightComponent*                   PointLight;                                        // 0x0210(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   Lamp;                                              // 0x0218(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0220(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                          LightOn;                                           // 0x0228(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_229[0x7];                                      // 0x0229(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	FMulticastInlineDelegateProperty_             NewEventDispatcher_0;                              // 0x0230(0x0010)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                          EffectOn;                                          // 0x0240(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

public:
	void NewFunction_0(bool LightOn_0);
	void UserConstructionScript();
	void NewEventDispatcher_0__DelegateSignature();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_ENV_BP_Barrel_02_C">();
	}
	static class ABP_ENV_BP_Barrel_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_ENV_BP_Barrel_02_C>();
	}
};
static_assert(alignof(ABP_ENV_BP_Barrel_02_C) == 0x000008, "Wrong alignment on ABP_ENV_BP_Barrel_02_C");
static_assert(sizeof(ABP_ENV_BP_Barrel_02_C) == 0x000248, "Wrong size on ABP_ENV_BP_Barrel_02_C");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, R) == 0x0001E0, "Member 'ABP_ENV_BP_Barrel_02_C::R' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, Audio) == 0x0001E8, "Member 'ABP_ENV_BP_Barrel_02_C::Audio' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, SM_OldTown_WoodBoard_07) == 0x0001F0, "Member 'ABP_ENV_BP_Barrel_02_C::SM_OldTown_WoodBoard_07' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, SM_OldTown_WoodBoard_08) == 0x0001F8, "Member 'ABP_ENV_BP_Barrel_02_C::SM_OldTown_WoodBoard_08' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, SM_OldTown_WoodBoard_06) == 0x000200, "Member 'ABP_ENV_BP_Barrel_02_C::SM_OldTown_WoodBoard_06' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, NS_Env_Wind_Fire_01_GDH) == 0x000208, "Member 'ABP_ENV_BP_Barrel_02_C::NS_Env_Wind_Fire_01_GDH' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, PointLight) == 0x000210, "Member 'ABP_ENV_BP_Barrel_02_C::PointLight' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, Lamp) == 0x000218, "Member 'ABP_ENV_BP_Barrel_02_C::Lamp' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, DefaultSceneRoot) == 0x000220, "Member 'ABP_ENV_BP_Barrel_02_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, LightOn) == 0x000228, "Member 'ABP_ENV_BP_Barrel_02_C::LightOn' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, NewEventDispatcher_0) == 0x000230, "Member 'ABP_ENV_BP_Barrel_02_C::NewEventDispatcher_0' has a wrong offset!");
static_assert(offsetof(ABP_ENV_BP_Barrel_02_C, EffectOn) == 0x000240, "Member 'ABP_ENV_BP_Barrel_02_C::EffectOn' has a wrong offset!");

}


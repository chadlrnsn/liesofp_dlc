#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Manhole_02

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Manhole_02.BP_Manhole_02_C
// 0x0018 (0x01F8 - 0x01E0)
class ABP_Manhole_02_C final : public AActor
{
public:
	class UNiagaraComponent*                      NS_Env_Wind_CircleSmoke_01_HJS;                    // 0x01E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Interior_Manhole_01;                            // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Manhole_02_C">();
	}
	static class ABP_Manhole_02_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Manhole_02_C>();
	}
};
static_assert(alignof(ABP_Manhole_02_C) == 0x000008, "Wrong alignment on ABP_Manhole_02_C");
static_assert(sizeof(ABP_Manhole_02_C) == 0x0001F8, "Wrong size on ABP_Manhole_02_C");
static_assert(offsetof(ABP_Manhole_02_C, NS_Env_Wind_CircleSmoke_01_HJS) == 0x0001E0, "Member 'ABP_Manhole_02_C::NS_Env_Wind_CircleSmoke_01_HJS' has a wrong offset!");
static_assert(offsetof(ABP_Manhole_02_C, SM_Interior_Manhole_01) == 0x0001E8, "Member 'ABP_Manhole_02_C::SM_Interior_Manhole_01' has a wrong offset!");
static_assert(offsetof(ABP_Manhole_02_C, DefaultSceneRoot) == 0x0001F0, "Member 'ABP_Manhole_02_C::DefaultSceneRoot' has a wrong offset!");

}


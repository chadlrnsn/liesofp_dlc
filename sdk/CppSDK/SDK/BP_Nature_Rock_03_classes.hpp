#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Nature_Rock_03

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Nature_Rock_03.BP_Nature_Rock_03_C
// 0x0018 (0x01F8 - 0x01E0)
class ABP_Nature_Rock_03_C final : public AActor
{
public:
	class UStaticMeshComponent*                   SM_Nature_Rock_03_Col;                             // 0x01E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                   SM_Nature_Rock_03;                                 // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x01F0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Nature_Rock_03_C">();
	}
	static class ABP_Nature_Rock_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Nature_Rock_03_C>();
	}
};
static_assert(alignof(ABP_Nature_Rock_03_C) == 0x000008, "Wrong alignment on ABP_Nature_Rock_03_C");
static_assert(sizeof(ABP_Nature_Rock_03_C) == 0x0001F8, "Wrong size on ABP_Nature_Rock_03_C");
static_assert(offsetof(ABP_Nature_Rock_03_C, SM_Nature_Rock_03_Col) == 0x0001E0, "Member 'ABP_Nature_Rock_03_C::SM_Nature_Rock_03_Col' has a wrong offset!");
static_assert(offsetof(ABP_Nature_Rock_03_C, SM_Nature_Rock_03) == 0x0001E8, "Member 'ABP_Nature_Rock_03_C::SM_Nature_Rock_03' has a wrong offset!");
static_assert(offsetof(ABP_Nature_Rock_03_C, DefaultSceneRoot) == 0x0001F0, "Member 'ABP_Nature_Rock_03_C::DefaultSceneRoot' has a wrong offset!");

}


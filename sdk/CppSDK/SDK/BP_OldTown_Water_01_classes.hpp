#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_OldTown_Water_01

#include "Basic.hpp"

#include "Engine_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_OldTown_Water_01.BP_OldTown_Water_01_C
// 0x0010 (0x01F0 - 0x01E0)
class ABP_OldTown_Water_01_C final : public AActor
{
public:
	class UStaticMeshComponent*                   LV_Krat_Water_SM_SCY;                              // 0x01E0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x01E8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_OldTown_Water_01_C">();
	}
	static class ABP_OldTown_Water_01_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_OldTown_Water_01_C>();
	}
};
static_assert(alignof(ABP_OldTown_Water_01_C) == 0x000008, "Wrong alignment on ABP_OldTown_Water_01_C");
static_assert(sizeof(ABP_OldTown_Water_01_C) == 0x0001F0, "Wrong size on ABP_OldTown_Water_01_C");
static_assert(offsetof(ABP_OldTown_Water_01_C, LV_Krat_Water_SM_SCY) == 0x0001E0, "Member 'ABP_OldTown_Water_01_C::LV_Krat_Water_SM_SCY' has a wrong offset!");
static_assert(offsetof(ABP_OldTown_Water_01_C, DefaultSceneRoot) == 0x0001E8, "Member 'ABP_OldTown_Water_01_C::DefaultSceneRoot' has a wrong offset!");

}


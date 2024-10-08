#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ObjectManagementSystemDataBP

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ObjectManagementSystemDataBP.ObjectManagementSystemDataBP_C
// 0x0080 (0x0270 - 0x01F0)
class AObjectManagementSystemDataBP_C final : public ALObjectManagementSystemData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x01F0(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x01F8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TArray<class UObject*>                        LevelPreloadHolder;                                // 0x0200(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                        BodyStainPreloadHolder;                            // 0x0210(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                        WeaponMaterialPreloadHolder;                       // 0x0220(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UObject*>                        ActionPreloadHolder;                               // 0x0230(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         ClassPreloadHolder;                                // 0x0240(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UAnimMontage*>                   AnimMontagePreloadHolder;                          // 0x0250(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UClass*>                         ProjectileDesignClassPreloadHolder;                // 0x0260(0x0010)(Edit, BlueprintVisible, DisableEditOnInstance)

public:
	void ExecuteUbergraph_ObjectManagementSystemDataBP(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ObjectManagementSystemDataBP_C">();
	}
	static class AObjectManagementSystemDataBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AObjectManagementSystemDataBP_C>();
	}
};
static_assert(alignof(AObjectManagementSystemDataBP_C) == 0x000008, "Wrong alignment on AObjectManagementSystemDataBP_C");
static_assert(sizeof(AObjectManagementSystemDataBP_C) == 0x000270, "Wrong size on AObjectManagementSystemDataBP_C");
static_assert(offsetof(AObjectManagementSystemDataBP_C, UberGraphFrame) == 0x0001F0, "Member 'AObjectManagementSystemDataBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, DefaultSceneRoot) == 0x0001F8, "Member 'AObjectManagementSystemDataBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, LevelPreloadHolder) == 0x000200, "Member 'AObjectManagementSystemDataBP_C::LevelPreloadHolder' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, BodyStainPreloadHolder) == 0x000210, "Member 'AObjectManagementSystemDataBP_C::BodyStainPreloadHolder' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, WeaponMaterialPreloadHolder) == 0x000220, "Member 'AObjectManagementSystemDataBP_C::WeaponMaterialPreloadHolder' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, ActionPreloadHolder) == 0x000230, "Member 'AObjectManagementSystemDataBP_C::ActionPreloadHolder' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, ClassPreloadHolder) == 0x000240, "Member 'AObjectManagementSystemDataBP_C::ClassPreloadHolder' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, AnimMontagePreloadHolder) == 0x000250, "Member 'AObjectManagementSystemDataBP_C::AnimMontagePreloadHolder' has a wrong offset!");
static_assert(offsetof(AObjectManagementSystemDataBP_C, ProjectileDesignClassPreloadHolder) == 0x000260, "Member 'AObjectManagementSystemDataBP_C::ProjectileDesignClassPreloadHolder' has a wrong offset!");

}


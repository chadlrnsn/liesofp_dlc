#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActionSystemDataBP

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass ActionSystemDataBP.ActionSystemDataBP_C
// 0x0018 (0x05A8 - 0x0590)
class AActionSystemDataBP_C final : public ALActionSystemData
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0590(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                        DefaultSceneRoot;                                  // 0x0598(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                             PcMeshAttributeTable;                              // 0x05A0(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_ActionSystemDataBP(int32 EntryPoint);
	void ReceiveTick(float DeltaSeconds);
	bool FindHandBloodMaterial_ForCurrentBody(class UMaterialInstance** OutMaterial);
	bool FindPixelDepthOffsetData_ForCurrentFace(class UTexture** OutMask, float* OutIntensity);
	bool FindShrinkMesh_ForCurrentBody(class ALCharacter* TargetCharacter, class USkeletalMesh** OutMesh);
	bool OnApplyNeedShrink(class ALCharacter* TargetCharacter);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"ActionSystemDataBP_C">();
	}
	static class AActionSystemDataBP_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<AActionSystemDataBP_C>();
	}
};
static_assert(alignof(AActionSystemDataBP_C) == 0x000008, "Wrong alignment on AActionSystemDataBP_C");
static_assert(sizeof(AActionSystemDataBP_C) == 0x0005A8, "Wrong size on AActionSystemDataBP_C");
static_assert(offsetof(AActionSystemDataBP_C, UberGraphFrame) == 0x000590, "Member 'AActionSystemDataBP_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(AActionSystemDataBP_C, DefaultSceneRoot) == 0x000598, "Member 'AActionSystemDataBP_C::DefaultSceneRoot' has a wrong offset!");
static_assert(offsetof(AActionSystemDataBP_C, PcMeshAttributeTable) == 0x0005A0, "Member 'AActionSystemDataBP_C::PcMeshAttributeTable' has a wrong offset!");

}

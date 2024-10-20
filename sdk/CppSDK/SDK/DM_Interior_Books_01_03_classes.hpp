#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_Interior_Books_01_03

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass DM_Interior_Books_01_03.DM_Interior_Books_01_03_C
// 0x0068 (0x0398 - 0x0330)
class ADM_Interior_Books_01_03_C final : public ALDestructionObject
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0330(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PhysicsImpactSound_C*               BP_PhysicsImpactSound;                             // 0x0338(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh17;                             // 0x0340(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh2;                              // 0x0348(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh7;                              // 0x0350(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh5;                              // 0x0358(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh16;                             // 0x0360(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh15;                             // 0x0368(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh13;                             // 0x0370(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULDestructStaticMeshComponent*          LDestructStaticMesh12;                             // 0x0378(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Mesh;                                              // 0x0380(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                        Audio;                                             // 0x0388(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0390(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DM_Interior_Books_01_03(int32 EntryPoint);
	void OnDestructCrashed();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DM_Interior_Books_01_03_C">();
	}
	static class ADM_Interior_Books_01_03_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADM_Interior_Books_01_03_C>();
	}
};
static_assert(alignof(ADM_Interior_Books_01_03_C) == 0x000008, "Wrong alignment on ADM_Interior_Books_01_03_C");
static_assert(sizeof(ADM_Interior_Books_01_03_C) == 0x000398, "Wrong size on ADM_Interior_Books_01_03_C");
static_assert(offsetof(ADM_Interior_Books_01_03_C, UberGraphFrame) == 0x000330, "Member 'ADM_Interior_Books_01_03_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, BP_PhysicsImpactSound) == 0x000338, "Member 'ADM_Interior_Books_01_03_C::BP_PhysicsImpactSound' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh17) == 0x000340, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh17' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh2) == 0x000348, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh2' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh7) == 0x000350, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh7' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh5) == 0x000358, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh5' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh16) == 0x000360, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh16' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh15) == 0x000368, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh15' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh13) == 0x000370, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh13' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, LDestructStaticMesh12) == 0x000378, "Member 'ADM_Interior_Books_01_03_C::LDestructStaticMesh12' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, Mesh) == 0x000380, "Member 'ADM_Interior_Books_01_03_C::Mesh' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, Audio) == 0x000388, "Member 'ADM_Interior_Books_01_03_C::Audio' has a wrong offset!");
static_assert(offsetof(ADM_Interior_Books_01_03_C, Niagara) == 0x000390, "Member 'ADM_Interior_Books_01_03_C::Niagara' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DDV_CH05_BearTrap

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass DDV_CH05_BearTrap.DDV_CH05_BearTrap_C
// 0x0048 (0x02A8 - 0x0260)
class ADDV_CH05_BearTrap_C : public ALDynamicDamageVolumeActor
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0260(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_HitProcComponent_C*                 BP_HitProcComponent;                               // 0x0268(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                       Sphere1;                                           // 0x0270(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                      Niagara;                                           // 0x0278(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                        Root;                                              // 0x0280(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class FName                                   DynamicDamageVolumeCodeName;                       // 0x0288(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CheckBoom;                                         // 0x0290(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_291[0x3];                                      // 0x0291(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   Skill_Hit_Override_PC;                             // 0x0294(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   Skill_Hit_Override_NPC;                            // 0x029C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_DDV_CH05_BearTrap(int32 EntryPoint);
	void OnBeginOverlap(class AActor* Actor, const struct FHitResult& HitResult);
	void ResetHitList();
	void ReceiveBeginPlay();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"DDV_CH05_BearTrap_C">();
	}
	static class ADDV_CH05_BearTrap_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ADDV_CH05_BearTrap_C>();
	}
};
static_assert(alignof(ADDV_CH05_BearTrap_C) == 0x000008, "Wrong alignment on ADDV_CH05_BearTrap_C");
static_assert(sizeof(ADDV_CH05_BearTrap_C) == 0x0002A8, "Wrong size on ADDV_CH05_BearTrap_C");
static_assert(offsetof(ADDV_CH05_BearTrap_C, UberGraphFrame) == 0x000260, "Member 'ADDV_CH05_BearTrap_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, BP_HitProcComponent) == 0x000268, "Member 'ADDV_CH05_BearTrap_C::BP_HitProcComponent' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, Sphere1) == 0x000270, "Member 'ADDV_CH05_BearTrap_C::Sphere1' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, Niagara) == 0x000278, "Member 'ADDV_CH05_BearTrap_C::Niagara' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, Root) == 0x000280, "Member 'ADDV_CH05_BearTrap_C::Root' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, DynamicDamageVolumeCodeName) == 0x000288, "Member 'ADDV_CH05_BearTrap_C::DynamicDamageVolumeCodeName' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, CheckBoom) == 0x000290, "Member 'ADDV_CH05_BearTrap_C::CheckBoom' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, Skill_Hit_Override_PC) == 0x000294, "Member 'ADDV_CH05_BearTrap_C::Skill_Hit_Override_PC' has a wrong offset!");
static_assert(offsetof(ADDV_CH05_BearTrap_C, Skill_Hit_Override_NPC) == 0x00029C, "Member 'ADDV_CH05_BearTrap_C::Skill_Hit_Override_NPC' has a wrong offset!");

}

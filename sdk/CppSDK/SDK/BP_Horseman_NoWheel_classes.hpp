#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Horseman_NoWheel

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "LNPCCharacterBP_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Horseman_NoWheel.BP_Horseman_NoWheel_C
// 0x0010 (0x14D0 - 0x14C0)
class ABP_Horseman_NoWheel_C : public ALNPCCharacterBP_C
{
public:
	uint8                                         Pad_14B5[0x3];                                     // 0x14B5(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Horseman_NoWheel_C;              // 0x14B8(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ULCharacterBlockCapsuleComponent*       LCharacterBlockCapsule_Body2;                      // 0x14C0(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ULCharacterBlockCapsuleComponent*       LCharacterBlockCapsule_Body;                       // 0x14C8(0x0008)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Horseman_NoWheel(int32 EntryPoint);
	void ReceiveBeginPlay();
	bool OnCanHitOccurDecoMesh(class AActor* Attacker, class AActor* Victim, const struct FHitResult& HitResult);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Horseman_NoWheel_C">();
	}
	static class ABP_Horseman_NoWheel_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Horseman_NoWheel_C>();
	}
};
static_assert(alignof(ABP_Horseman_NoWheel_C) == 0x000010, "Wrong alignment on ABP_Horseman_NoWheel_C");
static_assert(sizeof(ABP_Horseman_NoWheel_C) == 0x0014D0, "Wrong size on ABP_Horseman_NoWheel_C");
static_assert(offsetof(ABP_Horseman_NoWheel_C, UberGraphFrame_BP_Horseman_NoWheel_C) == 0x0014B8, "Member 'ABP_Horseman_NoWheel_C::UberGraphFrame_BP_Horseman_NoWheel_C' has a wrong offset!");
static_assert(offsetof(ABP_Horseman_NoWheel_C, LCharacterBlockCapsule_Body2) == 0x0014C0, "Member 'ABP_Horseman_NoWheel_C::LCharacterBlockCapsule_Body2' has a wrong offset!");
static_assert(offsetof(ABP_Horseman_NoWheel_C, LCharacterBlockCapsule_Body) == 0x0014C8, "Member 'ABP_Horseman_NoWheel_C::LCharacterBlockCapsule_Body' has a wrong offset!");

}

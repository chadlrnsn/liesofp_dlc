#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_WireProjectile

#include "Basic.hpp"

#include "ProjectP_classes.hpp"
#include "Engine_structs.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Action_WireProjectile.BP_Action_WireProjectile_C
// 0x0010 (0x0268 - 0x0258)
class UBP_Action_WireProjectile_C final : public ULAction_LoopAnim
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame;                                    // 0x0258(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Projectile_Wire_Base_C*             WireProjectile;                                    // 0x0260(0x0008)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

public:
	void ExecuteUbergraph_BP_Action_WireProjectile(int32 EntryPoint);
	void OnCompleteRewindProjectile();
	void OnEndProjectile();
	void OnStartProjectile(class ABP_Projectile_Wire_Base_C* WireProjectile_0);
	void OnStop(class ULActBase* ReasonAction, class FName Reason);
	void OnStart();

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Action_WireProjectile_C">();
	}
	static class UBP_Action_WireProjectile_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<UBP_Action_WireProjectile_C>();
	}
};
static_assert(alignof(UBP_Action_WireProjectile_C) == 0x000008, "Wrong alignment on UBP_Action_WireProjectile_C");
static_assert(sizeof(UBP_Action_WireProjectile_C) == 0x000268, "Wrong size on UBP_Action_WireProjectile_C");
static_assert(offsetof(UBP_Action_WireProjectile_C, UberGraphFrame) == 0x000258, "Member 'UBP_Action_WireProjectile_C::UberGraphFrame' has a wrong offset!");
static_assert(offsetof(UBP_Action_WireProjectile_C, WireProjectile) == 0x000260, "Member 'UBP_Action_WireProjectile_C::WireProjectile' has a wrong offset!");

}

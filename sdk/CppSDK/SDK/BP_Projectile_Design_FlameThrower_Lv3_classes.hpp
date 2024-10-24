#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_FlameThrower_Lv3

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "BP_Projectile_Design_Base_classes.hpp"


namespace SDK
{

// BlueprintGeneratedClass BP_Projectile_Design_FlameThrower_Lv3.BP_Projectile_Design_FlameThrower_Lv3_C
// 0x0010 (0x0338 - 0x0328)
class ABP_Projectile_Design_FlameThrower_Lv3_C final : public ABP_Projectile_Design_Base_C
{
public:
	struct FPointerToUberGraphFrame               UberGraphFrame_BP_Projectile_Design_FlameThrower_Lv3_C; // 0x0328(0x0008)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                          bUseAdjustCarcassObjectHitLocation;                // 0x0330(0x0001)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

public:
	void ExecuteUbergraph_BP_Projectile_Design_FlameThrower_Lv3(int32 EntryPoint);
	void InitProjectile();
	void ReceiveBeginPlay();
	class FName CheckUseSubstituteSkillHit(const struct FLProjectileHitInfo& ProjectileHitInfo, const struct FHitResult& HitResult);
	TArray<struct FHitResult> RefineHitTarget(const TArray<struct FHitResult>& InHitResults);
	void AdjustHitLocationForCarcassObject(class ALCarcassBodyObject* InCarcassBodyObject, const struct FHitResult& InHitResult, struct FVector* OutLocation);

public:
	static class UClass* StaticClass()
	{
		return StaticBPGeneratedClassImpl<"BP_Projectile_Design_FlameThrower_Lv3_C">();
	}
	static class ABP_Projectile_Design_FlameThrower_Lv3_C* GetDefaultObj()
	{
		return GetDefaultObjImpl<ABP_Projectile_Design_FlameThrower_Lv3_C>();
	}
};
static_assert(alignof(ABP_Projectile_Design_FlameThrower_Lv3_C) == 0x000008, "Wrong alignment on ABP_Projectile_Design_FlameThrower_Lv3_C");
static_assert(sizeof(ABP_Projectile_Design_FlameThrower_Lv3_C) == 0x000338, "Wrong size on ABP_Projectile_Design_FlameThrower_Lv3_C");
static_assert(offsetof(ABP_Projectile_Design_FlameThrower_Lv3_C, UberGraphFrame_BP_Projectile_Design_FlameThrower_Lv3_C) == 0x000328, "Member 'ABP_Projectile_Design_FlameThrower_Lv3_C::UberGraphFrame_BP_Projectile_Design_FlameThrower_Lv3_C' has a wrong offset!");
static_assert(offsetof(ABP_Projectile_Design_FlameThrower_Lv3_C, bUseAdjustCarcassObjectHitLocation) == 0x000330, "Member 'ABP_Projectile_Design_FlameThrower_Lv3_C::bUseAdjustCarcassObjectHitLocation' has a wrong offset!");

}


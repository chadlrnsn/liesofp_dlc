#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2

#include "Basic.hpp"

#include "BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_classes.hpp"
#include "BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2.BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C.ExecuteUbergraph_BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C::ExecuteUbergraph_BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C", "ExecuteUbergraph_BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2");

	Params::BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C_ExecuteUbergraph_BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2.BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C.OnSpawnChildren
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALProjectile*                     ChildProjectile                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C::OnSpawnChildren(class ALProjectile* ChildProjectile)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C", "OnSpawnChildren");

	Params::BP_Projectile_Design_AcidGranade_Fire_Front_Main_Lv2_C_OnSpawnChildren Parms{};

	Parms.ChildProjectile = ChildProjectile;

	UObject::ProcessEvent(Func, &Parms);
}

}

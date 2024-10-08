#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_PileBunker_Attach_Ground

#include "Basic.hpp"

#include "BP_Projectile_Design_PileBunker_Attach_Ground_classes.hpp"
#include "BP_Projectile_Design_PileBunker_Attach_Ground_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Design_PileBunker_Attach_Ground.BP_Projectile_Design_PileBunker_Attach_Ground_C.ExecuteUbergraph_BP_Projectile_Design_PileBunker_Attach_Ground
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Design_PileBunker_Attach_Ground_C::ExecuteUbergraph_BP_Projectile_Design_PileBunker_Attach_Ground(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_PileBunker_Attach_Ground_C", "ExecuteUbergraph_BP_Projectile_Design_PileBunker_Attach_Ground");

	Params::BP_Projectile_Design_PileBunker_Attach_Ground_C_ExecuteUbergraph_BP_Projectile_Design_PileBunker_Attach_Ground Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_PileBunker_Attach_Ground.BP_Projectile_Design_PileBunker_Attach_Ground_C.OnExplode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELProjectileDestroyReason               Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Projectile_Design_PileBunker_Attach_Ground_C::OnExplode(ELProjectileDestroyReason Reason, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_PileBunker_Attach_Ground_C", "OnExplode");

	Params::BP_Projectile_Design_PileBunker_Attach_Ground_C_OnExplode Parms{};

	Parms.Reason = Reason;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_PileBunker_Attach_Ground.BP_Projectile_Design_PileBunker_Attach_Ground_C.InitProjectile
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_Design_PileBunker_Attach_Ground_C::InitProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_PileBunker_Attach_Ground_C", "InitProjectile");

	UObject::ProcessEvent(Func, nullptr);
}

}


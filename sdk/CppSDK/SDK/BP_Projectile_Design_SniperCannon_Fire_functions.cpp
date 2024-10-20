#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_SniperCannon_Fire

#include "Basic.hpp"

#include "BP_Projectile_Design_SniperCannon_Fire_classes.hpp"
#include "BP_Projectile_Design_SniperCannon_Fire_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Design_SniperCannon_Fire.BP_Projectile_Design_SniperCannon_Fire_C.ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Design_SniperCannon_Fire_C::ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_SniperCannon_Fire_C", "ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire");

	Params::BP_Projectile_Design_SniperCannon_Fire_C_ExecuteUbergraph_BP_Projectile_Design_SniperCannon_Fire Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_SniperCannon_Fire.BP_Projectile_Design_SniperCannon_Fire_C.OnDisappear
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELProjectileDestroyReason               Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Projectile_Design_SniperCannon_Fire_C::OnDisappear(ELProjectileDestroyReason Reason, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_SniperCannon_Fire_C", "OnDisappear");

	Params::BP_Projectile_Design_SniperCannon_Fire_C_OnDisappear Parms{};

	Parms.Reason = Reason;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_SniperCannon_Fire.BP_Projectile_Design_SniperCannon_Fire_C.OnExplode
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELProjectileDestroyReason               Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       HitResult                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Projectile_Design_SniperCannon_Fire_C::OnExplode(ELProjectileDestroyReason Reason, const struct FHitResult& HitResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_SniperCannon_Fire_C", "OnExplode");

	Params::BP_Projectile_Design_SniperCannon_Fire_C_OnExplode Parms{};

	Parms.Reason = Reason;
	Parms.HitResult = std::move(HitResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_SniperCannon_Fire.BP_Projectile_Design_SniperCannon_Fire_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Design_SniperCannon_Fire_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_SniperCannon_Fire_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_Design_Simon_Ground_Before

#include "Basic.hpp"

#include "BP_Projectile_Design_Simon_Ground_Before_classes.hpp"
#include "BP_Projectile_Design_Simon_Ground_Before_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_Design_Simon_Ground_Before.BP_Projectile_Design_Simon_Ground_Before_C.ExecuteUbergraph_BP_Projectile_Design_Simon_Ground_Before
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_Design_Simon_Ground_Before_C::ExecuteUbergraph_BP_Projectile_Design_Simon_Ground_Before(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_Simon_Ground_Before_C", "ExecuteUbergraph_BP_Projectile_Design_Simon_Ground_Before");

	Params::BP_Projectile_Design_Simon_Ground_Before_C_ExecuteUbergraph_BP_Projectile_Design_Simon_Ground_Before Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_Design_Simon_Ground_Before.BP_Projectile_Design_Simon_Ground_Before_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_Design_Simon_Ground_Before_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_Design_Simon_Ground_Before_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_WireProjectile

#include "Basic.hpp"

#include "BP_Action_WireProjectile_classes.hpp"
#include "BP_Action_WireProjectile_parameters.hpp"


namespace SDK
{

// Function BP_Action_WireProjectile.BP_Action_WireProjectile_C.ExecuteUbergraph_BP_Action_WireProjectile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WireProjectile_C::ExecuteUbergraph_BP_Action_WireProjectile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WireProjectile_C", "ExecuteUbergraph_BP_Action_WireProjectile");

	Params::BP_Action_WireProjectile_C_ExecuteUbergraph_BP_Action_WireProjectile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_WireProjectile.BP_Action_WireProjectile_C.OnCompleteRewindProjectile
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_WireProjectile_C::OnCompleteRewindProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WireProjectile_C", "OnCompleteRewindProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WireProjectile.BP_Action_WireProjectile_C.OnEndProjectile
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_WireProjectile_C::OnEndProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WireProjectile_C", "OnEndProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_WireProjectile.BP_Action_WireProjectile_C.OnStartProjectile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Projectile_Wire_Base_C*       WireProjectile_0                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WireProjectile_C::OnStartProjectile(class ABP_Projectile_Wire_Base_C* WireProjectile_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WireProjectile_C", "OnStartProjectile");

	Params::BP_Action_WireProjectile_C_OnStartProjectile Parms{};

	Parms.WireProjectile_0 = WireProjectile_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_WireProjectile.BP_Action_WireProjectile_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_WireProjectile_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WireProjectile_C", "OnStop");

	Params::BP_Action_WireProjectile_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_WireProjectile.BP_Action_WireProjectile_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_WireProjectile_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_WireProjectile_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}

}

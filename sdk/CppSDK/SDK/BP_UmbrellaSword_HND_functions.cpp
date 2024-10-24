#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_UmbrellaSword_HND

#include "Basic.hpp"

#include "BP_UmbrellaSword_HND_classes.hpp"
#include "BP_UmbrellaSword_HND_parameters.hpp"


namespace SDK
{

// Function BP_UmbrellaSword_HND.BP_UmbrellaSword_HND_C.ExecuteUbergraph_BP_UmbrellaSword_HND
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UmbrellaSword_HND_C::ExecuteUbergraph_BP_UmbrellaSword_HND(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UmbrellaSword_HND_C", "ExecuteUbergraph_BP_UmbrellaSword_HND");

	Params::BP_UmbrellaSword_HND_C_ExecuteUbergraph_BP_UmbrellaSword_HND Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UmbrellaSword_HND.BP_UmbrellaSword_HND_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_UmbrellaSword_HND_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UmbrellaSword_HND_C", "OnStop");

	Params::BP_UmbrellaSword_HND_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_UmbrellaSword_HND.BP_UmbrellaSword_HND_C.OnGuard
// (BlueprintCallable, BlueprintEvent)

void UBP_UmbrellaSword_HND_C::OnGuard()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_UmbrellaSword_HND_C", "OnGuard");

	UObject::ProcessEvent(Func, nullptr);
}

}


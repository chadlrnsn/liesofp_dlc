#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Grab

#include "Basic.hpp"

#include "BP_Action_Grab_classes.hpp"
#include "BP_Action_Grab_parameters.hpp"


namespace SDK
{

// Function BP_Action_Grab.BP_Action_Grab_C.ExecuteUbergraph_BP_Action_Grab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grab_C::ExecuteUbergraph_BP_Action_Grab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grab_C", "ExecuteUbergraph_BP_Action_Grab");

	Params::BP_Action_Grab_C_ExecuteUbergraph_BP_Action_Grab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grab.BP_Action_Grab_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grab_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grab_C", "OnStop");

	Params::BP_Action_Grab_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grab.BP_Action_Grab_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_Grab_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grab_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Grabbed

#include "Basic.hpp"

#include "BP_Action_Grabbed_classes.hpp"
#include "BP_Action_Grabbed_parameters.hpp"


namespace SDK
{

// Function BP_Action_Grabbed.BP_Action_Grabbed_C.ExecuteUbergraph_BP_Action_Grabbed
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grabbed_C::ExecuteUbergraph_BP_Action_Grabbed(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grabbed_C", "ExecuteUbergraph_BP_Action_Grabbed");

	Params::BP_Action_Grabbed_C_ExecuteUbergraph_BP_Action_Grabbed Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grabbed.BP_Action_Grabbed_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_Grabbed_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grabbed_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grabbed.BP_Action_Grabbed_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grabbed_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grabbed_C", "OnStop");

	Params::BP_Action_Grabbed_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Grabbed.BP_Action_Grabbed_C.OnGrabbedPlayIsTooLong
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_Grabbed_C::OnGrabbedPlayIsTooLong()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grabbed_C", "OnGrabbedPlayIsTooLong");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Grabbed.BP_Action_Grabbed_C.OnCurrMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MontageInstanceID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Grabbed_C::OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Grabbed_C", "OnCurrMontageEnded");

	Params::BP_Action_Grabbed_C_OnCurrMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(Func, &Parms);
}

}

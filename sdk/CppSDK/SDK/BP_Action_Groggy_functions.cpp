#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_Groggy

#include "Basic.hpp"

#include "BP_Action_Groggy_classes.hpp"
#include "BP_Action_Groggy_parameters.hpp"


namespace SDK
{

// Function BP_Action_Groggy.BP_Action_Groggy_C.ExecuteUbergraph_BP_Action_Groggy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Groggy_C::ExecuteUbergraph_BP_Action_Groggy(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Groggy_C", "ExecuteUbergraph_BP_Action_Groggy");

	Params::BP_Action_Groggy_C_ExecuteUbergraph_BP_Action_Groggy Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Groggy.BP_Action_Groggy_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Groggy_C::OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Groggy_C", "OnTick");

	Params::BP_Action_Groggy_C_OnTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Groggy.BP_Action_Groggy_C.OnGroggyEnded
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_Groggy_C::OnGroggyEnded()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Groggy_C", "OnGroggyEnded");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Groggy.BP_Action_Groggy_C.ProcessHitAnim
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_Groggy_C::ProcessHitAnim()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Groggy_C", "ProcessHitAnim");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_Groggy.BP_Action_Groggy_C.OnCurrMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MontageInstanceID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Groggy_C::OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Groggy_C", "OnCurrMontageEnded");

	Params::BP_Action_Groggy_C_OnCurrMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Groggy.BP_Action_Groggy_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_Groggy_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Groggy_C", "OnStop");

	Params::BP_Action_Groggy_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_Groggy.BP_Action_Groggy_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_Groggy_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_Groggy_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}

}


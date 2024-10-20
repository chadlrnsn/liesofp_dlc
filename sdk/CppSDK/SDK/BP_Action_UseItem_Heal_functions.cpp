#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_UseItem_Heal

#include "Basic.hpp"

#include "BP_Action_UseItem_Heal_classes.hpp"
#include "BP_Action_UseItem_Heal_parameters.hpp"


namespace SDK
{

// Function BP_Action_UseItem_Heal.BP_Action_UseItem_Heal_C.ExecuteUbergraph_BP_Action_UseItem_Heal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UseItem_Heal_C::ExecuteUbergraph_BP_Action_UseItem_Heal(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UseItem_Heal_C", "ExecuteUbergraph_BP_Action_UseItem_Heal");

	Params::BP_Action_UseItem_Heal_C_ExecuteUbergraph_BP_Action_UseItem_Heal Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UseItem_Heal.BP_Action_UseItem_Heal_C.OnStopByMe
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        StoppingAction                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UseItem_Heal_C::OnStopByMe(class ULActBase* StoppingAction)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UseItem_Heal_C", "OnStopByMe");

	Params::BP_Action_UseItem_Heal_C_OnStopByMe Parms{};

	Parms.StoppingAction = StoppingAction;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UseItem_Heal.BP_Action_UseItem_Heal_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UseItem_Heal_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UseItem_Heal_C", "OnStop");

	Params::BP_Action_UseItem_Heal_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UseItem_Heal.BP_Action_UseItem_Heal_C.OnCurrMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MontageInstanceID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_UseItem_Heal_C::OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UseItem_Heal_C", "OnCurrMontageEnded");

	Params::BP_Action_UseItem_Heal_C_OnCurrMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_UseItem_Heal.BP_Action_UseItem_Heal_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_UseItem_Heal_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UseItem_Heal_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_UseItem_Heal.BP_Action_UseItem_Heal_C.OnPreProcessAction
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UBP_Action_UseItem_Heal_C::OnPreProcessAction()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_UseItem_Heal_C", "OnPreProcessAction");

	Params::BP_Action_UseItem_Heal_C_OnPreProcessAction Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_GuardEx_Counter

#include "Basic.hpp"

#include "BP_Action_GuardEx_Counter_classes.hpp"
#include "BP_Action_GuardEx_Counter_parameters.hpp"


namespace SDK
{

// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.ExecuteUbergraph_BP_Action_GuardEx_Counter
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_GuardEx_Counter_C::ExecuteUbergraph_BP_Action_GuardEx_Counter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "ExecuteUbergraph_BP_Action_GuardEx_Counter");

	Params::BP_Action_GuardEx_Counter_C_ExecuteUbergraph_BP_Action_GuardEx_Counter Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.OnCommandOccurred_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULActMgrComponent*                ActMgrComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Command                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Lever                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipCommandPrerequisitiesCheck                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Action_GuardEx_Counter_C::OnCommandOccurred_Event(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "OnCommandOccurred_Event");

	Params::BP_Action_GuardEx_Counter_C_OnCommandOccurred_Event Parms{};

	Parms.ActMgrComponent = ActMgrComponent;
	Parms.TargetActor = TargetActor;
	Parms.Command = Command;
	Parms.Lever = std::move(Lever);
	Parms.SkipCommandPrerequisitiesCheck = SkipCommandPrerequisitiesCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.OnCurrMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MontageInstanceID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_GuardEx_Counter_C::OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "OnCurrMontageEnded");

	Params::BP_Action_GuardEx_Counter_C_OnCurrMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.OnCurrMontageBlendOutStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MontageInstanceID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_GuardEx_Counter_C::OnCurrMontageBlendOutStarted(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "OnCurrMontageBlendOutStarted");

	Params::BP_Action_GuardEx_Counter_C_OnCurrMontageBlendOutStarted Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_GuardEx_Counter_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "OnStop");

	Params::BP_Action_GuardEx_Counter_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_GuardEx_Counter_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.SetReinforcedVariableValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             VariableName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_GuardEx_Counter_C::SetReinforcedVariableValue(class FName VariableName, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "SetReinforcedVariableValue");

	Params::BP_Action_GuardEx_Counter_C_SetReinforcedVariableValue Parms{};

	Parms.VariableName = VariableName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_GuardEx_Counter.BP_Action_GuardEx_Counter_C.ClearReinforcedVariableValues
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_GuardEx_Counter_C::ClearReinforcedVariableValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_GuardEx_Counter_C", "ClearReinforcedVariableValues");

	UObject::ProcessEvent(Func, nullptr);
}

}


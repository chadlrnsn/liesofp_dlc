#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_SlaveArm_Fulminis

#include "Basic.hpp"

#include "BP_Action_SlaveArm_Fulminis_classes.hpp"
#include "BP_Action_SlaveArm_Fulminis_parameters.hpp"


namespace SDK
{

// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.ExecuteUbergraph_BP_Action_SlaveArm_Fulminis
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_Fulminis_C::ExecuteUbergraph_BP_Action_SlaveArm_Fulminis(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "ExecuteUbergraph_BP_Action_SlaveArm_Fulminis");

	Params::BP_Action_SlaveArm_Fulminis_C_ExecuteUbergraph_BP_Action_SlaveArm_Fulminis Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_Fulminis_C::OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "OnTick");

	Params::BP_Action_SlaveArm_Fulminis_C_OnTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.CheckIfSectionChanged
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_Fulminis_C::CheckIfSectionChanged()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "CheckIfSectionChanged");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.OnCurrMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MontageInstanceID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_Fulminis_C::OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "OnCurrMontageEnded");

	Params::BP_Action_SlaveArm_Fulminis_C_OnCurrMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_Fulminis_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "OnStop");

	Params::BP_Action_SlaveArm_Fulminis_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.Fire
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_Fulminis_C::Fire()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "Fire");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.OnFullCharge_Step_0
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_Fulminis_C::OnFullCharge_Step_0()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "OnFullCharge_Step_0");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.OnCommandOccurred_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULActMgrComponent*                ActMgrComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Command                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          Lever                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    SkipCommandPrerequisitiesCheck                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_Action_SlaveArm_Fulminis_C::OnCommandOccurred_Event(class ULActMgrComponent* ActMgrComponent, class AActor* TargetActor, class FName Command, const struct FVector& Lever, bool SkipCommandPrerequisitiesCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "OnCommandOccurred_Event");

	Params::BP_Action_SlaveArm_Fulminis_C_OnCommandOccurred_Event Parms{};

	Parms.ActMgrComponent = ActMgrComponent;
	Parms.TargetActor = TargetActor;
	Parms.Command = Command;
	Parms.Lever = std::move(Lever);
	Parms.SkipCommandPrerequisitiesCheck = SkipCommandPrerequisitiesCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_SlaveArm_Fulminis_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.PlaySlaveArmMontage
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_Fulminis_C::PlaySlaveArmMontage()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "PlaySlaveArmMontage");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.SetReinforcedVariableValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             VariableName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_Fulminis_C::SetReinforcedVariableValue(class FName VariableName, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "SetReinforcedVariableValue");

	Params::BP_Action_SlaveArm_Fulminis_C_SetReinforcedVariableValue Parms{};

	Parms.VariableName = VariableName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_Fulminis.BP_Action_SlaveArm_Fulminis_C.ClearReinforcedVariableValues
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_Fulminis_C::ClearReinforcedVariableValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_Fulminis_C", "ClearReinforcedVariableValues");

	UObject::ProcessEvent(Func, nullptr);
}

}


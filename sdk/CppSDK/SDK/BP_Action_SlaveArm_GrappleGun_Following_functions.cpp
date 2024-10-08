#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_SlaveArm_GrappleGun_Following

#include "Basic.hpp"

#include "BP_Action_SlaveArm_GrappleGun_Following_classes.hpp"
#include "BP_Action_SlaveArm_GrappleGun_Following_parameters.hpp"


namespace SDK
{

// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.ExecuteUbergraph_BP_Action_SlaveArm_GrappleGun_Following
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_GrappleGun_Following_C::ExecuteUbergraph_BP_Action_SlaveArm_GrappleGun_Following(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "ExecuteUbergraph_BP_Action_SlaveArm_GrappleGun_Following");

	Params::BP_Action_SlaveArm_GrappleGun_Following_C_ExecuteUbergraph_BP_Action_SlaveArm_GrappleGun_Following Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.OnArrived
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_GrappleGun_Following_C::OnArrived()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "OnArrived");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_SlaveArm_GrappleGun_Following_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.OnTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_GrappleGun_Following_C::OnTick(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "OnTick");

	Params::BP_Action_SlaveArm_GrappleGun_Following_C_OnTick Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.OnCurrMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                     Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bInterrupted                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   MontageInstanceID                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_GrappleGun_Following_C::OnCurrMontageEnded(class UAnimMontage* Montage, bool bInterrupted, int32 MontageInstanceID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "OnCurrMontageEnded");

	Params::BP_Action_SlaveArm_GrappleGun_Following_C_OnCurrMontageEnded Parms{};

	Parms.Montage = Montage;
	Parms.bInterrupted = bInterrupted;
	Parms.MontageInstanceID = MontageInstanceID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.OnFollowingStop
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_GrappleGun_Following_C::OnFollowingStop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "OnFollowingStop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_GrappleGun_Following_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "OnStop");

	Params::BP_Action_SlaveArm_GrappleGun_Following_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.OnWireAttached
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALCharacter*                      Target                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_GrappleGun_Following_C::OnWireAttached(class ALCharacter* Target)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "OnWireAttached");

	Params::BP_Action_SlaveArm_GrappleGun_Following_C_OnWireAttached Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.SetReinforcedVariableValue
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             VariableName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Value                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_SlaveArm_GrappleGun_Following_C::SetReinforcedVariableValue(class FName VariableName, class FName Value)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "SetReinforcedVariableValue");

	Params::BP_Action_SlaveArm_GrappleGun_Following_C_SetReinforcedVariableValue Parms{};

	Parms.VariableName = VariableName;
	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_SlaveArm_GrappleGun_Following.BP_Action_SlaveArm_GrappleGun_Following_C.ClearReinforcedVariableValues
// (Public, BlueprintCallable, BlueprintEvent)

void UBP_Action_SlaveArm_GrappleGun_Following_C::ClearReinforcedVariableValues()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_SlaveArm_GrappleGun_Following_C", "ClearReinforcedVariableValues");

	UObject::ProcessEvent(Func, nullptr);
}

}


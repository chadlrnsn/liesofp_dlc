#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Stalker_Exile

#include "Basic.hpp"

#include "BP_Stalker_Exile_classes.hpp"
#include "BP_Stalker_Exile_parameters.hpp"


namespace SDK
{

// Function BP_Stalker_Exile.BP_Stalker_Exile_C.ExecuteUbergraph_BP_Stalker_Exile
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Stalker_Exile_C::ExecuteUbergraph_BP_Stalker_Exile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "ExecuteUbergraph_BP_Stalker_Exile");

	Params::BP_Stalker_Exile_C_ExecuteUbergraph_BP_Stalker_Exile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stalker_Exile.BP_Stalker_Exile_C.DeadCharacterBP
// (Event, Public, BlueprintEvent)

void ABP_Stalker_Exile_C::DeadCharacterBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "DeadCharacterBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stalker_Exile.BP_Stalker_Exile_C.Clear AITargetList
// (BlueprintCallable, BlueprintEvent)

void ABP_Stalker_Exile_C::Clear_AITargetList()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "Clear AITargetList");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stalker_Exile.BP_Stalker_Exile_C.SetCombatStateBP
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bCombatState                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Stalker_Exile_C::SetCombatStateBP(bool bCombatState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "SetCombatStateBP");

	Params::BP_Stalker_Exile_C_SetCombatStateBP Parms{};

	Parms.bCombatState = bCombatState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stalker_Exile.BP_Stalker_Exile_C.OnSleepStateChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bSleepState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Stalker_Exile_C::OnSleepStateChanged(bool bSleepState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "OnSleepStateChanged");

	Params::BP_Stalker_Exile_C_OnSleepStateChanged Parms{};

	Parms.bSleepState = bSleepState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Stalker_Exile.BP_Stalker_Exile_C.OnRespawnBP
// (Event, Public, BlueprintEvent)

void ABP_Stalker_Exile_C::OnRespawnBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "OnRespawnBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stalker_Exile.BP_Stalker_Exile_C.OnPostDead
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Stalker_Exile_C::OnPostDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "OnPostDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Stalker_Exile.BP_Stalker_Exile_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Stalker_Exile_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Stalker_Exile_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

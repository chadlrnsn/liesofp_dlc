#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Soldier_Melee

#include "Basic.hpp"

#include "BP_Soldier_Melee_classes.hpp"
#include "BP_Soldier_Melee_parameters.hpp"


namespace SDK
{

// Function BP_Soldier_Melee.BP_Soldier_Melee_C.ExecuteUbergraph_BP_Soldier_Melee
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Soldier_Melee_C::ExecuteUbergraph_BP_Soldier_Melee(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Soldier_Melee_C", "ExecuteUbergraph_BP_Soldier_Melee");

	Params::BP_Soldier_Melee_C_ExecuteUbergraph_BP_Soldier_Melee Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Soldier_Melee.BP_Soldier_Melee_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Soldier_Melee_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Soldier_Melee_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

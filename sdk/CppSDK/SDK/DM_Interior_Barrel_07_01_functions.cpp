#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_Interior_Barrel_07_01

#include "Basic.hpp"

#include "DM_Interior_Barrel_07_01_classes.hpp"
#include "DM_Interior_Barrel_07_01_parameters.hpp"


namespace SDK
{

// Function DM_Interior_Barrel_07_01.DM_Interior_Barrel_07_01_C.OnDestructCrashed
// (Event, Protected, BlueprintEvent)

void ADM_Interior_Barrel_07_01_C::OnDestructCrashed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_Interior_Barrel_07_01_C", "OnDestructCrashed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DM_Interior_Barrel_07_01.DM_Interior_Barrel_07_01_C.ExecuteUbergraph_DM_Interior_Barrel_07_01
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADM_Interior_Barrel_07_01_C::ExecuteUbergraph_DM_Interior_Barrel_07_01(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_Interior_Barrel_07_01_C", "ExecuteUbergraph_DM_Interior_Barrel_07_01");

	Params::DM_Interior_Barrel_07_01_C_ExecuteUbergraph_DM_Interior_Barrel_07_01 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


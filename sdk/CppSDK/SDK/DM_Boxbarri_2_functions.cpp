#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_Boxbarri_2

#include "Basic.hpp"

#include "DM_Boxbarri_2_classes.hpp"
#include "DM_Boxbarri_2_parameters.hpp"


namespace SDK
{

// Function DM_Boxbarri_2.DM_Boxbarri_2_C.OnDestructCrashed
// (Event, Protected, BlueprintEvent)

void ADM_Boxbarri_2_C::OnDestructCrashed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_Boxbarri_2_C", "OnDestructCrashed");

	UObject::ProcessEvent(Func, nullptr);
}


// Function DM_Boxbarri_2.DM_Boxbarri_2_C.ExecuteUbergraph_DM_Boxbarri_2
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADM_Boxbarri_2_C::ExecuteUbergraph_DM_Boxbarri_2(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_Boxbarri_2_C", "ExecuteUbergraph_DM_Boxbarri_2");

	Params::DM_Boxbarri_2_C_ExecuteUbergraph_DM_Boxbarri_2 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}

}


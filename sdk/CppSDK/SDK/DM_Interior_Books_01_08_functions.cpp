#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: DM_Interior_Books_01_08

#include "Basic.hpp"

#include "DM_Interior_Books_01_08_classes.hpp"
#include "DM_Interior_Books_01_08_parameters.hpp"


namespace SDK
{

// Function DM_Interior_Books_01_08.DM_Interior_Books_01_08_C.ExecuteUbergraph_DM_Interior_Books_01_08
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADM_Interior_Books_01_08_C::ExecuteUbergraph_DM_Interior_Books_01_08(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_Interior_Books_01_08_C", "ExecuteUbergraph_DM_Interior_Books_01_08");

	Params::DM_Interior_Books_01_08_C_ExecuteUbergraph_DM_Interior_Books_01_08 Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function DM_Interior_Books_01_08.DM_Interior_Books_01_08_C.OnDestructCrashed
// (Event, Protected, BlueprintEvent)

void ADM_Interior_Books_01_08_C::OnDestructCrashed()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("DM_Interior_Books_01_08_C", "OnDestructCrashed");

	UObject::ProcessEvent(Func, nullptr);
}

}


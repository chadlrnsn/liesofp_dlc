#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Humanity

#include "Basic.hpp"

#include "BP_Humanity_classes.hpp"
#include "BP_Humanity_parameters.hpp"


namespace SDK
{

// Function BP_Humanity.BP_Humanity_C.ExecuteUbergraph_BP_Humanity
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Humanity_C::ExecuteUbergraph_BP_Humanity(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Humanity_C", "ExecuteUbergraph_BP_Humanity");

	Params::BP_Humanity_C_ExecuteUbergraph_BP_Humanity Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Humanity.BP_Humanity_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Humanity_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Humanity_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}

}


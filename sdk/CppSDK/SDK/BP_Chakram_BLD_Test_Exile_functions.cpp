#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Chakram_BLD_Test_Exile

#include "Basic.hpp"

#include "BP_Chakram_BLD_Test_Exile_classes.hpp"
#include "BP_Chakram_BLD_Test_Exile_parameters.hpp"


namespace SDK
{

// Function BP_Chakram_BLD_Test_Exile.BP_Chakram_BLD_Test_Exile_C.ExecuteUbergraph_BP_Chakram_BLD_Test_Exile
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Chakram_BLD_Test_Exile_C::ExecuteUbergraph_BP_Chakram_BLD_Test_Exile(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Chakram_BLD_Test_Exile_C", "ExecuteUbergraph_BP_Chakram_BLD_Test_Exile");

	Params::BP_Chakram_BLD_Test_Exile_C_ExecuteUbergraph_BP_Chakram_BLD_Test_Exile Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Chakram_BLD_Test_Exile.BP_Chakram_BLD_Test_Exile_C.OnChakramReturned
// (BlueprintCallable, BlueprintEvent)

void UBP_Chakram_BLD_Test_Exile_C::OnChakramReturned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Chakram_BLD_Test_Exile_C", "OnChakramReturned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Chakram_BLD_Test_Exile.BP_Chakram_BLD_Test_Exile_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Chakram_BLD_Test_Exile_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Chakram_BLD_Test_Exile_C", "OnStop");

	Params::BP_Chakram_BLD_Test_Exile_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Chakram_BLD_Test_Exile.BP_Chakram_BLD_Test_Exile_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Chakram_BLD_Test_Exile_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Chakram_BLD_Test_Exile_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}

}

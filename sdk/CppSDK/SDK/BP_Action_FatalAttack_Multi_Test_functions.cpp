#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Action_FatalAttack_Multi_Test

#include "Basic.hpp"

#include "BP_Action_FatalAttack_Multi_Test_classes.hpp"
#include "BP_Action_FatalAttack_Multi_Test_parameters.hpp"


namespace SDK
{

// Function BP_Action_FatalAttack_Multi_Test.BP_Action_FatalAttack_Multi_Test_C.ExecuteUbergraph_BP_Action_FatalAttack_Multi_Test
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_FatalAttack_Multi_Test_C::ExecuteUbergraph_BP_Action_FatalAttack_Multi_Test(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FatalAttack_Multi_Test_C", "ExecuteUbergraph_BP_Action_FatalAttack_Multi_Test");

	Params::BP_Action_FatalAttack_Multi_Test_C_ExecuteUbergraph_BP_Action_FatalAttack_Multi_Test Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_FatalAttack_Multi_Test.BP_Action_FatalAttack_Multi_Test_C.FatalEnd_On
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_FatalAttack_Multi_Test_C::FatalEnd_On()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FatalAttack_Multi_Test_C", "FatalEnd_On");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_FatalAttack_Multi_Test.BP_Action_FatalAttack_Multi_Test_C.OnSyncTime
// (BlueprintCallable, BlueprintEvent)

void UBP_Action_FatalAttack_Multi_Test_C::OnSyncTime()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FatalAttack_Multi_Test_C", "OnSyncTime");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Action_FatalAttack_Multi_Test.BP_Action_FatalAttack_Multi_Test_C.OnStop
// (Event, Public, BlueprintEvent)
// Parameters:
// class ULActBase*                        ReasonAction                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             Reason                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Action_FatalAttack_Multi_Test_C::OnStop(class ULActBase* ReasonAction, class FName Reason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FatalAttack_Multi_Test_C", "OnStop");

	Params::BP_Action_FatalAttack_Multi_Test_C_OnStop Parms{};

	Parms.ReasonAction = ReasonAction;
	Parms.Reason = Reason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Action_FatalAttack_Multi_Test.BP_Action_FatalAttack_Multi_Test_C.OnStart
// (Event, Public, BlueprintEvent)

void UBP_Action_FatalAttack_Multi_Test_C::OnStart()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Action_FatalAttack_Multi_Test_C", "OnStart");

	UObject::ProcessEvent(Func, nullptr);
}

}

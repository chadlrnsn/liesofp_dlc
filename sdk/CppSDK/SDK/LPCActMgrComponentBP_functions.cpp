#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LPCActMgrComponentBP

#include "Basic.hpp"

#include "LPCActMgrComponentBP_classes.hpp"
#include "LPCActMgrComponentBP_parameters.hpp"


namespace SDK
{

// Function LPCActMgrComponentBP.LPCActMgrComponentBP_C.ExecuteUbergraph_LPCActMgrComponentBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULPCActMgrComponentBP_C::ExecuteUbergraph_LPCActMgrComponentBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LPCActMgrComponentBP_C", "ExecuteUbergraph_LPCActMgrComponentBP");

	Params::LPCActMgrComponentBP_C_ExecuteUbergraph_LPCActMgrComponentBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LPCActMgrComponentBP.LPCActMgrComponentBP_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)

void ULPCActMgrComponentBP_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LPCActMgrComponentBP_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}

}

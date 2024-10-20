#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_MoveStop

#include "Basic.hpp"

#include "BTask_MoveStop_classes.hpp"
#include "BTask_MoveStop_parameters.hpp"


namespace SDK
{

// Function BTask_MoveStop.BTask_MoveStop_C.ExecuteUbergraph_BTask_MoveStop
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTask_MoveStop_C::ExecuteUbergraph_BTask_MoveStop(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTask_MoveStop_C", "ExecuteUbergraph_BTask_MoveStop");

	Params::BTask_MoveStop_C_ExecuteUbergraph_BTask_MoveStop Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTask_MoveStop.BTask_MoveStop_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTask_MoveStop_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTask_MoveStop_C", "ReceiveExecuteAI");

	Params::BTask_MoveStop_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}


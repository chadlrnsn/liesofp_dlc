#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BTask_MoveToPosition

#include "Basic.hpp"

#include "BTask_MoveToPosition_classes.hpp"
#include "BTask_MoveToPosition_parameters.hpp"


namespace SDK
{

// Function BTask_MoveToPosition.BTask_MoveToPosition_C.ExecuteUbergraph_BTask_MoveToPosition
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTask_MoveToPosition_C::ExecuteUbergraph_BTask_MoveToPosition(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTask_MoveToPosition_C", "ExecuteUbergraph_BTask_MoveToPosition");

	Params::BTask_MoveToPosition_C_ExecuteUbergraph_BTask_MoveToPosition Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BTask_MoveToPosition.BTask_MoveToPosition_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*                    OwnerController                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                            ControlledPawn                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTask_MoveToPosition_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BTask_MoveToPosition_C", "ReceiveExecuteAI");

	Params::BTask_MoveToPosition_C_ReceiveExecuteAI Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Ergo_Trail

#include "Basic.hpp"

#include "BP_Ergo_Trail_classes.hpp"
#include "BP_Ergo_Trail_parameters.hpp"


namespace SDK
{

// Function BP_Ergo_Trail.BP_Ergo_Trail_C.ExecuteUbergraph_BP_Ergo_Trail
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ergo_Trail_C::ExecuteUbergraph_BP_Ergo_Trail(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "ExecuteUbergraph_BP_Ergo_Trail");

	Params::BP_Ergo_Trail_C_ExecuteUbergraph_BP_Ergo_Trail Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ergo_Trail.BP_Ergo_Trail_C.BndEvt__BP_Ergo_Trail_ErgoTrail_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UActorComponent*                  Component                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ergo_Trail_C::BndEvt__BP_Ergo_Trail_ErgoTrail_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "BndEvt__BP_Ergo_Trail_ErgoTrail_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature");

	Params::BP_Ergo_Trail_C_BndEvt__BP_Ergo_Trail_ErgoTrail_K2Node_ComponentBoundEvent_0_ActorComponentDeactivateSignature__DelegateSignature Parms{};

	Parms.Component = Component;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ergo_Trail.BP_Ergo_Trail_C.SetErgoData
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLDropErgoData                   InData                                                 (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_Ergo_Trail_C::SetErgoData(const struct FLDropErgoData& InData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "SetErgoData");

	Params::BP_Ergo_Trail_C_SetErgoData Parms{};

	Parms.InData = std::move(InData);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ergo_Trail.BP_Ergo_Trail_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Ergo_Trail_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ergo_Trail.BP_Ergo_Trail_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ergo_Trail_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "ReceiveTick");

	Params::BP_Ergo_Trail_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ergo_Trail.BP_Ergo_Trail_C.FollowTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           TargetActor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ergo_Trail_C::FollowTarget(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "FollowTarget");

	Params::BP_Ergo_Trail_C_FollowTarget Parms{};

	Parms.TargetActor = TargetActor;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Ergo_Trail.BP_Ergo_Trail_C.FollowEnd
// (BlueprintCallable, BlueprintEvent)

void ABP_Ergo_Trail_C::FollowEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "FollowEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Ergo_Trail.BP_Ergo_Trail_C.TickFollowTarget
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Ergo_Trail_C::TickFollowTarget(float DeltaTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Ergo_Trail_C", "TickFollowTarget");

	Params::BP_Ergo_Trail_C_TickFollowTarget Parms{};

	Parms.DeltaTime = DeltaTime;

	UObject::ProcessEvent(Func, &Parms);
}

}

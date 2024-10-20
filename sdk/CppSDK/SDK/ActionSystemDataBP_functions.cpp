#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ActionSystemDataBP

#include "Basic.hpp"

#include "ActionSystemDataBP_classes.hpp"
#include "ActionSystemDataBP_parameters.hpp"


namespace SDK
{

// Function ActionSystemDataBP.ActionSystemDataBP_C.ExecuteUbergraph_ActionSystemDataBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AActionSystemDataBP_C::ExecuteUbergraph_ActionSystemDataBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSystemDataBP_C", "ExecuteUbergraph_ActionSystemDataBP");

	Params::ActionSystemDataBP_C_ExecuteUbergraph_ActionSystemDataBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionSystemDataBP.ActionSystemDataBP_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AActionSystemDataBP_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSystemDataBP_C", "ReceiveTick");

	Params::ActionSystemDataBP_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function ActionSystemDataBP.ActionSystemDataBP_C.FindHandBloodMaterial_ForCurrentBody
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstance*                OutMaterial                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AActionSystemDataBP_C::FindHandBloodMaterial_ForCurrentBody(class UMaterialInstance** OutMaterial)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSystemDataBP_C", "FindHandBloodMaterial_ForCurrentBody");

	Params::ActionSystemDataBP_C_FindHandBloodMaterial_ForCurrentBody Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMaterial != nullptr)
		*OutMaterial = Parms.OutMaterial;

	return Parms.ReturnValue;
}


// Function ActionSystemDataBP.ActionSystemDataBP_C.FindPixelDepthOffsetData_ForCurrentFace
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                         OutMask                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutIntensity                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AActionSystemDataBP_C::FindPixelDepthOffsetData_ForCurrentFace(class UTexture** OutMask, float* OutIntensity)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSystemDataBP_C", "FindPixelDepthOffsetData_ForCurrentFace");

	Params::ActionSystemDataBP_C_FindPixelDepthOffsetData_ForCurrentFace Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMask != nullptr)
		*OutMask = Parms.OutMask;

	if (OutIntensity != nullptr)
		*OutIntensity = Parms.OutIntensity;

	return Parms.ReturnValue;
}


// Function ActionSystemDataBP.ActionSystemDataBP_C.FindShrinkMesh_ForCurrentBody
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALCharacter*                      TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMesh*                    OutMesh                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AActionSystemDataBP_C::FindShrinkMesh_ForCurrentBody(class ALCharacter* TargetCharacter, class USkeletalMesh** OutMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSystemDataBP_C", "FindShrinkMesh_ForCurrentBody");

	Params::ActionSystemDataBP_C_FindShrinkMesh_ForCurrentBody Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	if (OutMesh != nullptr)
		*OutMesh = Parms.OutMesh;

	return Parms.ReturnValue;
}


// Function ActionSystemDataBP.ActionSystemDataBP_C.OnApplyNeedShrink
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALCharacter*                      TargetCharacter                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AActionSystemDataBP_C::OnApplyNeedShrink(class ALCharacter* TargetCharacter)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("ActionSystemDataBP_C", "OnApplyNeedShrink");

	Params::ActionSystemDataBP_C_OnApplyNeedShrink Parms{};

	Parms.TargetCharacter = TargetCharacter;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


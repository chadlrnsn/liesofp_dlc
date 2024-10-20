#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LGalleryActor

#include "Basic.hpp"

#include "LGalleryActor_classes.hpp"
#include "LGalleryActor_parameters.hpp"


namespace SDK
{

// Function LGalleryActor.LGalleryActor_C.ExecuteUbergraph_LGalleryActor
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALGalleryActor_C::ExecuteUbergraph_LGalleryActor(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LGalleryActor_C", "ExecuteUbergraph_LGalleryActor");

	Params::LGalleryActor_C_ExecuteUbergraph_LGalleryActor Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LGalleryActor.LGalleryActor_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ALGalleryActor_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LGalleryActor_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function LGalleryActor.LGalleryActor_C.Get Camera Pivot Component
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ForPreviewCam                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*                  Component                                              (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALGalleryActor_C::Get_Camera_Pivot_Component(bool ForPreviewCam, class USceneComponent** Component)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LGalleryActor_C", "Get Camera Pivot Component");

	Params::LGalleryActor_C_Get_Camera_Pivot_Component Parms{};

	Parms.ForPreviewCam = ForPreviewCam;

	UObject::ProcessEvent(Func, &Parms);

	if (Component != nullptr)
		*Component = Parms.Component;
}


// Function LGalleryActor.LGalleryActor_C.GetGalleryMeshComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UMeshComponent*                   GalleryMesh                                            (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALGalleryActor_C::GetGalleryMeshComponent(class UMeshComponent** GalleryMesh)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LGalleryActor_C", "GetGalleryMeshComponent");

	Params::LGalleryActor_C_GetGalleryMeshComponent Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (GalleryMesh != nullptr)
		*GalleryMesh = Parms.GalleryMesh;
}


// Function LGalleryActor.LGalleryActor_C.SetCameraMoveMaxInfo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   MaxWidth                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   MaxHeight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALGalleryActor_C::SetCameraMoveMaxInfo(float MaxWidth, float MaxHeight)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LGalleryActor_C", "SetCameraMoveMaxInfo");

	Params::LGalleryActor_C_SetCameraMoveMaxInfo Parms{};

	Parms.MaxWidth = MaxWidth;
	Parms.MaxHeight = MaxHeight;

	UObject::ProcessEvent(Func, &Parms);
}


// Function LGalleryActor.LGalleryActor_C.Get Zoom in Out Limit Value
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   OutMin                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   OutMax                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALGalleryActor_C::Get_Zoom_in_Out_Limit_Value(float* OutMin, float* OutMax) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LGalleryActor_C", "Get Zoom in Out Limit Value");

	Params::LGalleryActor_C_Get_Zoom_in_Out_Limit_Value Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutMin != nullptr)
		*OutMin = Parms.OutMin;

	if (OutMax != nullptr)
		*OutMax = Parms.OutMax;
}


// Function LGalleryActor.LGalleryActor_C.Get Zoom Speed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                                   OutSpeed                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALGalleryActor_C::Get_Zoom_Speed(float* OutSpeed) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("LGalleryActor_C", "Get Zoom Speed");

	Params::LGalleryActor_C_Get_Zoom_Speed Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (OutSpeed != nullptr)
		*OutSpeed = Parms.OutSpeed;
}

}


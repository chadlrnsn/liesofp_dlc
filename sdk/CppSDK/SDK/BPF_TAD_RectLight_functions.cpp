#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPF_TAD_RectLight

#include "Basic.hpp"

#include "BPF_TAD_RectLight_classes.hpp"
#include "BPF_TAD_RectLight_parameters.hpp"


namespace SDK
{

// Function BPF_TAD_RectLight.BPF_TAD_RectLight_C.BPF TAD Rect Light
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class URectLightComponent*              RectLight                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                     LightColor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Intensity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Temperature                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   AttenuationRadius                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SourceWidth                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   SourceHeight                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BarnDoorAngle                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   BarnDoorLength                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   VolumScatterIntensity                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// EComponentMobility                      Mobility                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// ELightUnits                             IntensityUnits                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    CastShadow                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                                   Specular_Scale                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Contact_Shadow                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                          __WorldContext                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPF_TAD_RectLight_C::BPF_TAD_Rect_Light(class URectLightComponent* RectLight, const struct FLinearColor& LightColor, float Intensity, float Temperature, float AttenuationRadius, float SourceWidth, float SourceHeight, float BarnDoorAngle, float BarnDoorLength, float VolumScatterIntensity, EComponentMobility Mobility, ELightUnits IntensityUnits, bool CastShadow, float Specular_Scale, float Contact_Shadow, class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("BPF_TAD_RectLight_C", "BPF TAD Rect Light");

	Params::BPF_TAD_RectLight_C_BPF_TAD_Rect_Light Parms{};

	Parms.RectLight = RectLight;
	Parms.LightColor = std::move(LightColor);
	Parms.Intensity = Intensity;
	Parms.Temperature = Temperature;
	Parms.AttenuationRadius = AttenuationRadius;
	Parms.SourceWidth = SourceWidth;
	Parms.SourceHeight = SourceHeight;
	Parms.BarnDoorAngle = BarnDoorAngle;
	Parms.BarnDoorLength = BarnDoorLength;
	Parms.VolumScatterIntensity = VolumScatterIntensity;
	Parms.Mobility = Mobility;
	Parms.IntensityUnits = IntensityUnits;
	Parms.CastShadow = CastShadow;
	Parms.Specular_Scale = Specular_Scale;
	Parms.Contact_Shadow = Contact_Shadow;
	Parms.__WorldContext = __WorldContext;

	GetDefaultObj()->ProcessEvent(Func, &Parms);
}

}

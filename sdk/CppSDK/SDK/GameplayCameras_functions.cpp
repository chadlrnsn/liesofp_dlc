#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: GameplayCameras

#include "Basic.hpp"

#include "GameplayCameras_classes.hpp"
#include "GameplayCameras_parameters.hpp"


namespace SDK
{

// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShake
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*             PlayerCameraManager                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMatineeCameraShake>  ShakeClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECameraShakePlaySpace                   PlaySpace                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         UserPlaySpaceRot                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UMatineeCameraShake*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShake(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MatineeCameraShake", "StartMatineeCameraShake");

	Params::MatineeCameraShake_StartMatineeCameraShake Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = std::move(UserPlaySpaceRot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.StartMatineeCameraShakeFromSource
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class APlayerCameraManager*             PlayerCameraManager                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UMatineeCameraShake>  ShakeClass                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UCameraShakeSourceComponent*      SourceComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// ECameraShakePlaySpace                   PlaySpace                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                         UserPlaySpaceRot                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UMatineeCameraShake*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMatineeCameraShake* UMatineeCameraShake::StartMatineeCameraShakeFromSource(class APlayerCameraManager* PlayerCameraManager, TSubclassOf<class UMatineeCameraShake> ShakeClass, class UCameraShakeSourceComponent* SourceComponent, float Scale, ECameraShakePlaySpace PlaySpace, const struct FRotator& UserPlaySpaceRot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MatineeCameraShake", "StartMatineeCameraShakeFromSource");

	Params::MatineeCameraShake_StartMatineeCameraShakeFromSource Parms{};

	Parms.PlayerCameraManager = PlayerCameraManager;
	Parms.ShakeClass = ShakeClass;
	Parms.SourceComponent = SourceComponent;
	Parms.Scale = Scale;
	Parms.PlaySpace = PlaySpace;
	Parms.UserPlaySpaceRot = std::move(UserPlaySpaceRot);

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShake.BlueprintUpdateCameraShake
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                                   DeltaTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ALPHA                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo                 POV                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FMinimalViewInfo                 ModifiedPOV                                            (Parm, OutParm, NativeAccessSpecifierPublic)

void UMatineeCameraShake::BlueprintUpdateCameraShake(float DeltaTime, float ALPHA, const struct FMinimalViewInfo& POV, struct FMinimalViewInfo* ModifiedPOV)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatineeCameraShake", "BlueprintUpdateCameraShake");

	Params::MatineeCameraShake_BlueprintUpdateCameraShake Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.ALPHA = ALPHA;
	Parms.POV = std::move(POV);

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedPOV != nullptr)
		*ModifiedPOV = std::move(Parms.ModifiedPOV);
}


// Function GameplayCameras.MatineeCameraShake.ReceivePlayShake
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   Scale                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatineeCameraShake::ReceivePlayShake(float Scale)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatineeCameraShake", "ReceivePlayShake");

	Params::MatineeCameraShake_ReceivePlayShake Parms{};

	Parms.Scale = Scale;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameplayCameras.MatineeCameraShake.ReceiveStopShake
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bImmediately                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMatineeCameraShake::ReceiveStopShake(bool bImmediately)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveStopShake");

	Params::MatineeCameraShake_ReceiveStopShake Parms{};

	Parms.bImmediately = bImmediately;

	UObject::ProcessEvent(Func, &Parms);
}


// Function GameplayCameras.MatineeCameraShake.ReceiveIsFinished
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMatineeCameraShake::ReceiveIsFinished() const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MatineeCameraShake", "ReceiveIsFinished");

	Params::MatineeCameraShake_ReceiveIsFinished Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function GameplayCameras.MatineeCameraShakeFunctionLibrary.Conv_MatineeCameraShake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UCameraShakeBase*                 CameraShake                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMatineeCameraShake*              ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMatineeCameraShake* UMatineeCameraShakeFunctionLibrary::Conv_MatineeCameraShake(class UCameraShakeBase* CameraShake)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("MatineeCameraShakeFunctionLibrary", "Conv_MatineeCameraShake");

	Params::MatineeCameraShakeFunctionLibrary_Conv_MatineeCameraShake Parms{};

	Parms.CameraShake = CameraShake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: LOPARTnMusicPlugin

#include "Basic.hpp"

#include "LOPARTnMusicPlugin_classes.hpp"
#include "LOPARTnMusicPlugin_parameters.hpp"


namespace SDK
{

// Function LOPARTnMusicPlugin.LOPARTnMusicPluginBPLibrary.GetPlayerNickName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                           ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULOPARTnMusicPluginBPLibrary::GetPlayerNickName()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LOPARTnMusicPluginBPLibrary", "GetPlayerNickName");

	Params::LOPARTnMusicPluginBPLibrary_GetPlayerNickName Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LOPARTnMusicPlugin.LOPARTnMusicPluginBPLibrary.IsRightAcceptButton
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULOPARTnMusicPluginBPLibrary::IsRightAcceptButton()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LOPARTnMusicPluginBPLibrary", "IsRightAcceptButton");

	Params::LOPARTnMusicPluginBPLibrary_IsRightAcceptButton Parms{};

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}


// Function LOPARTnMusicPlugin.LOPARTnMusicPluginBPLibrary.LOPARTnMusicPluginSampleFunction
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// float                                   Param                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                                   ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULOPARTnMusicPluginBPLibrary::LOPARTnMusicPluginSampleFunction(float Param)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = StaticClass()->GetFunction("LOPARTnMusicPluginBPLibrary", "LOPARTnMusicPluginSampleFunction");

	Params::LOPARTnMusicPluginBPLibrary_LOPARTnMusicPluginSampleFunction Parms{};

	Parms.Param = Param;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	GetDefaultObj()->ProcessEvent(Func, &Parms);

	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;
}

}


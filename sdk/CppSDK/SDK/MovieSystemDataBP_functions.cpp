#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: MovieSystemDataBP

#include "Basic.hpp"

#include "MovieSystemDataBP_classes.hpp"
#include "MovieSystemDataBP_parameters.hpp"


namespace SDK
{

// Function MovieSystemDataBP.MovieSystemDataBP_C.ExecuteUbergraph_MovieSystemDataBP
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMovieSystemDataBP_C::ExecuteUbergraph_MovieSystemDataBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "ExecuteUbergraph_MovieSystemDataBP");

	Params::MovieSystemDataBP_C_ExecuteUbergraph_MovieSystemDataBP Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.StopBinkMovie
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                             MovieCodeName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMovieSystemDataBP_C::StopBinkMovie(class FName MovieCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "StopBinkMovie");

	Params::MovieSystemDataBP_C_StopBinkMovie Parms{};

	Parms.MovieCodeName = MovieCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.DeactivatePauseOnReachedEnd
// (Event, Public, BlueprintEvent)

void AMovieSystemDataBP_C::DeactivatePauseOnReachedEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "DeactivatePauseOnReachedEnd");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.BndEvt__MovieSystemDataBP_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_3_OnBinkMediaPlayerMediaPauseOnReachedEnd__DelegateSignature
// (BlueprintEvent)

void AMovieSystemDataBP_C::BndEvt__MovieSystemDataBP_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_3_OnBinkMediaPlayerMediaPauseOnReachedEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "BndEvt__MovieSystemDataBP_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_3_OnBinkMediaPlayerMediaPauseOnReachedEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_0_OnBinkMediaPlayerMediaOpened__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FString                           OpenedUrl                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void AMovieSystemDataBP_C::BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_0_OnBinkMediaPlayerMediaOpened__DelegateSignature(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_0_OnBinkMediaPlayerMediaOpened__DelegateSignature");

	Params::MovieSystemDataBP_C_BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_0_OnBinkMediaPlayerMediaOpened__DelegateSignature Parms{};

	Parms.OpenedUrl = std::move(OpenedUrl);

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_1_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature
// (BlueprintEvent)

void AMovieSystemDataBP_C::BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_1_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_1_OnBinkMediaPlayerMediaReachedEnd__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_2_OnBinkMediaPlayerMediaClosed__DelegateSignature
// (BlueprintEvent)

void AMovieSystemDataBP_C::BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_2_OnBinkMediaPlayerMediaClosed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "BndEvt__MovieSystemData_FullScreenMoviePlayer_K2Node_ComponentBoundEvent_2_OnBinkMediaPlayerMediaClosed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.PlayBinkMovie
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MovieCodeName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           MovieUrl                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                                    bPauseOnReachedEnd                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMovieSystemDataBP_C::PlayBinkMovie(class FName MovieCodeName, const class FString& MovieUrl, bool bPauseOnReachedEnd)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "PlayBinkMovie");

	Params::MovieSystemDataBP_C_PlayBinkMovie Parms{};

	Parms.MovieCodeName = MovieCodeName;
	Parms.MovieUrl = std::move(MovieUrl);
	Parms.bPauseOnReachedEnd = bPauseOnReachedEnd;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.IsPlayingBinkMovie
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMovieSystemDataBP_C::IsPlayingBinkMovie()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "IsPlayingBinkMovie");

	Params::MovieSystemDataBP_C_IsPlayingBinkMovie Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.GetMovieVolume
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             InMovieCodeName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                                   Volume                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMovieSystemDataBP_C::GetMovieVolume(class FName InMovieCodeName, float* Volume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "GetMovieVolume");

	Params::MovieSystemDataBP_C_GetMovieVolume Parms{};

	Parms.InMovieCodeName = InMovieCodeName;

	UObject::ProcessEvent(Func, &Parms);

	if (Volume != nullptr)
		*Volume = Parms.Volume;
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.PushMovieSoundMixes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MovieCodeName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMovieSystemDataBP_C::PushMovieSoundMixes(class FName MovieCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "PushMovieSoundMixes");

	Params::MovieSystemDataBP_C_PushMovieSoundMixes Parms{};

	Parms.MovieCodeName = MovieCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.ClearMovieSoundMixes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MovieCodeName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMovieSystemDataBP_C::ClearMovieSoundMixes(class FName MovieCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "ClearMovieSoundMixes");

	Params::MovieSystemDataBP_C_ClearMovieSoundMixes Parms{};

	Parms.MovieCodeName = MovieCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.EndMoviePushSoundMixes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MovieCodeName                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMovieSystemDataBP_C::EndMoviePushSoundMixes(class FName MovieCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "EndMoviePushSoundMixes");

	Params::MovieSystemDataBP_C_EndMoviePushSoundMixes Parms{};

	Parms.MovieCodeName = MovieCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.IsPauseOnReachedEnd
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool AMovieSystemDataBP_C::IsPauseOnReachedEnd()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "IsPauseOnReachedEnd");

	Params::MovieSystemDataBP_C_IsPauseOnReachedEnd Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function MovieSystemDataBP.MovieSystemDataBP_C.MovieSeekToLast
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AMovieSystemDataBP_C::MovieSeekToLast()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("MovieSystemDataBP_C", "MovieSeekToLast");

	UObject::ProcessEvent(Func, nullptr);
}

}

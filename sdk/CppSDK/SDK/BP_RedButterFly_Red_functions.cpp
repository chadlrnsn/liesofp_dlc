#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_RedButterFly_Red

#include "Basic.hpp"

#include "BP_RedButterFly_Red_classes.hpp"
#include "BP_RedButterFly_Red_parameters.hpp"


namespace SDK
{

// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.ExecuteUbergraph_BP_RedButterFly_Red
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::ExecuteUbergraph_BP_RedButterFly_Red(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "ExecuteUbergraph_BP_RedButterFly_Red");

	Params::BP_RedButterFly_Red_C_ExecuteUbergraph_BP_RedButterFly_Red Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.DoPlayAfterWait
// (BlueprintCallable, BlueprintEvent)

void ABP_RedButterFly_Red_C::DoPlayAfterWait()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "DoPlayAfterWait");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.DoPlay_RedButterfly
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                                   StartDelay                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::DoPlay_RedButterfly(float StartDelay)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "DoPlay_RedButterfly");

	Params::BP_RedButterFly_Red_C_DoPlay_RedButterfly Parms{};

	Parms.StartDelay = StartDelay;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.OnRespawnBP
// (Event, Public, BlueprintEvent)

void ABP_RedButterFly_Red_C::OnRespawnBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "OnRespawnBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.DeadCharacterBP
// (Event, Public, BlueprintEvent)

void ABP_RedButterFly_Red_C::DeadCharacterBP()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "DeadCharacterBP");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.ReceiveEndPlay
// (Event, Protected, BlueprintEvent)
// Parameters:
// EEndPlayReason                          EndPlayReason                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "ReceiveEndPlay");

	Params::BP_RedButterFly_Red_C_ReceiveEndPlay Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.OnApplyRunningAbnormal
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsApply                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             AbnormalCodeName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::OnApplyRunningAbnormal(bool IsApply, class FName AbnormalCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "OnApplyRunningAbnormal");

	Params::BP_RedButterFly_Red_C_OnApplyRunningAbnormal Parms{};

	Parms.IsApply = IsApply;
	Parms.AbnormalCodeName = AbnormalCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.OnPostDead
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_RedButterFly_Red_C::OnPostDead()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "OnPostDead");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.DelayToBeNormalPC
// (BlueprintCallable, BlueprintEvent)

void ABP_RedButterFly_Red_C::DelayToBeNormalPC()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "DelayToBeNormalPC");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.EndSecondOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::EndSecondOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "EndSecondOverlap");

	Params::BP_RedButterFly_Red_C_EndSecondOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.EndFirstOverlap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::EndFirstOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "EndFirstOverlap");

	Params::BP_RedButterFly_Red_C_EndFirstOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.BeginSecondOverlap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_RedButterFly_Red_C::BeginSecondOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "BeginSecondOverlap");

	Params::BP_RedButterFly_Red_C_BeginSecondOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.BeginFisrtOverlap
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              OverlappedComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   OtherBodyIndex                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                                    bFromSweep                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                       SweepResult                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_RedButterFly_Red_C::BeginFisrtOverlap(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "BeginFisrtOverlap");

	Params::BP_RedButterFly_Red_C_BeginFisrtOverlap Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = std::move(SweepResult);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "ReceiveTick");

	Params::BP_RedButterFly_Red_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_RedButterFly_Red_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.Do Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    InStartPlay                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                                    IsPlayHideSkill                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_RedButterFly_Red_C::Do_Play(bool InStartPlay, bool IsPlayHideSkill)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "Do Play");

	Params::BP_RedButterFly_Red_C_Do_Play Parms{};

	Parms.InStartPlay = InStartPlay;
	Parms.IsPlayHideSkill = IsPlayHideSkill;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.On End Skill For Stop Tracing
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                           Owner_0                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMomentConditionCaptureInfo      CapturedInfo                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void ABP_RedButterFly_Red_C::On_End_Skill_For_Stop_Tracing(class AActor* Owner_0, const struct FMomentConditionCaptureInfo& CapturedInfo)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "On End Skill For Stop Tracing");

	Params::BP_RedButterFly_Red_C_On_End_Skill_For_Stop_Tracing Parms{};

	Parms.Owner_0 = Owner_0;
	Parms.CapturedInfo = std::move(CapturedInfo);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.IsPlaying_RedButterfly
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                                    ReturnValue                                            (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool ABP_RedButterFly_Red_C::IsPlaying_RedButterfly()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "IsPlaying_RedButterfly");

	Params::BP_RedButterFly_Red_C_IsPlaying_RedButterfly Parms{};

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.OnActiveGroupping_RedButterfly
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ALNPCSpot*                        InGrouppingPropVolume                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::OnActiveGroupping_RedButterfly(class ALNPCSpot* InGrouppingPropVolume)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "OnActiveGroupping_RedButterfly");

	Params::BP_RedButterFly_Red_C_OnActiveGroupping_RedButterfly Parms{};

	Parms.InGrouppingPropVolume = InGrouppingPropVolume;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.PostProcessDeactivate
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_RedButterFly_Red_C::PostProcessDeactivate()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "PostProcessDeactivate");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_RedButterFly_Red.BP_RedButterFly_Red_C.Get Ghost Skill Code Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                                    IsToGhost                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             Out                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_RedButterFly_Red_C::Get_Ghost_Skill_Code_Name(bool IsToGhost, class FName* Out) const
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_RedButterFly_Red_C", "Get Ghost Skill Code Name");

	Params::BP_RedButterFly_Red_C_Get_Ghost_Skill_Code_Name Parms{};

	Parms.IsToGhost = IsToGhost;

	UObject::ProcessEvent(Func, &Parms);

	if (Out != nullptr)
		*Out = Parms.Out;
}

}

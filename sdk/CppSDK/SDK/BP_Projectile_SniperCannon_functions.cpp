#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Projectile_SniperCannon

#include "Basic.hpp"

#include "BP_Projectile_SniperCannon_classes.hpp"
#include "BP_Projectile_SniperCannon_parameters.hpp"


namespace SDK
{

// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.ExecuteUbergraph_BP_Projectile_SniperCannon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_SniperCannon_C::ExecuteUbergraph_BP_Projectile_SniperCannon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "ExecuteUbergraph_BP_Projectile_SniperCannon");

	Params::BP_Projectile_SniperCannon_C_ExecuteUbergraph_BP_Projectile_SniperCannon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                                   DeltaSeconds                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Projectile_SniperCannon_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "ReceiveTick");

	Params::BP_Projectile_SniperCannon_C_ReceiveTick Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_Projectile_SniperCannon_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "ReceiveBeginPlay");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.Stop
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_SniperCannon_C::Stop()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "Stop");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.BndEvt__BP_Projectile_Angular_Base_Collision_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*              HitComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                           OtherActor                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*              OtherComp                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          NormalImpulse                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                       Hit                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ABP_Projectile_SniperCannon_C::BndEvt__BP_Projectile_Angular_Base_Collision_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "BndEvt__BP_Projectile_Angular_Base_Collision_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature");

	Params::BP_Projectile_SniperCannon_C_BndEvt__BP_Projectile_Angular_Base_Collision_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature Parms{};

	Parms.HitComponent = HitComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.NormalImpulse = std::move(NormalImpulse);
	Parms.Hit = std::move(Hit);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.Start
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_SniperCannon_C::Start()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "Start");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.InitializeFromProjectileDesign
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_SniperCannon_C::InitializeFromProjectileDesign()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "InitializeFromProjectileDesign");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_SniperCannon_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "UserConstructionScript");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.FinishProjectile
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_SniperCannon_C::FinishProjectile()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "FinishProjectile");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Projectile_SniperCannon.BP_Projectile_SniperCannon_C.CheckDistance
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_Projectile_SniperCannon_C::CheckDistance()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Projectile_SniperCannon_C", "CheckDistance");

	UObject::ProcessEvent(Func, nullptr);
}

}

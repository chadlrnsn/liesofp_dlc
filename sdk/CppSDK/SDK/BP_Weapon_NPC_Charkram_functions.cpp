#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BP_Weapon_NPC_Charkram

#include "Basic.hpp"

#include "BP_Weapon_NPC_Charkram_classes.hpp"
#include "BP_Weapon_NPC_Charkram_parameters.hpp"


namespace SDK
{

// Function BP_Weapon_NPC_Charkram.BP_Weapon_NPC_Charkram_C.ExecuteUbergraph_BP_Weapon_NPC_Charkram
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_NPC_Charkram_C::ExecuteUbergraph_BP_Weapon_NPC_Charkram(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_NPC_Charkram_C", "ExecuteUbergraph_BP_Weapon_NPC_Charkram");

	Params::BP_Weapon_NPC_Charkram_C_ExecuteUbergraph_BP_Weapon_NPC_Charkram Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weapon_NPC_Charkram.BP_Weapon_NPC_Charkram_C.ChangeAnimStateInner
// (Event, Public, BlueprintEvent)
// Parameters:
// ELWeaponPartType                        PartType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             InAnimState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_NPC_Charkram_C::ChangeAnimStateInner(ELWeaponPartType PartType, class FName InAnimState)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_NPC_Charkram_C", "ChangeAnimStateInner");

	Params::BP_Weapon_NPC_Charkram_C_ChangeAnimStateInner Parms{};

	Parms.PartType = PartType;
	Parms.InAnimState = InAnimState;

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weapon_NPC_Charkram.BP_Weapon_NPC_Charkram_C.OnDropWeapon
// (Event, Public, BlueprintEvent)

void ABP_Weapon_NPC_Charkram_C::OnDropWeapon()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_NPC_Charkram_C", "OnDropWeapon");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_NPC_Charkram.BP_Weapon_NPC_Charkram_C.OnCharkramReturned
// (BlueprintCallable, BlueprintEvent)

void ABP_Weapon_NPC_Charkram_C::OnCharkramReturned()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_NPC_Charkram_C", "OnCharkramReturned");

	UObject::ProcessEvent(Func, nullptr);
}


// Function BP_Weapon_NPC_Charkram.BP_Weapon_NPC_Charkram_C.OnBreakBlade
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FVector                          BreakPointLocation                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                          ImpulseDirection                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Weapon_NPC_Charkram_C::OnBreakBlade(const struct FVector& BreakPointLocation, const struct FVector& ImpulseDirection)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_NPC_Charkram_C", "OnBreakBlade");

	Params::BP_Weapon_NPC_Charkram_C_OnBreakBlade Parms{};

	Parms.BreakPointLocation = std::move(BreakPointLocation);
	Parms.ImpulseDirection = std::move(ImpulseDirection);

	UObject::ProcessEvent(Func, &Parms);
}


// Function BP_Weapon_NPC_Charkram.BP_Weapon_NPC_Charkram_C.OnWeaponOnOff
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                                    bOnOff                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Weapon_NPC_Charkram_C::OnWeaponOnOff(bool bOnOff)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("BP_Weapon_NPC_Charkram_C", "OnWeaponOnOff");

	Params::BP_Weapon_NPC_Charkram_C_OnWeaponOnOff Parms{};

	Parms.bOnOff = bOnOff;

	UObject::ProcessEvent(Func, &Parms);
}

}


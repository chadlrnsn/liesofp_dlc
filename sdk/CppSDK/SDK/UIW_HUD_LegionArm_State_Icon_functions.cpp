#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_LegionArm_State_Icon

#include "Basic.hpp"

#include "UIW_HUD_LegionArm_State_Icon_classes.hpp"
#include "UIW_HUD_LegionArm_State_Icon_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_LegionArm_State_Icon.UIW_HUD_LegionArm_State_Icon_C.ExecuteUbergraph_UIW_HUD_LegionArm_State_Icon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_LegionArm_State_Icon_C::ExecuteUbergraph_UIW_HUD_LegionArm_State_Icon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_LegionArm_State_Icon_C", "ExecuteUbergraph_UIW_HUD_LegionArm_State_Icon");

	Params::UIW_HUD_LegionArm_State_Icon_C_ExecuteUbergraph_UIW_HUD_LegionArm_State_Icon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_LegionArm_State_Icon.UIW_HUD_LegionArm_State_Icon_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_LegionArm_State_Icon_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_LegionArm_State_Icon_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_LegionArm_State_Icon.UIW_HUD_LegionArm_State_Icon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_LegionArm_State_Icon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_LegionArm_State_Icon_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_LegionArm_State_Icon.UIW_HUD_LegionArm_State_Icon_C.OnChangeShotgunAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELShotGunAmmoType                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_LegionArm_State_Icon_C::OnChangeShotgunAmmo(ELShotGunAmmoType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_LegionArm_State_Icon_C", "OnChangeShotgunAmmo");

	Params::UIW_HUD_LegionArm_State_Icon_C_OnChangeShotgunAmmo Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_LegionArm_State_Icon.UIW_HUD_LegionArm_State_Icon_C.OnChooseSlaveArm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLEquipItemSlot                  SlaveArmSlot                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUIW_HUD_LegionArm_State_Icon_C::OnChooseSlaveArm(const struct FLEquipItemSlot& SlaveArmSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_LegionArm_State_Icon_C", "OnChooseSlaveArm");

	Params::UIW_HUD_LegionArm_State_Icon_C_OnChooseSlaveArm Parms{};

	Parms.SlaveArmSlot = std::move(SlaveArmSlot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_LegionArm_State_Icon.UIW_HUD_LegionArm_State_Icon_C.HideSpecial
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_LegionArm_State_Icon_C::HideSpecial()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_LegionArm_State_Icon_C", "HideSpecial");

	UObject::ProcessEvent(Func, nullptr);
}

}

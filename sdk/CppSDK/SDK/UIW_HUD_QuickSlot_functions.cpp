#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_QuickSlot

#include "Basic.hpp"

#include "UIW_HUD_QuickSlot_classes.hpp"
#include "UIW_HUD_QuickSlot_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.ExecuteUbergraph_UIW_HUD_QuickSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::ExecuteUbergraph_UIW_HUD_QuickSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "ExecuteUbergraph_UIW_HUD_QuickSlot");

	Params::UIW_HUD_QuickSlot_C_ExecuteUbergraph_UIW_HUD_QuickSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_QuickSlot_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_HUD_QuickSlot_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnChooseItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLUseItemSlot                    UseSlot                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUIW_HUD_QuickSlot_C::OnChooseItem(const struct FLUseItemSlot& UseSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnChooseItem");

	Params::UIW_HUD_QuickSlot_C_OnChooseItem Parms{};

	Parms.UseSlot = std::move(UseSlot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnChangeItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsFirstLine                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                                   SlotIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             OldItemCodeName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             NewItemCodeName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::OnChangeItem(bool IsFirstLine, int32 SlotIndex, class FName OldItemCodeName, class FName NewItemCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnChangeItem");

	Params::UIW_HUD_QuickSlot_C_OnChangeItem Parms{};

	Parms.IsFirstLine = IsFirstLine;
	Parms.SlotIndex = SlotIndex;
	Parms.OldItemCodeName = OldItemCodeName;
	Parms.NewItemCodeName = NewItemCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.RefreshBelt
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_QuickSlot_C::RefreshBelt()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "RefreshBelt");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.RefreshPouch
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_QuickSlot_C::RefreshPouch()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "RefreshPouch");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnPressPouchKey
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_QuickSlot_C::OnPressPouchKey(bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnPressPouchKey");

	Params::UIW_HUD_QuickSlot_C_OnPressPouchKey Parms{};

	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnPressShotgunAmmo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsValid                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_QuickSlot_C::OnPressShotgunAmmo(bool IsValid)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnPressShotgunAmmo");

	Params::UIW_HUD_QuickSlot_C_OnPressShotgunAmmo Parms{};

	Parms.IsValid = IsValid;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnChangePouch
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELAssistUseItemSlotType                 SlotType                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             OldItemCodeName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             NewItemCodeName                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::OnChangePouch(ELAssistUseItemSlotType SlotType, class FName OldItemCodeName, class FName NewItemCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnChangePouch");

	Params::UIW_HUD_QuickSlot_C_OnChangePouch Parms{};

	Parms.SlotType = SlotType;
	Parms.OldItemCodeName = OldItemCodeName;
	Parms.NewItemCodeName = NewItemCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnChangeShotgunAmmo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELShotGunAmmoType                       Type                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::OnChangeShotgunAmmo(ELShotGunAmmoType Type)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnChangeShotgunAmmo");

	Params::UIW_HUD_QuickSlot_C_OnChangeShotgunAmmo Parms{};

	Parms.Type = Type;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnChooseSlaveArm
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLEquipItemSlot                  SlaveArmSlot                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UUIW_HUD_QuickSlot_C::OnChooseSlaveArm(const struct FLEquipItemSlot& SlaveArmSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnChooseSlaveArm");

	Params::UIW_HUD_QuickSlot_C_OnChooseSlaveArm Parms{};

	Parms.SlaveArmSlot = std::move(SlaveArmSlot);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnChangeInputMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamePad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_QuickSlot_C::OnChangeInputMode(bool IsGamePad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnChangeInputMode");

	Params::UIW_HUD_QuickSlot_C_OnChangeInputMode Parms{};

	Parms.IsGamePad = IsGamePad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.GuideGrinderTransition
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShowCheck                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_QuickSlot_C::GuideGrinderTransition(bool IsShowCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "GuideGrinderTransition");

	Params::UIW_HUD_QuickSlot_C_GuideGrinderTransition Parms{};

	Parms.IsShowCheck = IsShowCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.GuideGrinderDurability
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShowCheck                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_QuickSlot_C::GuideGrinderDurability(bool IsShowCheck)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "GuideGrinderDurability");

	Params::UIW_HUD_QuickSlot_C_GuideGrinderDurability Parms{};

	Parms.IsShowCheck = IsShowCheck;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnChangeComplex
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             MainItemCodeName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                             UnitItemCodeName                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::OnChangeComplex(class FName MainItemCodeName, class FName UnitItemCodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnChangeComplex");

	Params::UIW_HUD_QuickSlot_C_OnChangeComplex Parms{};

	Parms.MainItemCodeName = MainItemCodeName;
	Parms.UnitItemCodeName = UnitItemCodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnTweenComplete
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             CategoryName                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::OnTweenComplete(class FName CategoryName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnTweenComplete");

	Params::UIW_HUD_QuickSlot_C_OnTweenComplete Parms{};

	Parms.CategoryName = CategoryName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.GetComplexPouchItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_DPad_Item_C*                 Pouch_0                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::GetComplexPouchItem(class UUIW_DPad_Item_C** Pouch_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "GetComplexPouchItem");

	Params::UIW_HUD_QuickSlot_C_GetComplexPouchItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pouch_0 != nullptr)
		*Pouch_0 = Parms.Pouch_0;
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnTransitionEnabledChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsEnabled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_QuickSlot_C::OnTransitionEnabledChange(bool IsEnabled)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnTransitionEnabledChange");

	Params::UIW_HUD_QuickSlot_C_OnTransitionEnabledChange Parms{};

	Parms.IsEnabled = IsEnabled;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.OnUpdateItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULItem*                           Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::OnUpdateItem(class ULItem* Item)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "OnUpdateItem");

	Params::UIW_HUD_QuickSlot_C_OnUpdateItem Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.SetUseGuide
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_QuickSlot_C::SetUseGuide()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "SetUseGuide");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.SetControlGuide
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsGamePad                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_QuickSlot_C::SetControlGuide(bool IsGamePad)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "SetControlGuide");

	Params::UIW_HUD_QuickSlot_C_SetControlGuide Parms{};

	Parms.IsGamePad = IsGamePad;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_QuickSlot.UIW_HUD_QuickSlot_C.GetGrinderPouchItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_DPad_Item_C*                 Pouch_0                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_QuickSlot_C::GetGrinderPouchItem(class UUIW_DPad_Item_C** Pouch_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_QuickSlot_C", "GetGrinderPouchItem");

	Params::UIW_HUD_QuickSlot_C_GetGrinderPouchItem Parms{};

	UObject::ProcessEvent(Func, &Parms);

	if (Pouch_0 != nullptr)
		*Pouch_0 = Parms.Pouch_0;
}

}


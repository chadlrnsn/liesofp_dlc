#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ListItem_Weapon

#include "Basic.hpp"

#include "UIW_ListItem_Weapon_classes.hpp"
#include "UIW_ListItem_Weapon_parameters.hpp"


namespace SDK
{

// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.ExecuteUbergraph_UIW_ListItem_Weapon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Weapon_C::ExecuteUbergraph_UIW_ListItem_Weapon(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "ExecuteUbergraph_UIW_ListItem_Weapon");

	Params::UIW_ListItem_Weapon_C_ExecuteUbergraph_UIW_ListItem_Weapon Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_ListItem_Weapon_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "OnMouseLeave");

	Params::UIW_ListItem_Weapon_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_ListItem_Weapon_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "OnMouseEnter");

	Params::UIW_ListItem_Weapon_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.Set Item
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                          ListObject                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Weapon_C::Set_Item(class UObject* ListObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "Set Item");

	Params::UIW_ListItem_Weapon_C_Set_Item Parms{};

	Parms.ListObject = ListObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_ListItem_Weapon_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "BP_OnItemSelectionChanged");

	Params::UIW_ListItem_Weapon_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Weapon_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "OnListItemObjectSet");

	Params::UIW_ListItem_Weapon_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_ListItem_Weapon_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "BP_OnItemExpansionChanged");

	Params::UIW_ListItem_Weapon_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUIW_ListItem_Weapon_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_ListItem_Weapon_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "OnMouseButtonDown");

	Params::UIW_ListItem_Weapon_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_ListItem_Weapon_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "OnFocusReceived");

	Params::UIW_ListItem_Weapon_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.ShowFocus
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_ListItem_Weapon_C::ShowFocus(bool IsShow)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "ShowFocus");

	Params::UIW_ListItem_Weapon_C_ShowFocus Parms{};

	Parms.IsShow = IsShow;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.SetSlotType
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             ID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Weapon_C::SetSlotType(class FName ID)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "SetSlotType");

	Params::UIW_ListItem_Weapon_C_SetSlotType Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.Set Equipped
// (Protected, BlueprintCallable, BlueprintEvent)

void UUIW_ListItem_Weapon_C::Set_Equipped()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "Set Equipped");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.SetImage
// (Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIBP_ListData_Weapon_C*          WeaponListData                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Weapon_C::SetImage(class UUIBP_ListData_Weapon_C* WeaponListData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "SetImage");

	Params::UIW_ListItem_Weapon_C_SetImage Parms{};

	Parms.WeaponListData = WeaponListData;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.SetEquipPossible
// (Protected, BlueprintCallable, BlueprintEvent)

void UUIW_ListItem_Weapon_C::SetEquipPossible()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "SetEquipPossible");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.SetMoveFocusEffect
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_ListItem_Weapon_C::SetMoveFocusEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "SetMoveFocusEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.SetHandleCorrection
// (Protected, BlueprintCallable, BlueprintEvent)

void UUIW_ListItem_Weapon_C::SetHandleCorrection()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "SetHandleCorrection");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.SetNew
// (Protected, BlueprintCallable, BlueprintEvent)

void UUIW_ListItem_Weapon_C::SetNew()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "SetNew");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_Weapon.UIW_ListItem_Weapon_C.OnMouseButtonUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_ListItem_Weapon_C::OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Weapon_C", "OnMouseButtonUp");

	Params::UIW_ListItem_Weapon_C_OnMouseButtonUp Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


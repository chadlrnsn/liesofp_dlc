#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Record_ListItem

#include "Basic.hpp"

#include "UIW_Record_ListItem_classes.hpp"
#include "UIW_Record_ListItem_parameters.hpp"


namespace SDK
{

// Function UIW_Record_ListItem.UIW_Record_ListItem_C.ExecuteUbergraph_UIW_Record_ListItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Record_ListItem_C::ExecuteUbergraph_UIW_Record_ListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "ExecuteUbergraph_UIW_Record_ListItem");

	Params::UIW_Record_ListItem_C_ExecuteUbergraph_UIW_Record_ListItem Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUIW_Record_ListItem_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_Record_ListItem_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "BP_OnItemSelectionChanged");

	Params::UIW_Record_ListItem_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_Record_ListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_Record_ListItem_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "OnMouseLeave");

	Params::UIW_Record_ListItem_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_Record_ListItem_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "OnMouseEnter");

	Params::UIW_Record_ListItem_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_Record_ListItem_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Record_ListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "OnListItemObjectSet");

	Params::UIW_Record_ListItem_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_Record_ListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "BP_OnItemExpansionChanged");

	Params::UIW_Record_ListItem_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.SetMoveFocusEffect
// (Private, BlueprintCallable, BlueprintEvent)

void UUIW_Record_ListItem_C::SetMoveFocusEffect()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "SetMoveFocusEffect");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_Record_ListItem_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "OnFocusReceived");

	Params::UIW_Record_ListItem_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.SetPlaying
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_Record_ListItem_C::SetPlaying(bool IsPlaying)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "SetPlaying");

	Params::UIW_Record_ListItem_C_SetPlaying Parms{};

	Parms.IsPlaying = IsPlaying;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.OnPlay
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPlaying                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             CodeName                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Record_ListItem_C::OnPlay(bool IsPlaying, class FName CodeName)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "OnPlay");

	Params::UIW_Record_ListItem_C_OnPlay Parms{};

	Parms.IsPlaying = IsPlaying;
	Parms.CodeName = CodeName;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Record_ListItem.UIW_Record_ListItem_C.SetTextColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_Record_ListItem_C::SetTextColor()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Record_ListItem_C", "SetTextColor");

	UObject::ProcessEvent(Func, nullptr);
}

}


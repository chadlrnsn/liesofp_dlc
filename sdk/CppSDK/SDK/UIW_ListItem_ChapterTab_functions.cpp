#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ListItem_ChapterTab

#include "Basic.hpp"

#include "UIW_ListItem_ChapterTab_classes.hpp"
#include "UIW_ListItem_ChapterTab_parameters.hpp"


namespace SDK
{

// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.ExecuteUbergraph_UIW_ListItem_ChapterTab
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_ChapterTab_C::ExecuteUbergraph_UIW_ListItem_ChapterTab(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "ExecuteUbergraph_UIW_ListItem_ChapterTab");

	Params::UIW_ListItem_ChapterTab_C_ExecuteUbergraph_UIW_ListItem_ChapterTab Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_ListItem_ChapterTab_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_ListItem_ChapterTab_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "OnMouseLeave");

	Params::UIW_ListItem_ChapterTab_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_ListItem_ChapterTab_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "OnMouseEnter");

	Params::UIW_ListItem_ChapterTab_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_ListItem_ChapterTab_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "BP_OnItemSelectionChanged");

	Params::UIW_ListItem_ChapterTab_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_ChapterTab_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "OnListItemObjectSet");

	Params::UIW_ListItem_ChapterTab_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_ListItem_ChapterTab_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "BP_OnItemExpansionChanged");

	Params::UIW_ListItem_ChapterTab_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_ChapterTab.UIW_ListItem_ChapterTab_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUIW_ListItem_ChapterTab_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_ChapterTab_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}

}


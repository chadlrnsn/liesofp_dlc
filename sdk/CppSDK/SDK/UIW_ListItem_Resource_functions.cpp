#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ListItem_Resource

#include "Basic.hpp"

#include "UIW_ListItem_Resource_classes.hpp"
#include "UIW_ListItem_Resource_parameters.hpp"


namespace SDK
{

// Function UIW_ListItem_Resource.UIW_ListItem_Resource_C.ExecuteUbergraph_UIW_ListItem_Resource
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Resource_C::ExecuteUbergraph_UIW_ListItem_Resource(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Resource_C", "ExecuteUbergraph_UIW_ListItem_Resource");

	Params::UIW_ListItem_Resource_C_ExecuteUbergraph_UIW_ListItem_Resource Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Resource.UIW_ListItem_Resource_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                          ListItemObject                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Resource_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Resource_C", "OnListItemObjectSet");

	Params::UIW_ListItem_Resource_C_OnListItemObjectSet Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Resource.UIW_ListItem_Resource_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsSelected                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_ListItem_Resource_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Resource_C", "BP_OnItemSelectionChanged");

	Params::UIW_ListItem_Resource_C_BP_OnItemSelectionChanged Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Resource.UIW_ListItem_Resource_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                                    bIsExpanded                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_ListItem_Resource_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Resource_C", "BP_OnItemExpansionChanged");

	Params::UIW_ListItem_Resource_C_BP_OnItemExpansionChanged Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ListItem_Resource.UIW_ListItem_Resource_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)

void UUIW_ListItem_Resource_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Resource_C", "BP_OnEntryReleased");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ListItem_Resource.UIW_ListItem_Resource_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>           Icon                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                                   HasCount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                                   RequireCount                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ListItem_Resource_C::SetData(TSoftObjectPtr<class UObject> Icon, int32 HasCount, int32 RequireCount)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ListItem_Resource_C", "SetData");

	Params::UIW_ListItem_Resource_C_SetData Parms{};

	Parms.Icon = Icon;
	Parms.HasCount = HasCount;
	Parms.RequireCount = RequireCount;

	UObject::ProcessEvent(Func, &Parms);
}

}


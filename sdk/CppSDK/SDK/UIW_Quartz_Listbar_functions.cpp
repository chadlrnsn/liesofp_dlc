#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Quartz_Listbar

#include "Basic.hpp"

#include "UIW_Quartz_Listbar_classes.hpp"
#include "UIW_Quartz_Listbar_parameters.hpp"


namespace SDK
{

// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_Quartz_Listbar_C*            QuartzListBar                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Quartz_Listbar_C::OnFocused__DelegateSignature(class UUIW_Quartz_Listbar_C* QuartzListBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnFocused__DelegateSignature");

	Params::UIW_Quartz_Listbar_C_OnFocused__DelegateSignature Parms{};

	Parms.QuartzListBar = QuartzListBar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_Quartz_Listbar_C*            QuartzListBar                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Quartz_Listbar_C::OnDoubleClicked__DelegateSignature(class UUIW_Quartz_Listbar_C* QuartzListBar)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnDoubleClicked__DelegateSignature");

	Params::UIW_Quartz_Listbar_C_OnDoubleClicked__DelegateSignature Parms{};

	Parms.QuartzListBar = QuartzListBar;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.ExecuteUbergraph_UIW_Quartz_Listbar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_Quartz_Listbar_C::ExecuteUbergraph_UIW_Quartz_Listbar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "ExecuteUbergraph_UIW_Quartz_Listbar");

	Params::UIW_Quartz_Listbar_C_ExecuteUbergraph_UIW_Quartz_Listbar Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_Quartz_Listbar_C::OnMouseLeave(const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnMouseLeave");

	Params::UIW_Quartz_Listbar_C_OnMouseLeave Parms{};

	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_Quartz_Listbar_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnMouseEnter");

	Params::UIW_Quartz_Listbar_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUIW_Quartz_Listbar_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnFocusLost");

	Params::UIW_Quartz_Listbar_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_Quartz_Listbar_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnFocusReceived");

	Params::UIW_Quartz_Listbar_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        InMyGeometry                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_Quartz_Listbar_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnMouseButtonDoubleClick");

	Params::UIW_Quartz_Listbar_C_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_Quartz_Listbar_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "OnMouseButtonDown");

	Params::UIW_Quartz_Listbar_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_Quartz_Listbar.UIW_Quartz_Listbar_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLQuartzSlot                     SlotData                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUIW_Quartz_Listbar_C::SetData(const struct FLQuartzSlot& SlotData)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Quartz_Listbar_C", "SetData");

	Params::UIW_Quartz_Listbar_C_SetData Parms{};

	Parms.SlotData = std::move(SlotData);

	UObject::ProcessEvent(Func, &Parms);
}

}


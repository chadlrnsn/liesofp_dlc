#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ContextMenu_Btn

#include "Basic.hpp"

#include "UIW_ContextMenu_Btn_classes.hpp"
#include "UIW_ContextMenu_Btn_parameters.hpp"


namespace SDK
{

// Function UIW_ContextMenu_Btn.UIW_ContextMenu_Btn_C.OnReleased__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ContextMenu_Btn_C::OnReleased__DelegateSignature(class FName EventName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ContextMenu_Btn_C", "OnReleased__DelegateSignature");

	Params::UIW_ContextMenu_Btn_C_OnReleased__DelegateSignature Parms{};

	Parms.EventName_0 = EventName_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ContextMenu_Btn.UIW_ContextMenu_Btn_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                             EventName_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ContextMenu_Btn_C::OnSelected__DelegateSignature(class FName EventName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ContextMenu_Btn_C", "OnSelected__DelegateSignature");

	Params::UIW_ContextMenu_Btn_C_OnSelected__DelegateSignature Parms{};

	Parms.EventName_0 = EventName_0;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ContextMenu_Btn.UIW_ContextMenu_Btn_C.ExecuteUbergraph_UIW_ContextMenu_Btn
// (Final, UbergraphFunction)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ContextMenu_Btn_C::ExecuteUbergraph_UIW_ContextMenu_Btn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ContextMenu_Btn_C", "ExecuteUbergraph_UIW_ContextMenu_Btn");

	Params::UIW_ContextMenu_Btn_C_ExecuteUbergraph_UIW_ContextMenu_Btn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ContextMenu_Btn.UIW_ContextMenu_Btn_C.BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)

void UUIW_ContextMenu_Btn_C::BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ContextMenu_Btn_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ContextMenu_Btn.UIW_ContextMenu_Btn_C.BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature
// (BlueprintEvent)

void UUIW_ContextMenu_Btn_C::BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ContextMenu_Btn_C", "BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ContextMenu_Btn.UIW_ContextMenu_Btn_C.OnFocusReceived
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_ContextMenu_Btn_C::OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ContextMenu_Btn_C", "OnFocusReceived");

	Params::UIW_ContextMenu_Btn_C_OnFocusReceived Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}

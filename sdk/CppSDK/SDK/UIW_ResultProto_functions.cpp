#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ResultProto

#include "Basic.hpp"

#include "UIW_ResultProto_classes.hpp"
#include "UIW_ResultProto_parameters.hpp"


namespace SDK
{

// Function UIW_ResultProto.UIW_ResultProto_C.ExecuteUbergraph_UIW_ResultProto
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ResultProto_C::ExecuteUbergraph_UIW_ResultProto(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ResultProto_C", "ExecuteUbergraph_UIW_ResultProto");

	Params::UIW_ResultProto_C_ExecuteUbergraph_UIW_ResultProto Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ResultProto.UIW_ResultProto_C.OnHideComplete
// (BlueprintCallable, BlueprintEvent)

void UUIW_ResultProto_C::OnHideComplete()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ResultProto_C", "OnHideComplete");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ResultProto.UIW_ResultProto_C.BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUIW_Btn_Key_C*                   BtnKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ResultProto_C::BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ResultProto_C", "BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature");

	Params::UIW_ResultProto_C_BndEvt__Btn_Close_K2Node_ComponentBoundEvent_0_OnActive__DelegateSignature Parms{};

	Parms.BtnKey = BtnKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_ResultProto.UIW_ResultProto_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_ResultProto_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ResultProto_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_ResultProto.UIW_ResultProto_C.CallbackGoTitle
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_Popup_C*                     Popup                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUIW_Btn_Key_C*                   BtnKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_ResultProto_C::CallbackGoTitle(class UUIW_Popup_C* Popup, class UUIW_Btn_Key_C* BtnKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_ResultProto_C", "CallbackGoTitle");

	Params::UIW_ResultProto_C_CallbackGoTitle Parms{};

	Parms.Popup = Popup;
	Parms.BtnKey = BtnKey;

	UObject::ProcessEvent(Func, &Parms);
}

}


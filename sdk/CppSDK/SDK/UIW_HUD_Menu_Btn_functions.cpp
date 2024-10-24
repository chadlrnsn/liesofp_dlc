#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Menu_Btn

#include "Basic.hpp"

#include "UIW_HUD_Menu_Btn_classes.hpp"
#include "UIW_HUD_Menu_Btn_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.OnSelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_Btn_C*              MenuBtn                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_Btn_C::OnSelected__DelegateSignature(class UUIW_HUD_Menu_Btn_C* MenuBtn)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "OnSelected__DelegateSignature");

	Params::UIW_HUD_Menu_Btn_C_OnSelected__DelegateSignature Parms{};

	Parms.MenuBtn = MenuBtn;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void UUIW_HUD_Menu_Btn_C::OnPressed__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "OnPressed__DelegateSignature");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.ExecuteUbergraph_UIW_HUD_Menu_Btn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_Btn_C::ExecuteUbergraph_UIW_HUD_Menu_Btn(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "ExecuteUbergraph_UIW_HUD_Menu_Btn");

	Params::UIW_HUD_Menu_Btn_C_ExecuteUbergraph_UIW_HUD_Menu_Btn Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_HUD_Menu_Btn_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "OnMouseEnter");

	Params::UIW_HUD_Menu_Btn_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                                    IsDesignTime                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Menu_Btn_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "PreConstruct");

	Params::UIW_HUD_Menu_Btn_C_PreConstruct Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                      InFocusEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UUIW_HUD_Menu_Btn_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "OnFocusLost");

	Params::UIW_HUD_Menu_Btn_C_OnFocusLost Parms{};

	Parms.InFocusEvent = std::move(InFocusEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.SetSelected
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsSelected                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUIW_HUD_Menu_Btn_C::SetSelected(bool IsSelected)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "SetSelected");

	Params::UIW_HUD_Menu_Btn_C_SetSelected Parms{};

	Parms.IsSelected = IsSelected;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_Btn.UIW_HUD_Menu_Btn_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_HUD_Menu_Btn_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_Btn_C", "OnMouseButtonDown");

	Params::UIW_HUD_Menu_Btn_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


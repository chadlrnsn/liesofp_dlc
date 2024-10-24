#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Menu_PouchSlot

#include "Basic.hpp"

#include "UIW_HUD_Menu_PouchSlot_classes.hpp"
#include "UIW_HUD_Menu_PouchSlot_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_Menu_PouchSlot.UIW_HUD_Menu_PouchSlot_C.OnHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_PouchSlot_C*        PouchSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_PouchSlot_C::OnHovered__DelegateSignature(class UUIW_HUD_Menu_PouchSlot_C* PouchSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_PouchSlot_C", "OnHovered__DelegateSignature");

	Params::UIW_HUD_Menu_PouchSlot_C_OnHovered__DelegateSignature Parms{};

	Parms.PouchSlot = PouchSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_PouchSlot.UIW_HUD_Menu_PouchSlot_C.OnPressed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_HUD_Menu_PouchSlot_C*        PouchSlot                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_PouchSlot_C::OnPressed__DelegateSignature(class UUIW_HUD_Menu_PouchSlot_C* PouchSlot)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_PouchSlot_C", "OnPressed__DelegateSignature");

	Params::UIW_HUD_Menu_PouchSlot_C_OnPressed__DelegateSignature Parms{};

	Parms.PouchSlot = PouchSlot;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_PouchSlot.UIW_HUD_Menu_PouchSlot_C.ExecuteUbergraph_UIW_HUD_Menu_PouchSlot
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Menu_PouchSlot_C::ExecuteUbergraph_UIW_HUD_Menu_PouchSlot(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_PouchSlot_C", "ExecuteUbergraph_UIW_HUD_Menu_PouchSlot");

	Params::UIW_HUD_Menu_PouchSlot_C_ExecuteUbergraph_UIW_HUD_Menu_PouchSlot Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_PouchSlot.UIW_HUD_Menu_PouchSlot_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUIW_HUD_Menu_PouchSlot_C::OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_PouchSlot_C", "OnMouseEnter");

	Params::UIW_HUD_Menu_PouchSlot_C_OnMouseEnter Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_HUD_Menu_PouchSlot.UIW_HUD_Menu_PouchSlot_C.OnMouseButtonDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_HUD_Menu_PouchSlot_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_PouchSlot_C", "OnMouseButtonDown");

	Params::UIW_HUD_Menu_PouchSlot_C_OnMouseButtonDown Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_HUD_Menu_PouchSlot.UIW_HUD_Menu_PouchSlot_C.OnMouseButtonDoubleClick
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        InMyGeometry                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    InMouseEvent                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_HUD_Menu_PouchSlot_C::OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Menu_PouchSlot_C", "OnMouseButtonDoubleClick");

	Params::UIW_HUD_Menu_PouchSlot_C_OnMouseButtonDoubleClick Parms{};

	Parms.InMyGeometry = std::move(InMyGeometry);
	Parms.InMouseEvent = std::move(InMouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}

}


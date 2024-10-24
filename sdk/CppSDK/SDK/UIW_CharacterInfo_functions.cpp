#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_CharacterInfo

#include "Basic.hpp"

#include "UIW_CharacterInfo_classes.hpp"
#include "UIW_CharacterInfo_parameters.hpp"


namespace SDK
{

// Function UIW_CharacterInfo.UIW_CharacterInfo_C.ExecuteUbergraph_UIW_CharacterInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                                   EntryPoint                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_CharacterInfo_C::ExecuteUbergraph_UIW_CharacterInfo(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "ExecuteUbergraph_UIW_CharacterInfo");

	Params::UIW_CharacterInfo_C_ExecuteUbergraph_UIW_CharacterInfo Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_CharacterInfo_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "Destruct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.BndEvt__Btn_Back_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUIW_Btn_Key_C*                   BtnKey                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_CharacterInfo_C::BndEvt__Btn_Back_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature(class UUIW_Btn_Key_C* BtnKey)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "BndEvt__Btn_Back_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature");

	Params::UIW_CharacterInfo_C_BndEvt__Btn_Back_K2Node_ComponentBoundEvent_2_OnActive__DelegateSignature Parms{};

	Parms.BtnKey = BtnKey;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UUIW_CharacterInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "Construct");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.RefreshStatGroup
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// ELSecondStat                            InStat                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_CharacterInfo_C::RefreshStatGroup(ELSecondStat InStat)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "RefreshStatGroup");

	Params::UIW_CharacterInfo_C_RefreshStatGroup Parms{};

	Parms.InStat = InStat;

	UObject::ProcessEvent(Func, &Parms);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.FocusManage
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                        MyGeometry                                             (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent                    MouseEvent                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                      ReturnValue                                            (Parm, OutParm, ReturnParm)

struct FEventReply UUIW_CharacterInfo_C::FocusManage(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "FocusManage");

	Params::UIW_CharacterInfo_C_FocusManage Parms{};

	Parms.MyGeometry = std::move(MyGeometry);
	Parms.MouseEvent = std::move(MouseEvent);

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.ClearEventBinding
// (Protected, BlueprintCallable, BlueprintEvent)

void UUIW_CharacterInfo_C::ClearEventBinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "ClearEventBinding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.AddEventBinding
// (Protected, BlueprintCallable, BlueprintEvent)

void UUIW_CharacterInfo_C::AddEventBinding()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "AddEventBinding");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.OnReady
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void UUIW_CharacterInfo_C::OnReady()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "OnReady");

	UObject::ProcessEvent(Func, nullptr);
}


// Function UIW_CharacterInfo.UIW_CharacterInfo_C.RequestCloseWindow
// (Public, BlueprintCallable, BlueprintEvent)

void UUIW_CharacterInfo_C::RequestCloseWindow()
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_CharacterInfo_C", "RequestCloseWindow");

	UObject::ProcessEvent(Func, nullptr);
}

}


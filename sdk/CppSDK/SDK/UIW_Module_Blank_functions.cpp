#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Module_Blank

#include "Basic.hpp"

#include "UIW_Module_Blank_classes.hpp"
#include "UIW_Module_Blank_parameters.hpp"


namespace SDK
{

// Function UIW_Module_Blank.UIW_Module_Blank_C.SetModule
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUIW_Popup_C*                     PopupWindow_0                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                           Data                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUIW_Module_Blank_C::SetModule(class UUIW_Popup_C* PopupWindow_0, const class FString& Data)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_Module_Blank_C", "SetModule");

	Params::UIW_Module_Blank_C_SetModule Parms{};

	Parms.PopupWindow_0 = PopupWindow_0;
	Parms.Data = std::move(Data);

	UObject::ProcessEvent(Func, &Parms);
}

}


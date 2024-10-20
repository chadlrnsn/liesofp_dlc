#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Abnormal_Item

#include "Basic.hpp"

#include "UIW_HUD_Abnormal_Item_classes.hpp"
#include "UIW_HUD_Abnormal_Item_parameters.hpp"


namespace SDK
{

// Function UIW_HUD_Abnormal_Item.UIW_HUD_Abnormal_Item_C.SetData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                                    IsPassive_0                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                             CodeName_0                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIW_HUD_Abnormal_Item_C::SetData(bool IsPassive_0, class FName CodeName_0)
{
	static class UFunction* Func = nullptr;

	if (Func == nullptr)
		Func = Class->GetFunction("UIW_HUD_Abnormal_Item_C", "SetData");

	Params::UIW_HUD_Abnormal_Item_C_SetData Parms{};

	Parms.IsPassive_0 = IsPassive_0;
	Parms.CodeName_0 = CodeName_0;

	UObject::ProcessEvent(Func, &Parms);
}

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Module_Blank

#include "Basic.hpp"


namespace SDK::Params
{

// Function UIW_Module_Blank.UIW_Module_Blank_C.SetModule
// 0x0020 (0x0020 - 0x0000)
struct UIW_Module_Blank_C_SetModule final
{
public:
	class UUIW_Popup_C*                           PopupWindow_0;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Data;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	float                                         CallFunc_Conv_StringToFloat_ReturnValue;           // 0x0018(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Module_Blank_C_SetModule) == 0x000008, "Wrong alignment on UIW_Module_Blank_C_SetModule");
static_assert(sizeof(UIW_Module_Blank_C_SetModule) == 0x000020, "Wrong size on UIW_Module_Blank_C_SetModule");
static_assert(offsetof(UIW_Module_Blank_C_SetModule, PopupWindow_0) == 0x000000, "Member 'UIW_Module_Blank_C_SetModule::PopupWindow_0' has a wrong offset!");
static_assert(offsetof(UIW_Module_Blank_C_SetModule, Data) == 0x000008, "Member 'UIW_Module_Blank_C_SetModule::Data' has a wrong offset!");
static_assert(offsetof(UIW_Module_Blank_C_SetModule, CallFunc_Conv_StringToFloat_ReturnValue) == 0x000018, "Member 'UIW_Module_Blank_C_SetModule::CallFunc_Conv_StringToFloat_ReturnValue' has a wrong offset!");

}


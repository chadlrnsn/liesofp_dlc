#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Popup_Module

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UIW_Popup_Module.UIW_Popup_Module_C.SetModule
// 0x0018 (0x0018 - 0x0000)
struct UIW_Popup_Module_C_SetModule final
{
public:
	class UUIW_Popup_C*                           PopupWindow_0;                                     // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 Data;                                              // 0x0008(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Popup_Module_C_SetModule) == 0x000008, "Wrong alignment on UIW_Popup_Module_C_SetModule");
static_assert(sizeof(UIW_Popup_Module_C_SetModule) == 0x000018, "Wrong size on UIW_Popup_Module_C_SetModule");
static_assert(offsetof(UIW_Popup_Module_C_SetModule, PopupWindow_0) == 0x000000, "Member 'UIW_Popup_Module_C_SetModule::PopupWindow_0' has a wrong offset!");
static_assert(offsetof(UIW_Popup_Module_C_SetModule, Data) == 0x000008, "Member 'UIW_Popup_Module_C_SetModule::Data' has a wrong offset!");

// Function UIW_Popup_Module.UIW_Popup_Module_C.OnActive
// 0x0008 (0x0008 - 0x0000)
struct UIW_Popup_Module_C_OnActive final
{
public:
	class UUIW_Btn_Key_C*                         BtnKey;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Popup_Module_C_OnActive) == 0x000008, "Wrong alignment on UIW_Popup_Module_C_OnActive");
static_assert(sizeof(UIW_Popup_Module_C_OnActive) == 0x000008, "Wrong size on UIW_Popup_Module_C_OnActive");
static_assert(offsetof(UIW_Popup_Module_C_OnActive, BtnKey) == 0x000000, "Member 'UIW_Popup_Module_C_OnActive::BtnKey' has a wrong offset!");

// Function UIW_Popup_Module.UIW_Popup_Module_C.OnRepeat
// 0x0008 (0x0008 - 0x0000)
struct UIW_Popup_Module_C_OnRepeat final
{
public:
	class UUIW_Btn_Key_C*                         BtnKey;                                            // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Popup_Module_C_OnRepeat) == 0x000008, "Wrong alignment on UIW_Popup_Module_C_OnRepeat");
static_assert(sizeof(UIW_Popup_Module_C_OnRepeat) == 0x000008, "Wrong size on UIW_Popup_Module_C_OnRepeat");
static_assert(offsetof(UIW_Popup_Module_C_OnRepeat, BtnKey) == 0x000000, "Member 'UIW_Popup_Module_C_OnRepeat::BtnKey' has a wrong offset!");

// Function UIW_Popup_Module.UIW_Popup_Module_C.FocusManage
// 0x0218 (0x0218 - 0x0000)
struct UIW_Popup_Module_C_FocusManage final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0160(0x00B8)()
};
static_assert(alignof(UIW_Popup_Module_C_FocusManage) == 0x000008, "Wrong alignment on UIW_Popup_Module_C_FocusManage");
static_assert(sizeof(UIW_Popup_Module_C_FocusManage) == 0x000218, "Wrong size on UIW_Popup_Module_C_FocusManage");
static_assert(offsetof(UIW_Popup_Module_C_FocusManage, MyGeometry) == 0x000000, "Member 'UIW_Popup_Module_C_FocusManage::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_Popup_Module_C_FocusManage, MouseEvent) == 0x000038, "Member 'UIW_Popup_Module_C_FocusManage::MouseEvent' has a wrong offset!");
static_assert(offsetof(UIW_Popup_Module_C_FocusManage, ReturnValue) == 0x0000A8, "Member 'UIW_Popup_Module_C_FocusManage::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Popup_Module_C_FocusManage, CallFunc_Handled_ReturnValue) == 0x000160, "Member 'UIW_Popup_Module_C_FocusManage::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function UIW_Popup_Module.UIW_Popup_Module_C.OnWheel
// 0x0004 (0x0004 - 0x0000)
struct UIW_Popup_Module_C_OnWheel final
{
public:
	float                                         Delta;                                             // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Popup_Module_C_OnWheel) == 0x000004, "Wrong alignment on UIW_Popup_Module_C_OnWheel");
static_assert(sizeof(UIW_Popup_Module_C_OnWheel) == 0x000004, "Wrong size on UIW_Popup_Module_C_OnWheel");
static_assert(offsetof(UIW_Popup_Module_C_OnWheel, Delta) == 0x000000, "Member 'UIW_Popup_Module_C_OnWheel::Delta' has a wrong offset!");

}

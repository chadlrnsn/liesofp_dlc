#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Module_Text

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"


namespace SDK::Params
{

// Function UIW_Module_Text.UIW_Module_Text_C.FocusDispatcher__DelegateSignature
// 0x0010 (0x0010 - 0x0000)
struct UIW_Module_Text_C_FocusDispatcher__DelegateSignature final
{
public:
	class UUIW_Module_Text_C*                     SelfObj;                                           // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          IsFocused;                                         // 0x0008(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Module_Text_C_FocusDispatcher__DelegateSignature) == 0x000008, "Wrong alignment on UIW_Module_Text_C_FocusDispatcher__DelegateSignature");
static_assert(sizeof(UIW_Module_Text_C_FocusDispatcher__DelegateSignature) == 0x000010, "Wrong size on UIW_Module_Text_C_FocusDispatcher__DelegateSignature");
static_assert(offsetof(UIW_Module_Text_C_FocusDispatcher__DelegateSignature, SelfObj) == 0x000000, "Member 'UIW_Module_Text_C_FocusDispatcher__DelegateSignature::SelfObj' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_FocusDispatcher__DelegateSignature, IsFocused) == 0x000008, "Member 'UIW_Module_Text_C_FocusDispatcher__DelegateSignature::IsFocused' has a wrong offset!");

// Function UIW_Module_Text.UIW_Module_Text_C.ExecuteUbergraph_UIW_Module_Text
// 0x000C (0x000C - 0x0000)
struct UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x0004(0x0008)(NoDestructor)
};
static_assert(alignof(UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text) == 0x000004, "Wrong alignment on UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text");
static_assert(sizeof(UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text) == 0x00000C, "Wrong size on UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text");
static_assert(offsetof(UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text, EntryPoint) == 0x000000, "Member 'UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text, K2Node_Event_InFocusEvent) == 0x000004, "Member 'UIW_Module_Text_C_ExecuteUbergraph_UIW_Module_Text::K2Node_Event_InFocusEvent' has a wrong offset!");

// Function UIW_Module_Text.UIW_Module_Text_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct UIW_Module_Text_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UIW_Module_Text_C_OnFocusLost) == 0x000004, "Wrong alignment on UIW_Module_Text_C_OnFocusLost");
static_assert(sizeof(UIW_Module_Text_C_OnFocusLost) == 0x000008, "Wrong size on UIW_Module_Text_C_OnFocusLost");
static_assert(offsetof(UIW_Module_Text_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UIW_Module_Text_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function UIW_Module_Text.UIW_Module_Text_C.OnFocusReceived
// 0x0268 (0x0268 - 0x0000)
struct UIW_Module_Text_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_OnFocusReceived_ReturnValue;              // 0x00F8(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x01B0(0x00B8)()
};
static_assert(alignof(UIW_Module_Text_C_OnFocusReceived) == 0x000008, "Wrong alignment on UIW_Module_Text_C_OnFocusReceived");
static_assert(sizeof(UIW_Module_Text_C_OnFocusReceived) == 0x000268, "Wrong size on UIW_Module_Text_C_OnFocusReceived");
static_assert(offsetof(UIW_Module_Text_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UIW_Module_Text_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UIW_Module_Text_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UIW_Module_Text_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_OnFocusReceived, CallFunc_OnFocusReceived_ReturnValue) == 0x0000F8, "Member 'UIW_Module_Text_C_OnFocusReceived::CallFunc_OnFocusReceived_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x0001B0, "Member 'UIW_Module_Text_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function UIW_Module_Text.UIW_Module_Text_C.OnMouseButtonDown
// 0x0218 (0x0218 - 0x0000)
struct UIW_Module_Text_C_OnMouseButtonDown final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            CallFunc_OnMouseButtonDown_ReturnValue;            // 0x0160(0x00B8)()
};
static_assert(alignof(UIW_Module_Text_C_OnMouseButtonDown) == 0x000008, "Wrong alignment on UIW_Module_Text_C_OnMouseButtonDown");
static_assert(sizeof(UIW_Module_Text_C_OnMouseButtonDown) == 0x000218, "Wrong size on UIW_Module_Text_C_OnMouseButtonDown");
static_assert(offsetof(UIW_Module_Text_C_OnMouseButtonDown, MyGeometry) == 0x000000, "Member 'UIW_Module_Text_C_OnMouseButtonDown::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_OnMouseButtonDown, MouseEvent) == 0x000038, "Member 'UIW_Module_Text_C_OnMouseButtonDown::MouseEvent' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_OnMouseButtonDown, ReturnValue) == 0x0000A8, "Member 'UIW_Module_Text_C_OnMouseButtonDown::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Module_Text_C_OnMouseButtonDown, CallFunc_OnMouseButtonDown_ReturnValue) == 0x000160, "Member 'UIW_Module_Text_C_OnMouseButtonDown::CallFunc_OnMouseButtonDown_ReturnValue' has a wrong offset!");

}


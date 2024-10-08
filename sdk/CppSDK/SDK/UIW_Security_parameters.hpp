#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Security

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "InputCore_structs.hpp"


namespace SDK::Params
{

// Function UIW_Security.UIW_Security_C.ExecuteUbergraph_UIW_Security
// 0x0048 (0x0048 - 0x0000)
struct UIW_Security_C_ExecuteUbergraph_UIW_Security final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                Temp_byte_Variable;                                // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                Temp_byte_Variable_1;                              // 0x0006(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7[0x1];                                        // 0x0007(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFocusEvent                            K2Node_ComponentBoundEvent_InFocusEvent_1;         // 0x0008(0x0008)(ConstParm, NoDestructor)
	struct FFocusEvent                            K2Node_ComponentBoundEvent_InFocusEvent;           // 0x0010(0x0008)(ConstParm, NoDestructor)
	class ULPlatformSystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0018(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsNeowizAuthExternalAccount_ReturnValue;  // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	ECheckBoxState                                K2Node_Select_Default;                             // 0x0021(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_22[0x2];                                       // 0x0022(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void(bool Result)>                  K2Node_CreateDelegate_OutputDelegate;              // 0x0024(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FText& Text, ETextCommit CommitMethod)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0034(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UIW_Security_C_ExecuteUbergraph_UIW_Security) == 0x000008, "Wrong alignment on UIW_Security_C_ExecuteUbergraph_UIW_Security");
static_assert(sizeof(UIW_Security_C_ExecuteUbergraph_UIW_Security) == 0x000048, "Wrong size on UIW_Security_C_ExecuteUbergraph_UIW_Security");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, EntryPoint) == 0x000000, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, Temp_bool_Variable) == 0x000004, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, Temp_byte_Variable) == 0x000005, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::Temp_byte_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, Temp_byte_Variable_1) == 0x000006, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::Temp_byte_Variable_1' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, K2Node_ComponentBoundEvent_InFocusEvent_1) == 0x000008, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::K2Node_ComponentBoundEvent_InFocusEvent_1' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, K2Node_ComponentBoundEvent_InFocusEvent) == 0x000010, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::K2Node_ComponentBoundEvent_InFocusEvent' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000018, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, CallFunc_IsNeowizAuthExternalAccount_ReturnValue) == 0x000020, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::CallFunc_IsNeowizAuthExternalAccount_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, K2Node_Select_Default) == 0x000021, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, K2Node_CreateDelegate_OutputDelegate) == 0x000024, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_ExecuteUbergraph_UIW_Security, K2Node_CreateDelegate_OutputDelegate_1) == 0x000034, "Member 'UIW_Security_C_ExecuteUbergraph_UIW_Security::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function UIW_Security.UIW_Security_C.BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature) == 0x000004, "Wrong alignment on UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature");
static_assert(sizeof(UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature");
static_assert(offsetof(UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature, InFocusEvent) == 0x000000, "Member 'UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_3_Delegate_OnFocusEvent__DelegateSignature::InFocusEvent' has a wrong offset!");

// Function UIW_Security.UIW_Security_C.BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};
static_assert(alignof(UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature) == 0x000004, "Wrong alignment on UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature");
static_assert(sizeof(UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature) == 0x000008, "Wrong size on UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature");
static_assert(offsetof(UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature, InFocusEvent) == 0x000000, "Member 'UIW_Security_C_BndEvt__UIW_Security_Btn_Confirm_K2Node_ComponentBoundEvent_2_Delegate_OnFocusEvent__DelegateSignature::InFocusEvent' has a wrong offset!");

// Function UIW_Security.UIW_Security_C.FocusManage
// 0x0308 (0x0308 - 0x0000)
struct UIW_Security_C_FocusManage final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	class FText                                   CallFunc_GetEmptyText_ReturnValue;                 // 0x0160(0x0018)()
	struct FEventReply                            CallFunc_FocusManage_ReturnValue;                  // 0x0178(0x00B8)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0230(0x00B8)()
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x02E8(0x0018)()
	bool                                          CallFunc_EqualEqual_TextText_ReturnValue;          // 0x0300(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Security_C_FocusManage) == 0x000008, "Wrong alignment on UIW_Security_C_FocusManage");
static_assert(sizeof(UIW_Security_C_FocusManage) == 0x000308, "Wrong size on UIW_Security_C_FocusManage");
static_assert(offsetof(UIW_Security_C_FocusManage, MyGeometry) == 0x000000, "Member 'UIW_Security_C_FocusManage::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_FocusManage, MouseEvent) == 0x000038, "Member 'UIW_Security_C_FocusManage::MouseEvent' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_FocusManage, ReturnValue) == 0x0000A8, "Member 'UIW_Security_C_FocusManage::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_FocusManage, CallFunc_GetEmptyText_ReturnValue) == 0x000160, "Member 'UIW_Security_C_FocusManage::CallFunc_GetEmptyText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_FocusManage, CallFunc_FocusManage_ReturnValue) == 0x000178, "Member 'UIW_Security_C_FocusManage::CallFunc_FocusManage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_FocusManage, CallFunc_Handled_ReturnValue) == 0x000230, "Member 'UIW_Security_C_FocusManage::CallFunc_Handled_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_FocusManage, CallFunc_GetText_ReturnValue) == 0x0002E8, "Member 'UIW_Security_C_FocusManage::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_FocusManage, CallFunc_EqualEqual_TextText_ReturnValue) == 0x000300, "Member 'UIW_Security_C_FocusManage::CallFunc_EqualEqual_TextText_ReturnValue' has a wrong offset!");

// Function UIW_Security.UIW_Security_C.OnKeyUp
// 0x0220 (0x0220 - 0x0000)
struct UIW_Security_C_OnKeyUp final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                              InKeyEvent;                                        // 0x0038(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                            ReturnValue;                                       // 0x0070(0x00B8)(Parm, OutParm, ReturnParm)
	struct FInputEvent                            CallFunc_GetInputEventFromKeyEvent_ReturnValue;    // 0x0128(0x0018)()
	bool                                          CallFunc_InputEvent_IsShiftDown_ReturnValue;       // 0x0140(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_141[0x7];                                      // 0x0141(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FKey                                   CallFunc_GetKey_ReturnValue;                       // 0x0148(0x0018)(HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x0160(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue;             // 0x0161(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue_1;           // 0x0162(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue_2;           // 0x0163(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_HasKeyboardFocus_ReturnValue_3;           // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_165[0x3];                                      // 0x0165(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
};
static_assert(alignof(UIW_Security_C_OnKeyUp) == 0x000008, "Wrong alignment on UIW_Security_C_OnKeyUp");
static_assert(sizeof(UIW_Security_C_OnKeyUp) == 0x000220, "Wrong size on UIW_Security_C_OnKeyUp");
static_assert(offsetof(UIW_Security_C_OnKeyUp, MyGeometry) == 0x000000, "Member 'UIW_Security_C_OnKeyUp::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, InKeyEvent) == 0x000038, "Member 'UIW_Security_C_OnKeyUp::InKeyEvent' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, ReturnValue) == 0x000070, "Member 'UIW_Security_C_OnKeyUp::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_GetInputEventFromKeyEvent_ReturnValue) == 0x000128, "Member 'UIW_Security_C_OnKeyUp::CallFunc_GetInputEventFromKeyEvent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_InputEvent_IsShiftDown_ReturnValue) == 0x000140, "Member 'UIW_Security_C_OnKeyUp::CallFunc_InputEvent_IsShiftDown_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_GetKey_ReturnValue) == 0x000148, "Member 'UIW_Security_C_OnKeyUp::CallFunc_GetKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_EqualEqual_KeyKey_ReturnValue) == 0x000160, "Member 'UIW_Security_C_OnKeyUp::CallFunc_EqualEqual_KeyKey_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_HasKeyboardFocus_ReturnValue) == 0x000161, "Member 'UIW_Security_C_OnKeyUp::CallFunc_HasKeyboardFocus_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_HasKeyboardFocus_ReturnValue_1) == 0x000162, "Member 'UIW_Security_C_OnKeyUp::CallFunc_HasKeyboardFocus_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_HasKeyboardFocus_ReturnValue_2) == 0x000163, "Member 'UIW_Security_C_OnKeyUp::CallFunc_HasKeyboardFocus_ReturnValue_2' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_HasKeyboardFocus_ReturnValue_3) == 0x000164, "Member 'UIW_Security_C_OnKeyUp::CallFunc_HasKeyboardFocus_ReturnValue_3' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnKeyUp, CallFunc_Handled_ReturnValue) == 0x000168, "Member 'UIW_Security_C_OnKeyUp::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function UIW_Security.UIW_Security_C.OnNeowizAuth
// 0x0001 (0x0001 - 0x0000)
struct UIW_Security_C_OnNeowizAuth final
{
public:
	bool                                          Result;                                            // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Security_C_OnNeowizAuth) == 0x000001, "Wrong alignment on UIW_Security_C_OnNeowizAuth");
static_assert(sizeof(UIW_Security_C_OnNeowizAuth) == 0x000001, "Wrong size on UIW_Security_C_OnNeowizAuth");
static_assert(offsetof(UIW_Security_C_OnNeowizAuth, Result) == 0x000000, "Member 'UIW_Security_C_OnNeowizAuth::Result' has a wrong offset!");

// Function UIW_Security.UIW_Security_C.Send
// 0x0098 (0x0098 - 0x0000)
struct UIW_Security_C_Send final
{
public:
	class ULPlatformSystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0000(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	ECheckBoxState                                CallFunc_GetCheckedState_ReturnValue;              // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetText_ReturnValue;                      // 0x0010(0x0018)()
	bool                                          CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x7];                                       // 0x0029(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_TextTrimPrecedingAndTrailing_ReturnValue; // 0x0030(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0048(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetText_ReturnValue_1;                    // 0x0058(0x0018)()
	class FText                                   CallFunc_TextTrimPrecedingAndTrailing_ReturnValue_1; // 0x0070(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue_1;          // 0x0088(0x0010)(ZeroConstructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Security_C_Send) == 0x000008, "Wrong alignment on UIW_Security_C_Send");
static_assert(sizeof(UIW_Security_C_Send) == 0x000098, "Wrong size on UIW_Security_C_Send");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000000, "Member 'UIW_Security_C_Send::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_GetCheckedState_ReturnValue) == 0x000008, "Member 'UIW_Security_C_Send::CallFunc_GetCheckedState_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_GetText_ReturnValue) == 0x000010, "Member 'UIW_Security_C_Send::CallFunc_GetText_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_EqualEqual_ByteByte_ReturnValue) == 0x000028, "Member 'UIW_Security_C_Send::CallFunc_EqualEqual_ByteByte_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_TextTrimPrecedingAndTrailing_ReturnValue) == 0x000030, "Member 'UIW_Security_C_Send::CallFunc_TextTrimPrecedingAndTrailing_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_Conv_TextToString_ReturnValue) == 0x000048, "Member 'UIW_Security_C_Send::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_GetText_ReturnValue_1) == 0x000058, "Member 'UIW_Security_C_Send::CallFunc_GetText_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_TextTrimPrecedingAndTrailing_ReturnValue_1) == 0x000070, "Member 'UIW_Security_C_Send::CallFunc_TextTrimPrecedingAndTrailing_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_Send, CallFunc_Conv_TextToString_ReturnValue_1) == 0x000088, "Member 'UIW_Security_C_Send::CallFunc_Conv_TextToString_ReturnValue_1' has a wrong offset!");

// Function UIW_Security.UIW_Security_C.OnPWCommitted
// 0x0020 (0x0020 - 0x0000)
struct UIW_Security_C_OnPWCommitted final
{
public:
	class FText                                   Text;                                              // 0x0000(0x0018)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	ETextCommit                                   CommitMethod;                                      // 0x0018(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Security_C_OnPWCommitted) == 0x000008, "Wrong alignment on UIW_Security_C_OnPWCommitted");
static_assert(sizeof(UIW_Security_C_OnPWCommitted) == 0x000020, "Wrong size on UIW_Security_C_OnPWCommitted");
static_assert(offsetof(UIW_Security_C_OnPWCommitted, Text) == 0x000000, "Member 'UIW_Security_C_OnPWCommitted::Text' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnPWCommitted, CommitMethod) == 0x000018, "Member 'UIW_Security_C_OnPWCommitted::CommitMethod' has a wrong offset!");
static_assert(offsetof(UIW_Security_C_OnPWCommitted, K2Node_SwitchEnum_CmpSuccess) == 0x000019, "Member 'UIW_Security_C_OnPWCommitted::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

}


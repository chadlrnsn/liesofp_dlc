#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Setting_Menu

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UIW_Setting_Menu.UIW_Setting_Menu_C.OnFocued__DelegateSignature
// 0x0008 (0x0008 - 0x0000)
struct UIW_Setting_Menu_C_OnFocued__DelegateSignature final
{
public:
	class UUIW_Setting_Menu_C*                    SettingMenu;                                       // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Setting_Menu_C_OnFocued__DelegateSignature) == 0x000008, "Wrong alignment on UIW_Setting_Menu_C_OnFocued__DelegateSignature");
static_assert(sizeof(UIW_Setting_Menu_C_OnFocued__DelegateSignature) == 0x000008, "Wrong size on UIW_Setting_Menu_C_OnFocued__DelegateSignature");
static_assert(offsetof(UIW_Setting_Menu_C_OnFocued__DelegateSignature, SettingMenu) == 0x000000, "Member 'UIW_Setting_Menu_C_OnFocued__DelegateSignature::SettingMenu' has a wrong offset!");

// Function UIW_Setting_Menu.UIW_Setting_Menu_C.ExecuteUbergraph_UIW_Setting_Menu
// 0x0128 (0x0128 - 0x0000)
struct UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue_1;              // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0028(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0038(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_39[0x3];                                       // 0x0039(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x004C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_5C[0x4];                                       // 0x005C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0060(0x0028)()
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x7];                                       // 0x0089(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetPlatformBranchText_Text;               // 0x0090(0x0018)()
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x00A8(0x0008)(NoDestructor)
	class UUIW_Main_C*                            CallFunc_GetMainWidget_MainWidget;                 // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x00B8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x00C8(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x00D8(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0100(0x0028)()
};
static_assert(alignof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu) == 0x000008, "Wrong alignment on UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu");
static_assert(sizeof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu) == 0x000128, "Wrong size on UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, EntryPoint) == 0x000000, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, Temp_bool_Variable) == 0x000004, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, CallFunc_PlayAnimation_ReturnValue_1) == 0x000010, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::CallFunc_PlayAnimation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, Temp_struct_Variable) == 0x000018, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, Temp_struct_Variable_1) == 0x000028, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, Temp_bool_Variable_1) == 0x000038, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, Temp_struct_Variable_2) == 0x00003C, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, Temp_struct_Variable_3) == 0x00004C, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, K2Node_MakeStruct_SlateColor) == 0x000060, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, K2Node_Event_IsDesignTime) == 0x000088, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, CallFunc_GetPlatformBranchText_Text) == 0x000090, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::CallFunc_GetPlatformBranchText_Text' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, K2Node_Event_InFocusEvent) == 0x0000A8, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, CallFunc_GetMainWidget_MainWidget) == 0x0000B0, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::CallFunc_GetMainWidget_MainWidget' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, K2Node_Select_Default) == 0x0000B8, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, K2Node_Select_Default_1) == 0x0000C8, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, K2Node_MakeStruct_SlateColor_1) == 0x0000D8, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu, K2Node_MakeStruct_SlateColor_2) == 0x000100, "Member 'UIW_Setting_Menu_C_ExecuteUbergraph_UIW_Setting_Menu::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");

// Function UIW_Setting_Menu.UIW_Setting_Menu_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct UIW_Setting_Menu_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UIW_Setting_Menu_C_OnFocusLost) == 0x000004, "Wrong alignment on UIW_Setting_Menu_C_OnFocusLost");
static_assert(sizeof(UIW_Setting_Menu_C_OnFocusLost) == 0x000008, "Wrong size on UIW_Setting_Menu_C_OnFocusLost");
static_assert(offsetof(UIW_Setting_Menu_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UIW_Setting_Menu_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function UIW_Setting_Menu.UIW_Setting_Menu_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UIW_Setting_Menu_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Setting_Menu_C_PreConstruct) == 0x000001, "Wrong alignment on UIW_Setting_Menu_C_PreConstruct");
static_assert(sizeof(UIW_Setting_Menu_C_PreConstruct) == 0x000001, "Wrong size on UIW_Setting_Menu_C_PreConstruct");
static_assert(offsetof(UIW_Setting_Menu_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UIW_Setting_Menu_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UIW_Setting_Menu.UIW_Setting_Menu_C.OnFocusReceived
// 0x01D8 (0x01D8 - 0x0000)
struct UIW_Setting_Menu_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x00F8(0x0028)()
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0120(0x00B8)()
};
static_assert(alignof(UIW_Setting_Menu_C_OnFocusReceived) == 0x000008, "Wrong alignment on UIW_Setting_Menu_C_OnFocusReceived");
static_assert(sizeof(UIW_Setting_Menu_C_OnFocusReceived) == 0x0001D8, "Wrong size on UIW_Setting_Menu_C_OnFocusReceived");
static_assert(offsetof(UIW_Setting_Menu_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UIW_Setting_Menu_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UIW_Setting_Menu_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UIW_Setting_Menu_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_OnFocusReceived, K2Node_MakeStruct_SlateColor) == 0x0000F8, "Member 'UIW_Setting_Menu_C_OnFocusReceived::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_OnFocusReceived, CallFunc_Handled_ReturnValue) == 0x000120, "Member 'UIW_Setting_Menu_C_OnFocusReceived::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function UIW_Setting_Menu.UIW_Setting_Menu_C.MoveFocusEffect
// 0x0020 (0x0020 - 0x0000)
struct UIW_Setting_Menu_C_MoveFocusEffect final
{
public:
	class UPanelWidget*                           CallFunc_GetParent_ReturnValue;                    // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UScrollBox*                             K2Node_DynamicCast_AsScroll_Box;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Main_C*                            CallFunc_GetMainWidget_MainWidget;                 // 0x0018(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Setting_Menu_C_MoveFocusEffect) == 0x000008, "Wrong alignment on UIW_Setting_Menu_C_MoveFocusEffect");
static_assert(sizeof(UIW_Setting_Menu_C_MoveFocusEffect) == 0x000020, "Wrong size on UIW_Setting_Menu_C_MoveFocusEffect");
static_assert(offsetof(UIW_Setting_Menu_C_MoveFocusEffect, CallFunc_GetParent_ReturnValue) == 0x000000, "Member 'UIW_Setting_Menu_C_MoveFocusEffect::CallFunc_GetParent_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_MoveFocusEffect, K2Node_DynamicCast_AsScroll_Box) == 0x000008, "Member 'UIW_Setting_Menu_C_MoveFocusEffect::K2Node_DynamicCast_AsScroll_Box' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_MoveFocusEffect, K2Node_DynamicCast_bSuccess) == 0x000010, "Member 'UIW_Setting_Menu_C_MoveFocusEffect::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_MoveFocusEffect, CallFunc_GetMainWidget_MainWidget) == 0x000018, "Member 'UIW_Setting_Menu_C_MoveFocusEffect::CallFunc_GetMainWidget_MainWidget' has a wrong offset!");

// Function UIW_Setting_Menu.UIW_Setting_Menu_C.SetEnabledView
// 0x0018 (0x0018 - 0x0000)
struct UIW_Setting_Menu_C_SetEnabledView final
{
public:
	bool                                          IsEnabledView_0;                                   // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_GetChildAt_ReturnValue;                   // 0x0008(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Setting_Menu_C_SetEnabledView) == 0x000008, "Wrong alignment on UIW_Setting_Menu_C_SetEnabledView");
static_assert(sizeof(UIW_Setting_Menu_C_SetEnabledView) == 0x000018, "Wrong size on UIW_Setting_Menu_C_SetEnabledView");
static_assert(offsetof(UIW_Setting_Menu_C_SetEnabledView, IsEnabledView_0) == 0x000000, "Member 'UIW_Setting_Menu_C_SetEnabledView::IsEnabledView_0' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_SetEnabledView, CallFunc_GetChildAt_ReturnValue) == 0x000008, "Member 'UIW_Setting_Menu_C_SetEnabledView::CallFunc_GetChildAt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Setting_Menu_C_SetEnabledView, CallFunc_IsValid_ReturnValue) == 0x000010, "Member 'UIW_Setting_Menu_C_SetEnabledView::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

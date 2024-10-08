#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_ListItem_Controller

#include "Basic.hpp"

#include "SlateCore_structs.hpp"
#include "UMG_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.ExecuteUbergraph_UIW_ListItem_Controller
// 0x02C0 (0x02C0 - 0x0000)
struct UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable;                                // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable;                              // 0x0008(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_1;                            // 0x0018(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_Variable_1;                              // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLinearColor                           Temp_struct_Variable_2;                            // 0x002C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           Temp_struct_Variable_3;                            // 0x003C(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsExpanded;                          // 0x004C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4D[0x3];                                       // 0x004D(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	class UObject*                                K2Node_Event_ListItemObject;                       // 0x0050(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_bIsSelected;                          // 0x0058(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_59[0x7];                                       // 0x0059(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIBP_ListData_Controller_C*            K2Node_DynamicCast_AsUIBP_List_Data_Controller;    // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x7];                                       // 0x0069(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UTexture2D*                             CallFunc_GetKeyIcon_Icon;                          // 0x0070(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                   CallFunc_GetInputActionInfo_Title;                 // 0x0078(0x0018)()
	class FText                                   CallFunc_GetInputActionInfo_Desc;                  // 0x0090(0x0018)()
	bool                                          CallFunc_GetInputActionInfo_IsEmpty;               // 0x00A8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x00A9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AA[0x2];                                       // 0x00AA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	struct FGeometry                              K2Node_Event_MyGeometry;                           // 0x00AC(0x0038)(IsPlainOldData, NoDestructor)
	uint8                                         Pad_E4[0x4];                                       // 0x00E4(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FPointerEvent                          K2Node_Event_MouseEvent_1;                         // 0x00E8(0x0070)(ConstParm)
	struct FPointerEvent                          K2Node_Event_MouseEvent;                           // 0x0158(0x0070)(ConstParm)
	class UListViewBase*                          CallFunc_GetOwningListView_ReturnValue;            // 0x01C8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFocusEvent                            K2Node_Event_InFocusEvent;                         // 0x01D0(0x0008)(NoDestructor)
	class UListView*                              K2Node_DynamicCast_AsList_View;                    // 0x01D8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess_1;                     // 0x01E0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1E1[0x7];                                      // 0x01E1(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Main_C*                            CallFunc_GetMainWidget_MainWidget;                 // 0x01E8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x01F0(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0218(0x0028)()
	TDelegate<void(bool IsChanging)>              K2Node_CreateDelegate_OutputDelegate;              // 0x0240(0x0010)(ZeroConstructor, NoDestructor)
	struct FLinearColor                           K2Node_Select_Default;                             // 0x0250(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                           K2Node_Select_Default_1;                           // 0x0260(0x0010)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_2;                    // 0x0270(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_3;                    // 0x0298(0x0028)()
};
static_assert(alignof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller");
static_assert(sizeof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller) == 0x0002C0, "Wrong size on UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, EntryPoint) == 0x000000, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, Temp_bool_Variable) == 0x000004, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::Temp_bool_Variable' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, Temp_struct_Variable) == 0x000008, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::Temp_struct_Variable' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, Temp_struct_Variable_1) == 0x000018, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::Temp_struct_Variable_1' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, Temp_bool_Variable_1) == 0x000028, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::Temp_bool_Variable_1' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, Temp_struct_Variable_2) == 0x00002C, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::Temp_struct_Variable_2' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, Temp_struct_Variable_3) == 0x00003C, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::Temp_struct_Variable_3' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Event_bIsExpanded) == 0x00004C, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Event_bIsExpanded' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Event_ListItemObject) == 0x000050, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Event_ListItemObject' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Event_bIsSelected) == 0x000058, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Event_bIsSelected' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_DynamicCast_AsUIBP_List_Data_Controller) == 0x000060, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_DynamicCast_AsUIBP_List_Data_Controller' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_DynamicCast_bSuccess) == 0x000068, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, CallFunc_GetKeyIcon_Icon) == 0x000070, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::CallFunc_GetKeyIcon_Icon' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, CallFunc_GetInputActionInfo_Title) == 0x000078, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::CallFunc_GetInputActionInfo_Title' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, CallFunc_GetInputActionInfo_Desc) == 0x000090, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::CallFunc_GetInputActionInfo_Desc' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, CallFunc_GetInputActionInfo_IsEmpty) == 0x0000A8, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::CallFunc_GetInputActionInfo_IsEmpty' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x0000A9, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Event_MyGeometry) == 0x0000AC, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Event_MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Event_MouseEvent_1) == 0x0000E8, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Event_MouseEvent_1' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Event_MouseEvent) == 0x000158, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Event_MouseEvent' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, CallFunc_GetOwningListView_ReturnValue) == 0x0001C8, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::CallFunc_GetOwningListView_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Event_InFocusEvent) == 0x0001D0, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Event_InFocusEvent' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_DynamicCast_AsList_View) == 0x0001D8, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_DynamicCast_AsList_View' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_DynamicCast_bSuccess_1) == 0x0001E0, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_DynamicCast_bSuccess_1' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, CallFunc_GetMainWidget_MainWidget) == 0x0001E8, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::CallFunc_GetMainWidget_MainWidget' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_MakeStruct_SlateColor) == 0x0001F0, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_MakeStruct_SlateColor_1) == 0x000218, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_CreateDelegate_OutputDelegate) == 0x000240, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Select_Default) == 0x000250, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Select_Default' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_Select_Default_1) == 0x000260, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_Select_Default_1' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_MakeStruct_SlateColor_2) == 0x000270, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_MakeStruct_SlateColor_2' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller, K2Node_MakeStruct_SlateColor_3) == 0x000298, "Member 'UIW_ListItem_Controller_C_ExecuteUbergraph_UIW_ListItem_Controller::K2Node_MakeStruct_SlateColor_3' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.OnFocusLost
// 0x0008 (0x0008 - 0x0000)
struct UIW_ListItem_Controller_C_OnFocusLost final
{
public:
	struct FFocusEvent                            InFocusEvent;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
};
static_assert(alignof(UIW_ListItem_Controller_C_OnFocusLost) == 0x000004, "Wrong alignment on UIW_ListItem_Controller_C_OnFocusLost");
static_assert(sizeof(UIW_ListItem_Controller_C_OnFocusLost) == 0x000008, "Wrong size on UIW_ListItem_Controller_C_OnFocusLost");
static_assert(offsetof(UIW_ListItem_Controller_C_OnFocusLost, InFocusEvent) == 0x000000, "Member 'UIW_ListItem_Controller_C_OnFocusLost::InFocusEvent' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.OnMouseLeave
// 0x0070 (0x0070 - 0x0000)
struct UIW_ListItem_Controller_C_OnMouseLeave final
{
public:
	struct FPointerEvent                          MouseEvent;                                        // 0x0000(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UIW_ListItem_Controller_C_OnMouseLeave) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_OnMouseLeave");
static_assert(sizeof(UIW_ListItem_Controller_C_OnMouseLeave) == 0x000070, "Wrong size on UIW_ListItem_Controller_C_OnMouseLeave");
static_assert(offsetof(UIW_ListItem_Controller_C_OnMouseLeave, MouseEvent) == 0x000000, "Member 'UIW_ListItem_Controller_C_OnMouseLeave::MouseEvent' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.OnMouseEnter
// 0x00A8 (0x00A8 - 0x0000)
struct UIW_ListItem_Controller_C_OnMouseEnter final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UIW_ListItem_Controller_C_OnMouseEnter) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_OnMouseEnter");
static_assert(sizeof(UIW_ListItem_Controller_C_OnMouseEnter) == 0x0000A8, "Wrong size on UIW_ListItem_Controller_C_OnMouseEnter");
static_assert(offsetof(UIW_ListItem_Controller_C_OnMouseEnter, MyGeometry) == 0x000000, "Member 'UIW_ListItem_Controller_C_OnMouseEnter::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_OnMouseEnter, MouseEvent) == 0x000038, "Member 'UIW_ListItem_Controller_C_OnMouseEnter::MouseEvent' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.BP_OnItemSelectionChanged
// 0x0001 (0x0001 - 0x0000)
struct UIW_ListItem_Controller_C_BP_OnItemSelectionChanged final
{
public:
	bool                                          bIsSelected;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_ListItem_Controller_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong alignment on UIW_ListItem_Controller_C_BP_OnItemSelectionChanged");
static_assert(sizeof(UIW_ListItem_Controller_C_BP_OnItemSelectionChanged) == 0x000001, "Wrong size on UIW_ListItem_Controller_C_BP_OnItemSelectionChanged");
static_assert(offsetof(UIW_ListItem_Controller_C_BP_OnItemSelectionChanged, bIsSelected) == 0x000000, "Member 'UIW_ListItem_Controller_C_BP_OnItemSelectionChanged::bIsSelected' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.OnListItemObjectSet
// 0x0008 (0x0008 - 0x0000)
struct UIW_ListItem_Controller_C_OnListItemObjectSet final
{
public:
	class UObject*                                ListItemObject;                                    // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_ListItem_Controller_C_OnListItemObjectSet) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_OnListItemObjectSet");
static_assert(sizeof(UIW_ListItem_Controller_C_OnListItemObjectSet) == 0x000008, "Wrong size on UIW_ListItem_Controller_C_OnListItemObjectSet");
static_assert(offsetof(UIW_ListItem_Controller_C_OnListItemObjectSet, ListItemObject) == 0x000000, "Member 'UIW_ListItem_Controller_C_OnListItemObjectSet::ListItemObject' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.BP_OnItemExpansionChanged
// 0x0001 (0x0001 - 0x0000)
struct UIW_ListItem_Controller_C_BP_OnItemExpansionChanged final
{
public:
	bool                                          bIsExpanded;                                       // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_ListItem_Controller_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong alignment on UIW_ListItem_Controller_C_BP_OnItemExpansionChanged");
static_assert(sizeof(UIW_ListItem_Controller_C_BP_OnItemExpansionChanged) == 0x000001, "Wrong size on UIW_ListItem_Controller_C_BP_OnItemExpansionChanged");
static_assert(offsetof(UIW_ListItem_Controller_C_BP_OnItemExpansionChanged, bIsExpanded) == 0x000000, "Member 'UIW_ListItem_Controller_C_BP_OnItemExpansionChanged::bIsExpanded' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.SetMoveFocusEffect
// 0x0020 (0x0020 - 0x0000)
struct UIW_ListItem_Controller_C_SetMoveFocusEffect final
{
public:
	class UUIW_Main_C*                            CallFunc_GetMainWidget_MainWidget;                 // 0x0000(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_GetListItemObject_ReturnValue;            // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                                CallFunc_BP_GetSelectedItem_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BP_IsItemVisible_ReturnValue;             // 0x001A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x001B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_ListItem_Controller_C_SetMoveFocusEffect) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_SetMoveFocusEffect");
static_assert(sizeof(UIW_ListItem_Controller_C_SetMoveFocusEffect) == 0x000020, "Wrong size on UIW_ListItem_Controller_C_SetMoveFocusEffect");
static_assert(offsetof(UIW_ListItem_Controller_C_SetMoveFocusEffect, CallFunc_GetMainWidget_MainWidget) == 0x000000, "Member 'UIW_ListItem_Controller_C_SetMoveFocusEffect::CallFunc_GetMainWidget_MainWidget' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetMoveFocusEffect, CallFunc_GetListItemObject_ReturnValue) == 0x000008, "Member 'UIW_ListItem_Controller_C_SetMoveFocusEffect::CallFunc_GetListItemObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetMoveFocusEffect, CallFunc_BP_GetSelectedItem_ReturnValue) == 0x000010, "Member 'UIW_ListItem_Controller_C_SetMoveFocusEffect::CallFunc_BP_GetSelectedItem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetMoveFocusEffect, CallFunc_IsValid_ReturnValue) == 0x000018, "Member 'UIW_ListItem_Controller_C_SetMoveFocusEffect::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetMoveFocusEffect, CallFunc_EqualEqual_ObjectObject_ReturnValue) == 0x000019, "Member 'UIW_ListItem_Controller_C_SetMoveFocusEffect::CallFunc_EqualEqual_ObjectObject_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetMoveFocusEffect, CallFunc_BP_IsItemVisible_ReturnValue) == 0x00001A, "Member 'UIW_ListItem_Controller_C_SetMoveFocusEffect::CallFunc_BP_IsItemVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetMoveFocusEffect, CallFunc_BooleanAND_ReturnValue) == 0x00001B, "Member 'UIW_ListItem_Controller_C_SetMoveFocusEffect::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.OnFocusReceived
// 0x01B0 (0x01B0 - 0x0000)
struct UIW_ListItem_Controller_C_OnFocusReceived final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                            InFocusEvent;                                      // 0x0038(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                            ReturnValue;                                       // 0x0040(0x00B8)(Parm, OutParm, ReturnParm)
	struct FEventReply                            K2Node_MakeStruct_EventReply;                      // 0x00F8(0x00B8)()
};
static_assert(alignof(UIW_ListItem_Controller_C_OnFocusReceived) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_OnFocusReceived");
static_assert(sizeof(UIW_ListItem_Controller_C_OnFocusReceived) == 0x0001B0, "Wrong size on UIW_ListItem_Controller_C_OnFocusReceived");
static_assert(offsetof(UIW_ListItem_Controller_C_OnFocusReceived, MyGeometry) == 0x000000, "Member 'UIW_ListItem_Controller_C_OnFocusReceived::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_OnFocusReceived, InFocusEvent) == 0x000038, "Member 'UIW_ListItem_Controller_C_OnFocusReceived::InFocusEvent' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_OnFocusReceived, ReturnValue) == 0x000040, "Member 'UIW_ListItem_Controller_C_OnFocusReceived::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_OnFocusReceived, K2Node_MakeStruct_EventReply) == 0x0000F8, "Member 'UIW_ListItem_Controller_C_OnFocusReceived::K2Node_MakeStruct_EventReply' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.SetSelected
// 0x0058 (0x0058 - 0x0000)
struct UIW_ListItem_Controller_C_SetSelected final
{
public:
	bool                                          IsSelected_0;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FSlateColor                            K2Node_MakeStruct_SlateColor;                      // 0x0008(0x0028)()
	struct FSlateColor                            K2Node_MakeStruct_SlateColor_1;                    // 0x0030(0x0028)()
};
static_assert(alignof(UIW_ListItem_Controller_C_SetSelected) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_SetSelected");
static_assert(sizeof(UIW_ListItem_Controller_C_SetSelected) == 0x000058, "Wrong size on UIW_ListItem_Controller_C_SetSelected");
static_assert(offsetof(UIW_ListItem_Controller_C_SetSelected, IsSelected_0) == 0x000000, "Member 'UIW_ListItem_Controller_C_SetSelected::IsSelected_0' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetSelected, K2Node_MakeStruct_SlateColor) == 0x000008, "Member 'UIW_ListItem_Controller_C_SetSelected::K2Node_MakeStruct_SlateColor' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_SetSelected, K2Node_MakeStruct_SlateColor_1) == 0x000030, "Member 'UIW_ListItem_Controller_C_SetSelected::K2Node_MakeStruct_SlateColor_1' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.OnChanging
// 0x0010 (0x0010 - 0x0000)
struct UIW_ListItem_Controller_C_OnChanging final
{
public:
	bool                                          IsChanging;                                        // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimation_ReturnValue;                // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_ListItem_Controller_C_OnChanging) == 0x000008, "Wrong alignment on UIW_ListItem_Controller_C_OnChanging");
static_assert(sizeof(UIW_ListItem_Controller_C_OnChanging) == 0x000010, "Wrong size on UIW_ListItem_Controller_C_OnChanging");
static_assert(offsetof(UIW_ListItem_Controller_C_OnChanging, IsChanging) == 0x000000, "Member 'UIW_ListItem_Controller_C_OnChanging::IsChanging' has a wrong offset!");
static_assert(offsetof(UIW_ListItem_Controller_C_OnChanging, CallFunc_PlayAnimation_ReturnValue) == 0x000008, "Member 'UIW_ListItem_Controller_C_OnChanging::CallFunc_PlayAnimation_ReturnValue' has a wrong offset!");

// Function UIW_ListItem_Controller.UIW_ListItem_Controller_C.OnOverlap
// 0x0001 (0x0001 - 0x0000)
struct UIW_ListItem_Controller_C_OnOverlap final
{
public:
	bool                                          IsOverlap;                                         // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_ListItem_Controller_C_OnOverlap) == 0x000001, "Wrong alignment on UIW_ListItem_Controller_C_OnOverlap");
static_assert(sizeof(UIW_ListItem_Controller_C_OnOverlap) == 0x000001, "Wrong size on UIW_ListItem_Controller_C_OnOverlap");
static_assert(offsetof(UIW_ListItem_Controller_C_OnOverlap, IsOverlap) == 0x000000, "Member 'UIW_ListItem_Controller_C_OnOverlap::IsOverlap' has a wrong offset!");

}


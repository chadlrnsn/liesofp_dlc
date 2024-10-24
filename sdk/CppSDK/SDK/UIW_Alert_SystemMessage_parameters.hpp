#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_SystemMessage

#include "Basic.hpp"

#include "ProjectP_structs.hpp"
#include "Engine_structs.hpp"
#include "UIST_Time_structs.hpp"


namespace SDK::Params
{

// Function UIW_Alert_SystemMessage.UIW_Alert_SystemMessage_C.ExecuteUbergraph_UIW_Alert_SystemMessage
// 0x00A0 (0x00A0 - 0x0000)
struct UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTweenEase                             K2Node_MakeStruct_TweenEase;                       // 0x0004(0x000C)(NoDestructor)
	struct FUIST_Time                             CallFunc_GetDataTableRowFromName_OutRow;           // 0x0010(0x0018)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x0028(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTweenEase                             K2Node_MakeStruct_TweenEase_1;                     // 0x002C(0x000C)(NoDestructor)
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0038(0x0008)(NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName CategoryName)>     K2Node_CreateDelegate_OutputDelegate;              // 0x0040(0x0010)(ZeroConstructor, NoDestructor)
	struct FTweenEase                             K2Node_MakeStruct_TweenEase_2;                     // 0x0050(0x000C)(NoDestructor)
	struct FTweenEase                             K2Node_MakeStruct_TweenEase_3;                     // 0x005C(0x000C)(NoDestructor)
	struct FTweenEase                             K2Node_MakeStruct_TweenEase_4;                     // 0x0068(0x000C)(NoDestructor)
	class FName                                   K2Node_CustomEvent_CategoryName;                   // 0x0074(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_7C[0x4];                                       // 0x007C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Main_C*                            CallFunc_GetMainWidget_MainWidget;                 // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIW_Window_C*                          CallFunc_GetTopWindow_Window;                      // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIW_Inventory_C*                       K2Node_DynamicCast_AsUIW_Inventory;                // 0x0090(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0098(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0099(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage) == 0x000008, "Wrong alignment on UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage");
static_assert(sizeof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage) == 0x0000A0, "Wrong size on UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, EntryPoint) == 0x000000, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_MakeStruct_TweenEase) == 0x000004, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_MakeStruct_TweenEase' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, CallFunc_GetDataTableRowFromName_OutRow) == 0x000010, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::CallFunc_GetDataTableRowFromName_OutRow' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, CallFunc_GetDataTableRowFromName_ReturnValue) == 0x000028, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::CallFunc_GetDataTableRowFromName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_MakeStruct_TweenEase_1) == 0x00002C, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_MakeStruct_TweenEase_1' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, CallFunc_K2_SetTimer_ReturnValue) == 0x000038, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_CreateDelegate_OutputDelegate) == 0x000040, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_MakeStruct_TweenEase_2) == 0x000050, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_MakeStruct_TweenEase_2' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_MakeStruct_TweenEase_3) == 0x00005C, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_MakeStruct_TweenEase_3' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_MakeStruct_TweenEase_4) == 0x000068, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_MakeStruct_TweenEase_4' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_CustomEvent_CategoryName) == 0x000074, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_CustomEvent_CategoryName' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, CallFunc_GetMainWidget_MainWidget) == 0x000080, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::CallFunc_GetMainWidget_MainWidget' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, CallFunc_GetTopWindow_Window) == 0x000088, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::CallFunc_GetTopWindow_Window' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_DynamicCast_AsUIW_Inventory) == 0x000090, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_DynamicCast_AsUIW_Inventory' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, K2Node_DynamicCast_bSuccess) == 0x000098, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000099, "Member 'UIW_Alert_SystemMessage_C_ExecuteUbergraph_UIW_Alert_SystemMessage::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");

// Function UIW_Alert_SystemMessage.UIW_Alert_SystemMessage_C.Remove
// 0x0008 (0x0008 - 0x0000)
struct UIW_Alert_SystemMessage_C_Remove final
{
public:
	class FName                                   CategoryName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Alert_SystemMessage_C_Remove) == 0x000004, "Wrong alignment on UIW_Alert_SystemMessage_C_Remove");
static_assert(sizeof(UIW_Alert_SystemMessage_C_Remove) == 0x000008, "Wrong size on UIW_Alert_SystemMessage_C_Remove");
static_assert(offsetof(UIW_Alert_SystemMessage_C_Remove, CategoryName) == 0x000000, "Member 'UIW_Alert_SystemMessage_C_Remove::CategoryName' has a wrong offset!");

}


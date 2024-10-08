#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_HUD_Abnormal_Debuff

#include "Basic.hpp"

#include "ProjectP_structs.hpp"


namespace SDK::Params
{

// Function UIW_HUD_Abnormal_Debuff.UIW_HUD_Abnormal_Debuff_C.ExecuteUbergraph_UIW_HUD_Abnormal_Debuff
// 0x0030 (0x0030 - 0x0000)
struct UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void(class FName AbnormalName, int64 AbnormalUniqueId, bool Visible)> K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName AbnormalName, TArray<struct FLBuildupInfo>& BuildupInfos)> K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULEventDispatcherSystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff) == 0x000008, "Wrong alignment on UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff");
static_assert(sizeof(UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff) == 0x000030, "Wrong size on UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff, EntryPoint) == 0x000000, "Member 'UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000028, "Member 'UIW_HUD_Abnormal_Debuff_C_ExecuteUbergraph_UIW_HUD_Abnormal_Debuff::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");

// Function UIW_HUD_Abnormal_Debuff.UIW_HUD_Abnormal_Debuff_C.SetBuildup
// 0x00D8 (0x00D8 - 0x0000)
struct UIW_HUD_Abnormal_Debuff_C_SetBuildup final
{
public:
	class FName                                   AbnormalName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FLBuildupInfo>                  BuildupInfos;                                      // 0x0008(0x0010)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FLBuildupInfo>                  LocalBuildupInfo;                                  // 0x0018(0x0010)(Edit, BlueprintVisible)
	bool                                          LocalIsFind;                                       // 0x0028(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_29[0x3];                                       // 0x0029(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x002C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0030(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0034(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIW_Main_C*                            CallFunc_GetMainWidget_MainWidget;                 // 0x0038(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x0040(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_41[0x7];                                       // 0x0041(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FLBuildupInfo                          CallFunc_Array_Get_Item;                           // 0x0048(0x0020)(NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x0068(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_69[0x3];                                       // 0x0069(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x006C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0070(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_71[0x3];                                       // 0x0071(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Array_Index_Variable_1;                   // 0x0074(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x6];                                       // 0x007A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_HUD_Abnormal_Gauge_C*              CallFunc_Create_ReturnValue;                       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0088(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Loop_Counter_Variable_1;                  // 0x0090(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_94[0x4];                                       // 0x0094(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0098(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x00A8(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_AC[0x4];                                       // 0x00AC(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item_1;                         // 0x00B0(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUIW_HUD_Abnormal_Gauge_C*              K2Node_DynamicCast_AsUIW_HUD_Abnormal_Gauge;       // 0x00B8(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x00C0(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Array_Length_ReturnValue_1;               // 0x00C4(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue_1;                // 0x00C8(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x00C9(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CA[0x2];                                       // 0x00CA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class FName                                   CallFunc_GetCodeName_CodeName;                     // 0x00CC(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x00D4(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x00D5(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_HUD_Abnormal_Debuff_C_SetBuildup) == 0x000008, "Wrong alignment on UIW_HUD_Abnormal_Debuff_C_SetBuildup");
static_assert(sizeof(UIW_HUD_Abnormal_Debuff_C_SetBuildup) == 0x0000D8, "Wrong size on UIW_HUD_Abnormal_Debuff_C_SetBuildup");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, AbnormalName) == 0x000000, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::AbnormalName' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, BuildupInfos) == 0x000008, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::BuildupInfos' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, LocalBuildupInfo) == 0x000018, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::LocalBuildupInfo' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, LocalIsFind) == 0x000028, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::LocalIsFind' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, Temp_int_Loop_Counter_Variable) == 0x00002C, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Add_IntInt_ReturnValue) == 0x000030, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, Temp_int_Array_Index_Variable) == 0x000034, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_GetMainWidget_MainWidget) == 0x000038, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_GetMainWidget_MainWidget' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, Temp_bool_True_if_break_was_hit_Variable) == 0x000040, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Array_Get_Item) == 0x000048, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Not_PreBool_ReturnValue) == 0x000068, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Array_Length_ReturnValue) == 0x00006C, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Less_IntInt_ReturnValue) == 0x000070, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, Temp_int_Array_Index_Variable_1) == 0x000074, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::Temp_int_Array_Index_Variable_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x000078, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_BooleanAND_ReturnValue) == 0x000079, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Create_ReturnValue) == 0x000080, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000088, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, Temp_int_Loop_Counter_Variable_1) == 0x000090, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::Temp_int_Loop_Counter_Variable_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_GetAllChildren_ReturnValue) == 0x000098, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Add_IntInt_ReturnValue_1) == 0x0000A8, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Array_Get_Item_1) == 0x0000B0, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Array_Get_Item_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, K2Node_DynamicCast_AsUIW_HUD_Abnormal_Gauge) == 0x0000B8, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::K2Node_DynamicCast_AsUIW_HUD_Abnormal_Gauge' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, K2Node_DynamicCast_bSuccess) == 0x0000C0, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Array_Length_ReturnValue_1) == 0x0000C4, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Array_Length_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_Less_IntInt_ReturnValue_1) == 0x0000C8, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_Less_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_BooleanAND_ReturnValue_1) == 0x0000C9, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_GetCodeName_CodeName) == 0x0000CC, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_GetCodeName_CodeName' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_EqualEqual_NameName_ReturnValue) == 0x0000D4, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetBuildup, CallFunc_BooleanAND_ReturnValue_2) == 0x0000D5, "Member 'UIW_HUD_Abnormal_Debuff_C_SetBuildup::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

// Function UIW_HUD_Abnormal_Debuff.UIW_HUD_Abnormal_Debuff_C.SetAbnormal
// 0x0090 (0x0090 - 0x0000)
struct UIW_HUD_Abnormal_Debuff_C_SetAbnormal final
{
public:
	class FName                                   AbnormalName;                                      // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                         AbnormalUniqueId;                                  // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Visible;                                           // 0x0010(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x7];                                       // 0x0011(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	int64                                         UniqueId;                                          // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          LocalIsFind;                                       // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Temp_int_Loop_Counter_Variable;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0028(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2C[0x4];                                       // 0x002C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Main_C*                            CallFunc_GetMainWidget_MainWidget;                 // 0x0030(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Array_Index_Variable;                     // 0x0038(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Temp_bool_True_if_break_was_hit_Variable;          // 0x003C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue;                  // 0x003D(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x003E(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3F[0x1];                                       // 0x003F(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_HUD_Abnormal_Gauge_C*              CallFunc_Create_ReturnValue;                       // 0x0040(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_BooleanAND_ReturnValue;                   // 0x0048(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_49[0x7];                                       // 0x0049(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UVerticalBoxSlot*                       CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x0050(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                        CallFunc_GetAllChildren_ReturnValue;               // 0x0058(0x0010)(ReferenceParm, ContainsInstancedReference)
	int32                                         CallFunc_Array_Length_ReturnValue;                 // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UWidget*                                CallFunc_Array_Get_Item;                           // 0x0070(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_79[0x7];                                       // 0x0079(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_HUD_Abnormal_Gauge_C*              K2Node_DynamicCast_AsUIW_HUD_Abnormal_Gauge;       // 0x0080(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_DynamicCast_bSuccess;                       // 0x0088(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_1;                 // 0x0089(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_Int64Int64_ReturnValue;        // 0x008A(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Not_PreBool_ReturnValue_1;                // 0x008B(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_BooleanAND_ReturnValue_2;                 // 0x008C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal) == 0x000008, "Wrong alignment on UIW_HUD_Abnormal_Debuff_C_SetAbnormal");
static_assert(sizeof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal) == 0x000090, "Wrong size on UIW_HUD_Abnormal_Debuff_C_SetAbnormal");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, AbnormalName) == 0x000000, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::AbnormalName' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, AbnormalUniqueId) == 0x000008, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::AbnormalUniqueId' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, Visible) == 0x000010, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::Visible' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, UniqueId) == 0x000018, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::UniqueId' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, LocalIsFind) == 0x000020, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::LocalIsFind' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, Temp_int_Loop_Counter_Variable) == 0x000024, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::Temp_int_Loop_Counter_Variable' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_Add_IntInt_ReturnValue) == 0x000028, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_GetMainWidget_MainWidget) == 0x000030, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_GetMainWidget_MainWidget' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, Temp_int_Array_Index_Variable) == 0x000038, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::Temp_int_Array_Index_Variable' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, Temp_bool_True_if_break_was_hit_Variable) == 0x00003C, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::Temp_bool_True_if_break_was_hit_Variable' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_Not_PreBool_ReturnValue) == 0x00003D, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_Not_PreBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_EqualEqual_BoolBool_ReturnValue) == 0x00003E, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_EqualEqual_BoolBool_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_Create_ReturnValue) == 0x000040, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_BooleanAND_ReturnValue) == 0x000048, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_BooleanAND_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_AddChildToVerticalBox_ReturnValue) == 0x000050, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_AddChildToVerticalBox_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_GetAllChildren_ReturnValue) == 0x000058, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_GetAllChildren_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_Array_Length_ReturnValue) == 0x000068, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_Array_Length_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_Array_Get_Item) == 0x000070, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_Array_Get_Item' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_Less_IntInt_ReturnValue) == 0x000078, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, K2Node_DynamicCast_AsUIW_HUD_Abnormal_Gauge) == 0x000080, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::K2Node_DynamicCast_AsUIW_HUD_Abnormal_Gauge' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, K2Node_DynamicCast_bSuccess) == 0x000088, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::K2Node_DynamicCast_bSuccess' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_BooleanAND_ReturnValue_1) == 0x000089, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_BooleanAND_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_EqualEqual_Int64Int64_ReturnValue) == 0x00008A, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_EqualEqual_Int64Int64_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_Not_PreBool_ReturnValue_1) == 0x00008B, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_Not_PreBool_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_HUD_Abnormal_Debuff_C_SetAbnormal, CallFunc_BooleanAND_ReturnValue_2) == 0x00008C, "Member 'UIW_HUD_Abnormal_Debuff_C_SetAbnormal::CallFunc_BooleanAND_ReturnValue_2' has a wrong offset!");

}


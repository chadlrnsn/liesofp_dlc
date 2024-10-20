#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Page_Indicator

#include "Basic.hpp"


namespace SDK::Params
{

// Function UIW_Page_Indicator.UIW_Page_Indicator_C.SetData
// 0x0028 (0x0028 - 0x0000)
struct UIW_Page_Indicator_C_SetData final
{
public:
	int32                                         Current;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Max;                                               // 0x0004(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_C[0x4];                                        // 0x000C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class UUIW_Page_Indicator_Item_C*             CallFunc_Create_ReturnValue;                       // 0x0010(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0019(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1A[0x2];                                       // 0x001A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                     CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x0020(0x0008)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Page_Indicator_C_SetData) == 0x000008, "Wrong alignment on UIW_Page_Indicator_C_SetData");
static_assert(sizeof(UIW_Page_Indicator_C_SetData) == 0x000028, "Wrong size on UIW_Page_Indicator_C_SetData");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, Current) == 0x000000, "Member 'UIW_Page_Indicator_C_SetData::Current' has a wrong offset!");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, Max) == 0x000004, "Member 'UIW_Page_Indicator_C_SetData::Max' has a wrong offset!");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, Temp_int_Variable) == 0x000008, "Member 'UIW_Page_Indicator_C_SetData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, CallFunc_Create_ReturnValue) == 0x000010, "Member 'UIW_Page_Indicator_C_SetData::CallFunc_Create_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000018, "Member 'UIW_Page_Indicator_C_SetData::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000019, "Member 'UIW_Page_Indicator_C_SetData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'UIW_Page_Indicator_C_SetData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Page_Indicator_C_SetData, CallFunc_AddChildToHorizontalBox_ReturnValue) == 0x000020, "Member 'UIW_Page_Indicator_C_SetData::CallFunc_AddChildToHorizontalBox_ReturnValue' has a wrong offset!");

}


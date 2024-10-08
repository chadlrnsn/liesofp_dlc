#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Stepper

#include "Basic.hpp"


namespace SDK::Params
{

// Function UIW_Stepper.UIW_Stepper_C.OnOptionChanged__DelegateSignature
// 0x0004 (0x0004 - 0x0000)
struct UIW_Stepper_C_OnOptionChanged__DelegateSignature final
{
public:
	int32                                         SelectedIndex_0;                                   // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Stepper_C_OnOptionChanged__DelegateSignature) == 0x000004, "Wrong alignment on UIW_Stepper_C_OnOptionChanged__DelegateSignature");
static_assert(sizeof(UIW_Stepper_C_OnOptionChanged__DelegateSignature) == 0x000004, "Wrong size on UIW_Stepper_C_OnOptionChanged__DelegateSignature");
static_assert(offsetof(UIW_Stepper_C_OnOptionChanged__DelegateSignature, SelectedIndex_0) == 0x000000, "Member 'UIW_Stepper_C_OnOptionChanged__DelegateSignature::SelectedIndex_0' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.ExecuteUbergraph_UIW_Stepper
// 0x0028 (0x0028 - 0x0000)
struct UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          K2Node_Event_IsDesignTime;                         // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_5[0x3];                                        // 0x0005(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0008(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0018(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper) == 0x000004, "Wrong alignment on UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper");
static_assert(sizeof(UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper) == 0x000028, "Wrong size on UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper");
static_assert(offsetof(UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper, EntryPoint) == 0x000000, "Member 'UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper, K2Node_Event_IsDesignTime) == 0x000004, "Member 'UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper::K2Node_Event_IsDesignTime' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper, K2Node_CreateDelegate_OutputDelegate) == 0x000008, "Member 'UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper, K2Node_CreateDelegate_OutputDelegate_1) == 0x000018, "Member 'UIW_Stepper_C_ExecuteUbergraph_UIW_Stepper::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.PreConstruct
// 0x0001 (0x0001 - 0x0000)
struct UIW_Stepper_C_PreConstruct final
{
public:
	bool                                          IsDesignTime;                                      // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Stepper_C_PreConstruct) == 0x000001, "Wrong alignment on UIW_Stepper_C_PreConstruct");
static_assert(sizeof(UIW_Stepper_C_PreConstruct) == 0x000001, "Wrong size on UIW_Stepper_C_PreConstruct");
static_assert(offsetof(UIW_Stepper_C_PreConstruct, IsDesignTime) == 0x000000, "Member 'UIW_Stepper_C_PreConstruct::IsDesignTime' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.GetSelectedIndex
// 0x0004 (0x0004 - 0x0000)
struct UIW_Stepper_C_GetSelectedIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Stepper_C_GetSelectedIndex) == 0x000004, "Wrong alignment on UIW_Stepper_C_GetSelectedIndex");
static_assert(sizeof(UIW_Stepper_C_GetSelectedIndex) == 0x000004, "Wrong size on UIW_Stepper_C_GetSelectedIndex");
static_assert(offsetof(UIW_Stepper_C_GetSelectedIndex, Index_0) == 0x000000, "Member 'UIW_Stepper_C_GetSelectedIndex::Index_0' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.GetSelectedPrev
// 0x0010 (0x0010 - 0x0000)
struct UIW_Stepper_C_GetSelectedPrev final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x000C(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Stepper_C_GetSelectedPrev) == 0x000004, "Wrong alignment on UIW_Stepper_C_GetSelectedPrev");
static_assert(sizeof(UIW_Stepper_C_GetSelectedPrev) == 0x000010, "Wrong size on UIW_Stepper_C_GetSelectedPrev");
static_assert(offsetof(UIW_Stepper_C_GetSelectedPrev, Index_0) == 0x000000, "Member 'UIW_Stepper_C_GetSelectedPrev::Index_0' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_GetSelectedPrev, CallFunc_Array_LastIndex_ReturnValue) == 0x000004, "Member 'UIW_Stepper_C_GetSelectedPrev::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_GetSelectedPrev, CallFunc_Subtract_IntInt_ReturnValue) == 0x000008, "Member 'UIW_Stepper_C_GetSelectedPrev::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_GetSelectedPrev, CallFunc_Less_IntInt_ReturnValue) == 0x00000C, "Member 'UIW_Stepper_C_GetSelectedPrev::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.SetSelectedIndex
// 0x0004 (0x0004 - 0x0000)
struct UIW_Stepper_C_SetSelectedIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Stepper_C_SetSelectedIndex) == 0x000004, "Wrong alignment on UIW_Stepper_C_SetSelectedIndex");
static_assert(sizeof(UIW_Stepper_C_SetSelectedIndex) == 0x000004, "Wrong size on UIW_Stepper_C_SetSelectedIndex");
static_assert(offsetof(UIW_Stepper_C_SetSelectedIndex, Index_0) == 0x000000, "Member 'UIW_Stepper_C_SetSelectedIndex::Index_0' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.SetSelectedPrev
// 0x0004 (0x0004 - 0x0000)
struct UIW_Stepper_C_SetSelectedPrev final
{
public:
	int32                                         CallFunc_GetSelectedPrev_Index;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Stepper_C_SetSelectedPrev) == 0x000004, "Wrong alignment on UIW_Stepper_C_SetSelectedPrev");
static_assert(sizeof(UIW_Stepper_C_SetSelectedPrev) == 0x000004, "Wrong size on UIW_Stepper_C_SetSelectedPrev");
static_assert(offsetof(UIW_Stepper_C_SetSelectedPrev, CallFunc_GetSelectedPrev_Index) == 0x000000, "Member 'UIW_Stepper_C_SetSelectedPrev::CallFunc_GetSelectedPrev_Index' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.GetSelectedNext
// 0x0014 (0x0014 - 0x0000)
struct UIW_Stepper_C_GetSelectedNext final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_LastIndex_ReturnValue_1;            // 0x0008(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0010(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Stepper_C_GetSelectedNext) == 0x000004, "Wrong alignment on UIW_Stepper_C_GetSelectedNext");
static_assert(sizeof(UIW_Stepper_C_GetSelectedNext) == 0x000014, "Wrong size on UIW_Stepper_C_GetSelectedNext");
static_assert(offsetof(UIW_Stepper_C_GetSelectedNext, Index_0) == 0x000000, "Member 'UIW_Stepper_C_GetSelectedNext::Index_0' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_GetSelectedNext, CallFunc_Array_LastIndex_ReturnValue) == 0x000004, "Member 'UIW_Stepper_C_GetSelectedNext::CallFunc_Array_LastIndex_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_GetSelectedNext, CallFunc_Array_LastIndex_ReturnValue_1) == 0x000008, "Member 'UIW_Stepper_C_GetSelectedNext::CallFunc_Array_LastIndex_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_GetSelectedNext, CallFunc_Add_IntInt_ReturnValue) == 0x00000C, "Member 'UIW_Stepper_C_GetSelectedNext::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Stepper_C_GetSelectedNext, CallFunc_Greater_IntInt_ReturnValue) == 0x000010, "Member 'UIW_Stepper_C_GetSelectedNext::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.SetSelectedNext
// 0x0004 (0x0004 - 0x0000)
struct UIW_Stepper_C_SetSelectedNext final
{
public:
	int32                                         CallFunc_GetSelectedNext_Index;                    // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Stepper_C_SetSelectedNext) == 0x000004, "Wrong alignment on UIW_Stepper_C_SetSelectedNext");
static_assert(sizeof(UIW_Stepper_C_SetSelectedNext) == 0x000004, "Wrong size on UIW_Stepper_C_SetSelectedNext");
static_assert(offsetof(UIW_Stepper_C_SetSelectedNext, CallFunc_GetSelectedNext_Index) == 0x000000, "Member 'UIW_Stepper_C_SetSelectedNext::CallFunc_GetSelectedNext_Index' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.SetOrientation
// 0x0001 (0x0001 - 0x0000)
struct UIW_Stepper_C_SetOrientation final
{
public:
	bool                                          K2Node_SwitchEnum_CmpSuccess;                      // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Stepper_C_SetOrientation) == 0x000001, "Wrong alignment on UIW_Stepper_C_SetOrientation");
static_assert(sizeof(UIW_Stepper_C_SetOrientation) == 0x000001, "Wrong size on UIW_Stepper_C_SetOrientation");
static_assert(offsetof(UIW_Stepper_C_SetOrientation, K2Node_SwitchEnum_CmpSuccess) == 0x000000, "Member 'UIW_Stepper_C_SetOrientation::K2Node_SwitchEnum_CmpSuccess' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.SetList
// 0x0010 (0x0010 - 0x0000)
struct UIW_Stepper_C_SetList final
{
public:
	TArray<class FText>                           List;                                              // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};
static_assert(alignof(UIW_Stepper_C_SetList) == 0x000008, "Wrong alignment on UIW_Stepper_C_SetList");
static_assert(sizeof(UIW_Stepper_C_SetList) == 0x000010, "Wrong size on UIW_Stepper_C_SetList");
static_assert(offsetof(UIW_Stepper_C_SetList, List) == 0x000000, "Member 'UIW_Stepper_C_SetList::List' has a wrong offset!");

// Function UIW_Stepper.UIW_Stepper_C.ReturnSelectedIndex
// 0x0004 (0x0004 - 0x0000)
struct UIW_Stepper_C_ReturnSelectedIndex final
{
public:
	int32                                         Index_0;                                           // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Stepper_C_ReturnSelectedIndex) == 0x000004, "Wrong alignment on UIW_Stepper_C_ReturnSelectedIndex");
static_assert(sizeof(UIW_Stepper_C_ReturnSelectedIndex) == 0x000004, "Wrong size on UIW_Stepper_C_ReturnSelectedIndex");
static_assert(offsetof(UIW_Stepper_C_ReturnSelectedIndex, Index_0) == 0x000000, "Member 'UIW_Stepper_C_ReturnSelectedIndex::Index_0' has a wrong offset!");

}


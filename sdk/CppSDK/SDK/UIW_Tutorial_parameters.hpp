#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Tutorial

#include "Basic.hpp"

#include "UMG_structs.hpp"
#include "SlateCore_structs.hpp"
#include "ProjectPContentInfo_structs.hpp"


namespace SDK::Params
{

// Function UIW_Tutorial.UIW_Tutorial_C.ExecuteUbergraph_UIW_Tutorial
// 0x0024 (0x0024 - 0x0000)
struct UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
};
static_assert(alignof(UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial) == 0x000004, "Wrong alignment on UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial");
static_assert(sizeof(UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial) == 0x000024, "Wrong size on UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial");
static_assert(offsetof(UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial, EntryPoint) == 0x000000, "Member 'UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UIW_Tutorial_C_ExecuteUbergraph_UIW_Tutorial::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.SetCodeName
// 0x0008 (0x0008 - 0x0000)
struct UIW_Tutorial_C_SetCodeName final
{
public:
	class FName                                   CodeName_0;                                        // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Tutorial_C_SetCodeName) == 0x000004, "Wrong alignment on UIW_Tutorial_C_SetCodeName");
static_assert(sizeof(UIW_Tutorial_C_SetCodeName) == 0x000008, "Wrong size on UIW_Tutorial_C_SetCodeName");
static_assert(offsetof(UIW_Tutorial_C_SetCodeName, CodeName_0) == 0x000000, "Member 'UIW_Tutorial_C_SetCodeName::CodeName_0' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.OnReleasePrev
// 0x0020 (0x0020 - 0x0000)
struct UIW_Tutorial_C_OnReleasePrev final
{
public:
	bool                                          CallFunc_IsPlayingAnimation_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationReverse_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Greater_IntInt_ReturnValue;               // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Tutorial_C_OnReleasePrev) == 0x000008, "Wrong alignment on UIW_Tutorial_C_OnReleasePrev");
static_assert(sizeof(UIW_Tutorial_C_OnReleasePrev) == 0x000020, "Wrong size on UIW_Tutorial_C_OnReleasePrev");
static_assert(offsetof(UIW_Tutorial_C_OnReleasePrev, CallFunc_IsPlayingAnimation_ReturnValue) == 0x000000, "Member 'UIW_Tutorial_C_OnReleasePrev::CallFunc_IsPlayingAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleasePrev, CallFunc_PlayAnimationReverse_ReturnValue) == 0x000008, "Member 'UIW_Tutorial_C_OnReleasePrev::CallFunc_PlayAnimationReverse_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleasePrev, Temp_int_Variable) == 0x000010, "Member 'UIW_Tutorial_C_OnReleasePrev::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleasePrev, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'UIW_Tutorial_C_OnReleasePrev::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleasePrev, CallFunc_Greater_IntInt_ReturnValue) == 0x000018, "Member 'UIW_Tutorial_C_OnReleasePrev::CallFunc_Greater_IntInt_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.OnReleaseNext
// 0x0020 (0x0020 - 0x0000)
struct UIW_Tutorial_C_OnReleaseNext final
{
public:
	bool                                          CallFunc_IsPlayingAnimation_ReturnValue;           // 0x0000(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Temp_int_Variable;                                 // 0x0010(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0014(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_IntInt_ReturnValue;                  // 0x0018(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_19[0x3];                                       // 0x0019(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x001C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Tutorial_C_OnReleaseNext) == 0x000008, "Wrong alignment on UIW_Tutorial_C_OnReleaseNext");
static_assert(sizeof(UIW_Tutorial_C_OnReleaseNext) == 0x000020, "Wrong size on UIW_Tutorial_C_OnReleaseNext");
static_assert(offsetof(UIW_Tutorial_C_OnReleaseNext, CallFunc_IsPlayingAnimation_ReturnValue) == 0x000000, "Member 'UIW_Tutorial_C_OnReleaseNext::CallFunc_IsPlayingAnimation_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleaseNext, CallFunc_PlayAnimationForward_ReturnValue) == 0x000008, "Member 'UIW_Tutorial_C_OnReleaseNext::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleaseNext, Temp_int_Variable) == 0x000010, "Member 'UIW_Tutorial_C_OnReleaseNext::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleaseNext, CallFunc_Subtract_IntInt_ReturnValue) == 0x000014, "Member 'UIW_Tutorial_C_OnReleaseNext::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleaseNext, CallFunc_Less_IntInt_ReturnValue) == 0x000018, "Member 'UIW_Tutorial_C_OnReleaseNext::CallFunc_Less_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnReleaseNext, CallFunc_Add_IntInt_ReturnValue) == 0x00001C, "Member 'UIW_Tutorial_C_OnReleaseNext::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.SetPage
// 0x00C8 (0x00C8 - 0x0000)
struct UIW_Tutorial_C_SetPage final
{
public:
	struct FTutorialInfoPtr                       LocalTutorialInfo;                                 // 0x0000(0x0008)(Edit, BlueprintVisible, NoDestructor)
	bool                                          CallFunc_IsLastPage_IsLastPage;                    // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0009(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A[0x6];                                        // 0x000A(0x0006)(Fixing Size After Last Property [ Dumper-7 ])
	class FString                                 CallFunc_Conv_IntToString_ReturnValue;             // 0x0010(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UObject>                 CallFunc_GetImage_ReturnValue;                     // 0x0020(0x0028)(ConstParm, UObjectWrapper, HasGetValueTypeHash)
	class FText                                   CallFunc_GetLocalTextDescriptionLocalize_ReturnValue; // 0x0048(0x0018)()
	class FText                                   CallFunc_GetLocalTextTitleLocalize_ReturnValue;    // 0x0060(0x0018)()
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0078(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0079(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_7A[0x2];                                       // 0x007A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x007C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_IntToString_ReturnValue_1;           // 0x0080(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue;                // 0x0090(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Concat_StrStr_ReturnValue_1;              // 0x00A0(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x00B0(0x0018)()
};
static_assert(alignof(UIW_Tutorial_C_SetPage) == 0x000008, "Wrong alignment on UIW_Tutorial_C_SetPage");
static_assert(sizeof(UIW_Tutorial_C_SetPage) == 0x0000C8, "Wrong size on UIW_Tutorial_C_SetPage");
static_assert(offsetof(UIW_Tutorial_C_SetPage, LocalTutorialInfo) == 0x000000, "Member 'UIW_Tutorial_C_SetPage::LocalTutorialInfo' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_IsLastPage_IsLastPage) == 0x000008, "Member 'UIW_Tutorial_C_SetPage::CallFunc_IsLastPage_IsLastPage' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000009, "Member 'UIW_Tutorial_C_SetPage::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_Conv_IntToString_ReturnValue) == 0x000010, "Member 'UIW_Tutorial_C_SetPage::CallFunc_Conv_IntToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_GetImage_ReturnValue) == 0x000020, "Member 'UIW_Tutorial_C_SetPage::CallFunc_GetImage_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_GetLocalTextDescriptionLocalize_ReturnValue) == 0x000048, "Member 'UIW_Tutorial_C_SetPage::CallFunc_GetLocalTextDescriptionLocalize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_GetLocalTextTitleLocalize_ReturnValue) == 0x000060, "Member 'UIW_Tutorial_C_SetPage::CallFunc_GetLocalTextTitleLocalize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_IsValid_ReturnValue) == 0x000078, "Member 'UIW_Tutorial_C_SetPage::CallFunc_IsValid_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000079, "Member 'UIW_Tutorial_C_SetPage::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_Add_IntInt_ReturnValue) == 0x00007C, "Member 'UIW_Tutorial_C_SetPage::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_Conv_IntToString_ReturnValue_1) == 0x000080, "Member 'UIW_Tutorial_C_SetPage::CallFunc_Conv_IntToString_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_Concat_StrStr_ReturnValue) == 0x000090, "Member 'UIW_Tutorial_C_SetPage::CallFunc_Concat_StrStr_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_Concat_StrStr_ReturnValue_1) == 0x0000A0, "Member 'UIW_Tutorial_C_SetPage::CallFunc_Concat_StrStr_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPage, CallFunc_Conv_StringToText_ReturnValue) == 0x0000B0, "Member 'UIW_Tutorial_C_SetPage::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.PreparePageData
// 0x0028 (0x0028 - 0x0000)
struct UIW_Tutorial_C_PreparePageData final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_LessEqual_IntInt_ReturnValue;             // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x3];                                        // 0x0009(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Add_IntInt_ReturnValue_1;                 // 0x000C(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULTutorialSystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTutorialInfoPtr                       CallFunc_GetTutorialDB_TutorialInfo_ReturnValue;   // 0x0018(0x0008)(NoDestructor)
	int32                                         CallFunc_GetTutorialMaxStep_ReturnValue;           // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         CallFunc_Array_Add_ReturnValue;                    // 0x0024(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Tutorial_C_PreparePageData) == 0x000008, "Wrong alignment on UIW_Tutorial_C_PreparePageData");
static_assert(sizeof(UIW_Tutorial_C_PreparePageData) == 0x000028, "Wrong size on UIW_Tutorial_C_PreparePageData");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, Temp_int_Variable) == 0x000000, "Member 'UIW_Tutorial_C_PreparePageData::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, CallFunc_Add_IntInt_ReturnValue) == 0x000004, "Member 'UIW_Tutorial_C_PreparePageData::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, CallFunc_LessEqual_IntInt_ReturnValue) == 0x000008, "Member 'UIW_Tutorial_C_PreparePageData::CallFunc_LessEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, CallFunc_Add_IntInt_ReturnValue_1) == 0x00000C, "Member 'UIW_Tutorial_C_PreparePageData::CallFunc_Add_IntInt_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000010, "Member 'UIW_Tutorial_C_PreparePageData::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, CallFunc_GetTutorialDB_TutorialInfo_ReturnValue) == 0x000018, "Member 'UIW_Tutorial_C_PreparePageData::CallFunc_GetTutorialDB_TutorialInfo_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, CallFunc_GetTutorialMaxStep_ReturnValue) == 0x000020, "Member 'UIW_Tutorial_C_PreparePageData::CallFunc_GetTutorialMaxStep_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_PreparePageData, CallFunc_Array_Add_ReturnValue) == 0x000024, "Member 'UIW_Tutorial_C_PreparePageData::CallFunc_Array_Add_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.OnMouseWheel
// 0x0220 (0x0220 - 0x0000)
struct UIW_Tutorial_C_OnMouseWheel final
{
public:
	struct FGeometry                              MyGeometry;                                        // 0x0000(0x0038)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                          MouseEvent;                                        // 0x0038(0x0070)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                            ReturnValue;                                       // 0x00A8(0x00B8)(Parm, OutParm, ReturnParm)
	float                                         CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x0160(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_Less_FloatFloat_ReturnValue;              // 0x0164(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_Greater_FloatFloat_ReturnValue;           // 0x0165(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue;                    // 0x0166(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_IsVisible_ReturnValue_1;                  // 0x0167(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FEventReply                            CallFunc_Handled_ReturnValue;                      // 0x0168(0x00B8)()
};
static_assert(alignof(UIW_Tutorial_C_OnMouseWheel) == 0x000008, "Wrong alignment on UIW_Tutorial_C_OnMouseWheel");
static_assert(sizeof(UIW_Tutorial_C_OnMouseWheel) == 0x000220, "Wrong size on UIW_Tutorial_C_OnMouseWheel");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, MyGeometry) == 0x000000, "Member 'UIW_Tutorial_C_OnMouseWheel::MyGeometry' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, MouseEvent) == 0x000038, "Member 'UIW_Tutorial_C_OnMouseWheel::MouseEvent' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, ReturnValue) == 0x0000A8, "Member 'UIW_Tutorial_C_OnMouseWheel::ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, CallFunc_PointerEvent_GetWheelDelta_ReturnValue) == 0x000160, "Member 'UIW_Tutorial_C_OnMouseWheel::CallFunc_PointerEvent_GetWheelDelta_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, CallFunc_Less_FloatFloat_ReturnValue) == 0x000164, "Member 'UIW_Tutorial_C_OnMouseWheel::CallFunc_Less_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, CallFunc_Greater_FloatFloat_ReturnValue) == 0x000165, "Member 'UIW_Tutorial_C_OnMouseWheel::CallFunc_Greater_FloatFloat_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, CallFunc_IsVisible_ReturnValue) == 0x000166, "Member 'UIW_Tutorial_C_OnMouseWheel::CallFunc_IsVisible_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, CallFunc_IsVisible_ReturnValue_1) == 0x000167, "Member 'UIW_Tutorial_C_OnMouseWheel::CallFunc_IsVisible_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_OnMouseWheel, CallFunc_Handled_ReturnValue) == 0x000168, "Member 'UIW_Tutorial_C_OnMouseWheel::CallFunc_Handled_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.IsLastPage
// 0x000C (0x000C - 0x0000)
struct UIW_Tutorial_C_IsLastPage final
{
public:
	bool                                          IsLastPage_0;                                      // 0x0000(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_1[0x3];                                        // 0x0001(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         CallFunc_Subtract_IntInt_ReturnValue;              // 0x0004(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Tutorial_C_IsLastPage) == 0x000004, "Wrong alignment on UIW_Tutorial_C_IsLastPage");
static_assert(sizeof(UIW_Tutorial_C_IsLastPage) == 0x00000C, "Wrong size on UIW_Tutorial_C_IsLastPage");
static_assert(offsetof(UIW_Tutorial_C_IsLastPage, IsLastPage_0) == 0x000000, "Member 'UIW_Tutorial_C_IsLastPage::IsLastPage_0' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_IsLastPage, CallFunc_Subtract_IntInt_ReturnValue) == 0x000004, "Member 'UIW_Tutorial_C_IsLastPage::CallFunc_Subtract_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_IsLastPage, CallFunc_EqualEqual_IntInt_ReturnValue) == 0x000008, "Member 'UIW_Tutorial_C_IsLastPage::CallFunc_EqualEqual_IntInt_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.SetPrevBtnVisibility
// 0x0002 (0x0002 - 0x0000)
struct UIW_Tutorial_C_SetPrevBtnVisibility final
{
public:
	ESlateVisibility                              NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Tutorial_C_SetPrevBtnVisibility) == 0x000001, "Wrong alignment on UIW_Tutorial_C_SetPrevBtnVisibility");
static_assert(sizeof(UIW_Tutorial_C_SetPrevBtnVisibility) == 0x000002, "Wrong size on UIW_Tutorial_C_SetPrevBtnVisibility");
static_assert(offsetof(UIW_Tutorial_C_SetPrevBtnVisibility, NewParam) == 0x000000, "Member 'UIW_Tutorial_C_SetPrevBtnVisibility::NewParam' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetPrevBtnVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'UIW_Tutorial_C_SetPrevBtnVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.SetNextBtnVisibility
// 0x0002 (0x0002 - 0x0000)
struct UIW_Tutorial_C_SetNextBtnVisibility final
{
public:
	ESlateVisibility                              NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Tutorial_C_SetNextBtnVisibility) == 0x000001, "Wrong alignment on UIW_Tutorial_C_SetNextBtnVisibility");
static_assert(sizeof(UIW_Tutorial_C_SetNextBtnVisibility) == 0x000002, "Wrong size on UIW_Tutorial_C_SetNextBtnVisibility");
static_assert(offsetof(UIW_Tutorial_C_SetNextBtnVisibility, NewParam) == 0x000000, "Member 'UIW_Tutorial_C_SetNextBtnVisibility::NewParam' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetNextBtnVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'UIW_Tutorial_C_SetNextBtnVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

// Function UIW_Tutorial.UIW_Tutorial_C.SetCloseBtnVisibility
// 0x0002 (0x0002 - 0x0000)
struct UIW_Tutorial_C_SetCloseBtnVisibility final
{
public:
	ESlateVisibility                              NewParam;                                          // 0x0000(0x0001)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsValid_ReturnValue;                      // 0x0001(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(UIW_Tutorial_C_SetCloseBtnVisibility) == 0x000001, "Wrong alignment on UIW_Tutorial_C_SetCloseBtnVisibility");
static_assert(sizeof(UIW_Tutorial_C_SetCloseBtnVisibility) == 0x000002, "Wrong size on UIW_Tutorial_C_SetCloseBtnVisibility");
static_assert(offsetof(UIW_Tutorial_C_SetCloseBtnVisibility, NewParam) == 0x000000, "Member 'UIW_Tutorial_C_SetCloseBtnVisibility::NewParam' has a wrong offset!");
static_assert(offsetof(UIW_Tutorial_C_SetCloseBtnVisibility, CallFunc_IsValid_ReturnValue) == 0x000001, "Member 'UIW_Tutorial_C_SetCloseBtnVisibility::CallFunc_IsValid_ReturnValue' has a wrong offset!");

}

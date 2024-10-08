#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIW_Alert_Location

#include "Basic.hpp"

#include "ProjectPContentInfo_structs.hpp"
#include "Engine_structs.hpp"


namespace SDK::Params
{

// Function UIW_Alert_Location.UIW_Alert_Location_C.ExecuteUbergraph_UIW_Alert_Location
// 0x0030 (0x0030 - 0x0000)
struct UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location final
{
public:
	int32                                         EntryPoint;                                        // 0x0000(0x0004)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TDelegate<void()>                             K2Node_CreateDelegate_OutputDelegate;              // 0x0004(0x0010)(ZeroConstructor, NoDestructor)
	TDelegate<void(class FName NameData)>         K2Node_CreateDelegate_OutputDelegate_1;            // 0x0014(0x0010)(ZeroConstructor, NoDestructor)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class ULEventDispatcherSystem*                CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0028(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location) == 0x000008, "Wrong alignment on UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location");
static_assert(sizeof(UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location) == 0x000030, "Wrong size on UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location");
static_assert(offsetof(UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location, EntryPoint) == 0x000000, "Member 'UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location::EntryPoint' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location, K2Node_CreateDelegate_OutputDelegate) == 0x000004, "Member 'UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location::K2Node_CreateDelegate_OutputDelegate' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location, K2Node_CreateDelegate_OutputDelegate_1) == 0x000014, "Member 'UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location::K2Node_CreateDelegate_OutputDelegate_1' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000028, "Member 'UIW_Alert_Location_C_ExecuteUbergraph_UIW_Alert_Location::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");

// Function UIW_Alert_Location.UIW_Alert_Location_C.OnShowEvent
// 0x0018 (0x0018 - 0x0000)
struct UIW_Alert_Location_C_OnShowEvent final
{
public:
	class FName                                   NameData;                                          // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_NotEqual_NameName_ReturnValue;            // 0x0008(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_9[0x7];                                        // 0x0009(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTimerHandle                           CallFunc_K2_SetTimer_ReturnValue;                  // 0x0010(0x0008)(NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Alert_Location_C_OnShowEvent) == 0x000008, "Wrong alignment on UIW_Alert_Location_C_OnShowEvent");
static_assert(sizeof(UIW_Alert_Location_C_OnShowEvent) == 0x000018, "Wrong size on UIW_Alert_Location_C_OnShowEvent");
static_assert(offsetof(UIW_Alert_Location_C_OnShowEvent, NameData) == 0x000000, "Member 'UIW_Alert_Location_C_OnShowEvent::NameData' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_OnShowEvent, CallFunc_NotEqual_NameName_ReturnValue) == 0x000008, "Member 'UIW_Alert_Location_C_OnShowEvent::CallFunc_NotEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_OnShowEvent, CallFunc_K2_SetTimer_ReturnValue) == 0x000010, "Member 'UIW_Alert_Location_C_OnShowEvent::CallFunc_K2_SetTimer_ReturnValue' has a wrong offset!");

// Function UIW_Alert_Location.UIW_Alert_Location_C.Show
// 0x0068 (0x0068 - 0x0000)
struct UIW_Alert_Location_C_Show final
{
public:
	int32                                         Temp_int_Variable;                                 // 0x0000(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x0004(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          CallFunc_EqualEqual_NameName_ReturnValue;          // 0x0005(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6[0x2];                                        // 0x0006(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	class ULGameDataSystem*                       CallFunc_GetGameInstanceSubsystem_ReturnValue;     // 0x0008(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                   CallFunc_GetWeatherCodeName_ReturnValue;           // 0x0010(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FWeatherInfoPtr                        CallFunc_FindWeatherInfoByNameBP_ReturnValue;      // 0x0018(0x0008)(NoDestructor)
	int32                                         CallFunc_Add_IntInt_ReturnValue;                   // 0x0020(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_24[0x4];                                       // 0x0024(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_GetLocalTextNameLocalize_ReturnValue;     // 0x0028(0x0018)()
	struct FLocationInfoPtr                       CallFunc_FindLocationInfoByNameBP_ReturnValue;     // 0x0040(0x0008)(NoDestructor)
	class FText                                   CallFunc_GetLocalTextNameLocalize_ReturnValue_1;   // 0x0048(0x0018)()
	class UUMGSequencePlayer*                     CallFunc_PlayAnimationForward_ReturnValue;         // 0x0060(0x0008)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(UIW_Alert_Location_C_Show) == 0x000008, "Wrong alignment on UIW_Alert_Location_C_Show");
static_assert(sizeof(UIW_Alert_Location_C_Show) == 0x000068, "Wrong size on UIW_Alert_Location_C_Show");
static_assert(offsetof(UIW_Alert_Location_C_Show, Temp_int_Variable) == 0x000000, "Member 'UIW_Alert_Location_C_Show::Temp_int_Variable' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_GreaterEqual_IntInt_ReturnValue) == 0x000004, "Member 'UIW_Alert_Location_C_Show::CallFunc_GreaterEqual_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_EqualEqual_NameName_ReturnValue) == 0x000005, "Member 'UIW_Alert_Location_C_Show::CallFunc_EqualEqual_NameName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_GetGameInstanceSubsystem_ReturnValue) == 0x000008, "Member 'UIW_Alert_Location_C_Show::CallFunc_GetGameInstanceSubsystem_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_GetWeatherCodeName_ReturnValue) == 0x000010, "Member 'UIW_Alert_Location_C_Show::CallFunc_GetWeatherCodeName_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_FindWeatherInfoByNameBP_ReturnValue) == 0x000018, "Member 'UIW_Alert_Location_C_Show::CallFunc_FindWeatherInfoByNameBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_Add_IntInt_ReturnValue) == 0x000020, "Member 'UIW_Alert_Location_C_Show::CallFunc_Add_IntInt_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_GetLocalTextNameLocalize_ReturnValue) == 0x000028, "Member 'UIW_Alert_Location_C_Show::CallFunc_GetLocalTextNameLocalize_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_FindLocationInfoByNameBP_ReturnValue) == 0x000040, "Member 'UIW_Alert_Location_C_Show::CallFunc_FindLocationInfoByNameBP_ReturnValue' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_GetLocalTextNameLocalize_ReturnValue_1) == 0x000048, "Member 'UIW_Alert_Location_C_Show::CallFunc_GetLocalTextNameLocalize_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(UIW_Alert_Location_C_Show, CallFunc_PlayAnimationForward_ReturnValue) == 0x000060, "Member 'UIW_Alert_Location_C_Show::CallFunc_PlayAnimationForward_ReturnValue' has a wrong offset!");

}


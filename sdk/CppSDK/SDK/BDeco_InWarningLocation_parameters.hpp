#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BDeco_InWarningLocation

#include "Basic.hpp"

#include "Engine_structs.hpp"
#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function BDeco_InWarningLocation.BDeco_InWarningLocation_C.PerformConditionCheckAI
// 0x0140 (0x0140 - 0x0000)
struct BDeco_InWarningLocation_C_PerformConditionCheckAI final
{
public:
	class AAIController*                          OwnerController;                                   // 0x0000(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                  ControlledPawn;                                    // 0x0008(0x0008)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReturnValue;                                       // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	uint8                                         Pad_11[0x3];                                       // 0x0011(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetWarningLocation_ReturnValue;           // 0x0014(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CallFunc_IsWarningExist_ReturnValue;               // 0x0020(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_21[0x3];                                       // 0x0021(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	struct FVector                                CallFunc_GetWarningLocation_ReturnValue_1;         // 0x0024(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CallFunc_Conv_VectorToString_ReturnValue;          // 0x0030(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0040(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_4C[0x4];                                       // 0x004C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Conv_StringToText_ReturnValue;            // 0x0050(0x0018)()
	float                                         CallFunc_Vector_Distance_ReturnValue;              // 0x0068(0x0004)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_6C[0x4];                                       // 0x006C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData;              // 0x0070(0x0040)(HasGetValueTypeHash)
	struct FFormatArgumentData                    K2Node_MakeStruct_FormatArgumentData_1;            // 0x00B0(0x0040)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>            K2Node_MakeArray_Array;                            // 0x00F0(0x0010)(ReferenceParm)
	struct FVector                                CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x0100(0x000C)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_10C[0x4];                                      // 0x010C(0x0004)(Fixing Size After Last Property [ Dumper-7 ])
	class FText                                   CallFunc_Format_ReturnValue;                       // 0x0110(0x0018)()
	class FString                                 CallFunc_Conv_TextToString_ReturnValue;            // 0x0128(0x0010)(ZeroConstructor, HasGetValueTypeHash)
	bool                                          CallFunc_CheckInsideDistance2DAndHeight_ReturnValue; // 0x0138(0x0001)(ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BDeco_InWarningLocation_C_PerformConditionCheckAI) == 0x000008, "Wrong alignment on BDeco_InWarningLocation_C_PerformConditionCheckAI");
static_assert(sizeof(BDeco_InWarningLocation_C_PerformConditionCheckAI) == 0x000140, "Wrong size on BDeco_InWarningLocation_C_PerformConditionCheckAI");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, OwnerController) == 0x000000, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::OwnerController' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, ControlledPawn) == 0x000008, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::ControlledPawn' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, ReturnValue) == 0x000010, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_GetWarningLocation_ReturnValue) == 0x000014, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_GetWarningLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_IsWarningExist_ReturnValue) == 0x000020, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_IsWarningExist_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_GetWarningLocation_ReturnValue_1) == 0x000024, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_GetWarningLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_Conv_VectorToString_ReturnValue) == 0x000030, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_Conv_VectorToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue) == 0x000040, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_Conv_StringToText_ReturnValue) == 0x000050, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_Conv_StringToText_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_Vector_Distance_ReturnValue) == 0x000068, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_Vector_Distance_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, K2Node_MakeStruct_FormatArgumentData) == 0x000070, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::K2Node_MakeStruct_FormatArgumentData' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, K2Node_MakeStruct_FormatArgumentData_1) == 0x0000B0, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::K2Node_MakeStruct_FormatArgumentData_1' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, K2Node_MakeArray_Array) == 0x0000F0, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::K2Node_MakeArray_Array' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_K2_GetActorLocation_ReturnValue_1) == 0x000100, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_K2_GetActorLocation_ReturnValue_1' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_Format_ReturnValue) == 0x000110, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_Format_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_Conv_TextToString_ReturnValue) == 0x000128, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_Conv_TextToString_ReturnValue' has a wrong offset!");
static_assert(offsetof(BDeco_InWarningLocation_C_PerformConditionCheckAI, CallFunc_CheckInsideDistance2DAndHeight_ReturnValue) == 0x000138, "Member 'BDeco_InWarningLocation_C_PerformConditionCheckAI::CallFunc_CheckInsideDistance2DAndHeight_ReturnValue' has a wrong offset!");

}

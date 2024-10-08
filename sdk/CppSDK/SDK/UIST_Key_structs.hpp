#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: UIST_Key

#include "Basic.hpp"

#include "UIEN_InputAction_structs.hpp"
#include "Engine_structs.hpp"
#include "UIEN_Controller_structs.hpp"


namespace SDK
{

// UserDefinedStruct UIST_Key.UIST_Key
// 0x0028 (0x0028 - 0x0000)
struct FUIST_Key final
{
public:
	EUIEN_InputAction                             ActionName_12_1BE00EA44DDB4213924F96820B80815F;    // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_1[0x7];                                        // 0x0001(0x0007)(Fixing Size After Last Property [ Dumper-7 ])
	struct FDataTableRowHandle                    HoldTime_10_110AFE4240933CA97B4BB195B5E6EE17;      // 0x0008(0x0010)(Edit, BlueprintVisible, NoDestructor)
	class FName                                   Label_16_C3A5830549E2F7BF0E2FD69140774111;         // 0x0018(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EUIEN_Controller                              VisibleType_15_BA099FE34F361C087940D090794DE86B;   // 0x0020(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FUIST_Key) == 0x000008, "Wrong alignment on FUIST_Key");
static_assert(sizeof(FUIST_Key) == 0x000028, "Wrong size on FUIST_Key");
static_assert(offsetof(FUIST_Key, ActionName_12_1BE00EA44DDB4213924F96820B80815F) == 0x000000, "Member 'FUIST_Key::ActionName_12_1BE00EA44DDB4213924F96820B80815F' has a wrong offset!");
static_assert(offsetof(FUIST_Key, HoldTime_10_110AFE4240933CA97B4BB195B5E6EE17) == 0x000008, "Member 'FUIST_Key::HoldTime_10_110AFE4240933CA97B4BB195B5E6EE17' has a wrong offset!");
static_assert(offsetof(FUIST_Key, Label_16_C3A5830549E2F7BF0E2FD69140774111) == 0x000018, "Member 'FUIST_Key::Label_16_C3A5830549E2F7BF0E2FD69140774111' has a wrong offset!");
static_assert(offsetof(FUIST_Key, VisibleType_15_BA099FE34F361C087940D090794DE86B) == 0x000020, "Member 'FUIST_Key::VisibleType_15_BA099FE34F361C087940D090794DE86B' has a wrong offset!");

}


#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BS_FootstepRequred

#include "Basic.hpp"

#include "BE_FootstepRequired_structs.hpp"
#include "FunctionalTesting_structs.hpp"


namespace SDK
{

// UserDefinedStruct BS_FootstepRequred.BS_FootstepRequred
// 0x0008 (0x0008 - 0x0000)
struct FBS_FootstepRequred final
{
public:
	EBE_FootstepRequired                          Parameter_3_E88F73B4435FDBE5AABD159337B9BE2D;      // 0x0000(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	EComparisonMethod                             Comparsion_9_82390B5F43E845C491870CBC0BE80B98;     // 0x0001(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_2[0x2];                                        // 0x0002(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Value_6_683219F5407891CF29E30F89457877DC;          // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};
static_assert(alignof(FBS_FootstepRequred) == 0x000004, "Wrong alignment on FBS_FootstepRequred");
static_assert(sizeof(FBS_FootstepRequred) == 0x000008, "Wrong size on FBS_FootstepRequred");
static_assert(offsetof(FBS_FootstepRequred, Parameter_3_E88F73B4435FDBE5AABD159337B9BE2D) == 0x000000, "Member 'FBS_FootstepRequred::Parameter_3_E88F73B4435FDBE5AABD159337B9BE2D' has a wrong offset!");
static_assert(offsetof(FBS_FootstepRequred, Comparsion_9_82390B5F43E845C491870CBC0BE80B98) == 0x000001, "Member 'FBS_FootstepRequred::Comparsion_9_82390B5F43E845C491870CBC0BE80B98' has a wrong offset!");
static_assert(offsetof(FBS_FootstepRequred, Value_6_683219F5407891CF29E30F89457877DC) == 0x000004, "Member 'FBS_FootstepRequred::Value_6_683219F5407891CF29E30F89457877DC' has a wrong offset!");

}

#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: BPI_DisplacementShape

#include "Basic.hpp"

#include "BS_DisplacementShape_structs.hpp"


namespace SDK::Params
{

// Function BPI_DisplacementShape.BPI_DisplacementShape_C.AddDisplacementShapeData
// 0x0018 (0x0018 - 0x0000)
struct BPI_DisplacementShape_C_AddDisplacementShapeData final
{
public:
	TArray<struct FBS_DisplacementShape>          Stack;                                             // 0x0000(0x0010)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                          Added;                                             // 0x0010(0x0001)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(BPI_DisplacementShape_C_AddDisplacementShapeData) == 0x000008, "Wrong alignment on BPI_DisplacementShape_C_AddDisplacementShapeData");
static_assert(sizeof(BPI_DisplacementShape_C_AddDisplacementShapeData) == 0x000018, "Wrong size on BPI_DisplacementShape_C_AddDisplacementShapeData");
static_assert(offsetof(BPI_DisplacementShape_C_AddDisplacementShapeData, Stack) == 0x000000, "Member 'BPI_DisplacementShape_C_AddDisplacementShapeData::Stack' has a wrong offset!");
static_assert(offsetof(BPI_DisplacementShape_C_AddDisplacementShapeData, Added) == 0x000010, "Member 'BPI_DisplacementShape_C_AddDisplacementShapeData::Added' has a wrong offset!");

}

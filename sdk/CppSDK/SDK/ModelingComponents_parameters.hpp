#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: ModelingComponents

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK::Params
{

// Function ModelingComponents.PreviewGeometry.AddLineSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_AddLineSet final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULineSetComponent*                      ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_AddLineSet) == 0x000008, "Wrong alignment on PreviewGeometry_AddLineSet");
static_assert(sizeof(PreviewGeometry_AddLineSet) == 0x000018, "Wrong size on PreviewGeometry_AddLineSet");
static_assert(offsetof(PreviewGeometry_AddLineSet, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_AddLineSet::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_AddLineSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_AddLineSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.CreateInWorld
// 0x0040 (0x0040 - 0x0000)
struct PreviewGeometry_CreateInWorld final
{
public:
	class UWorld*                                 World;                                             // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_8[0x8];                                        // 0x0008(0x0008)(Fixing Size After Last Property [ Dumper-7 ])
	struct FTransform                             WithTransform;                                     // 0x0010(0x0030)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_CreateInWorld) == 0x000010, "Wrong alignment on PreviewGeometry_CreateInWorld");
static_assert(sizeof(PreviewGeometry_CreateInWorld) == 0x000040, "Wrong size on PreviewGeometry_CreateInWorld");
static_assert(offsetof(PreviewGeometry_CreateInWorld, World) == 0x000000, "Member 'PreviewGeometry_CreateInWorld::World' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_CreateInWorld, WithTransform) == 0x000010, "Member 'PreviewGeometry_CreateInWorld::WithTransform' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.FindLineSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_FindLineSet final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULineSetComponent*                      ReturnValue;                                       // 0x0010(0x0008)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_FindLineSet) == 0x000008, "Wrong alignment on PreviewGeometry_FindLineSet");
static_assert(sizeof(PreviewGeometry_FindLineSet) == 0x000018, "Wrong size on PreviewGeometry_FindLineSet");
static_assert(offsetof(PreviewGeometry_FindLineSet, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_FindLineSet::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_FindLineSet, ReturnValue) == 0x000010, "Member 'PreviewGeometry_FindLineSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.RemoveAllLineSets
// 0x0001 (0x0001 - 0x0000)
struct PreviewGeometry_RemoveAllLineSets final
{
public:
	bool                                          bDestroy;                                          // 0x0000(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_RemoveAllLineSets) == 0x000001, "Wrong alignment on PreviewGeometry_RemoveAllLineSets");
static_assert(sizeof(PreviewGeometry_RemoveAllLineSets) == 0x000001, "Wrong size on PreviewGeometry_RemoveAllLineSets");
static_assert(offsetof(PreviewGeometry_RemoveAllLineSets, bDestroy) == 0x000000, "Member 'PreviewGeometry_RemoveAllLineSets::bDestroy' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.RemoveLineSet
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_RemoveLineSet final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bDestroy;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_RemoveLineSet) == 0x000008, "Wrong alignment on PreviewGeometry_RemoveLineSet");
static_assert(sizeof(PreviewGeometry_RemoveLineSet) == 0x000018, "Wrong size on PreviewGeometry_RemoveLineSet");
static_assert(offsetof(PreviewGeometry_RemoveLineSet, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_RemoveLineSet::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_RemoveLineSet, bDestroy) == 0x000010, "Member 'PreviewGeometry_RemoveLineSet::bDestroy' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_RemoveLineSet, ReturnValue) == 0x000011, "Member 'PreviewGeometry_RemoveLineSet::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetAllLineSetsMaterial
// 0x0008 (0x0008 - 0x0000)
struct PreviewGeometry_SetAllLineSetsMaterial final
{
public:
	class UMaterialInterface*                     Material;                                          // 0x0000(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_SetAllLineSetsMaterial) == 0x000008, "Wrong alignment on PreviewGeometry_SetAllLineSetsMaterial");
static_assert(sizeof(PreviewGeometry_SetAllLineSetsMaterial) == 0x000008, "Wrong size on PreviewGeometry_SetAllLineSetsMaterial");
static_assert(offsetof(PreviewGeometry_SetAllLineSetsMaterial, Material) == 0x000000, "Member 'PreviewGeometry_SetAllLineSetsMaterial::Material' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetLineSetMaterial
// 0x0020 (0x0020 - 0x0000)
struct PreviewGeometry_SetLineSetMaterial final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInterface*                     NewMaterial;                                       // 0x0010(0x0008)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0018(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_19[0x7];                                       // 0x0019(0x0007)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_SetLineSetMaterial) == 0x000008, "Wrong alignment on PreviewGeometry_SetLineSetMaterial");
static_assert(sizeof(PreviewGeometry_SetLineSetMaterial) == 0x000020, "Wrong size on PreviewGeometry_SetLineSetMaterial");
static_assert(offsetof(PreviewGeometry_SetLineSetMaterial, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_SetLineSetMaterial::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetMaterial, NewMaterial) == 0x000010, "Member 'PreviewGeometry_SetLineSetMaterial::NewMaterial' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetMaterial, ReturnValue) == 0x000018, "Member 'PreviewGeometry_SetLineSetMaterial::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.SetLineSetVisibility
// 0x0018 (0x0018 - 0x0000)
struct PreviewGeometry_SetLineSetVisibility final
{
public:
	class FString                                 LineSetIdentifier;                                 // 0x0000(0x0010)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          bVisible;                                          // 0x0010(0x0001)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                          ReturnValue;                                       // 0x0011(0x0001)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                         Pad_12[0x6];                                       // 0x0012(0x0006)(Fixing Struct Size After Last Property [ Dumper-7 ])
};
static_assert(alignof(PreviewGeometry_SetLineSetVisibility) == 0x000008, "Wrong alignment on PreviewGeometry_SetLineSetVisibility");
static_assert(sizeof(PreviewGeometry_SetLineSetVisibility) == 0x000018, "Wrong size on PreviewGeometry_SetLineSetVisibility");
static_assert(offsetof(PreviewGeometry_SetLineSetVisibility, LineSetIdentifier) == 0x000000, "Member 'PreviewGeometry_SetLineSetVisibility::LineSetIdentifier' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetVisibility, bVisible) == 0x000010, "Member 'PreviewGeometry_SetLineSetVisibility::bVisible' has a wrong offset!");
static_assert(offsetof(PreviewGeometry_SetLineSetVisibility, ReturnValue) == 0x000011, "Member 'PreviewGeometry_SetLineSetVisibility::ReturnValue' has a wrong offset!");

// Function ModelingComponents.PreviewGeometry.GetActor
// 0x0008 (0x0008 - 0x0000)
struct PreviewGeometry_GetActor final
{
public:
	class APreviewGeometryActor*                  ReturnValue;                                       // 0x0000(0x0008)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(PreviewGeometry_GetActor) == 0x000008, "Wrong alignment on PreviewGeometry_GetActor");
static_assert(sizeof(PreviewGeometry_GetActor) == 0x000008, "Wrong size on PreviewGeometry_GetActor");
static_assert(offsetof(PreviewGeometry_GetActor, ReturnValue) == 0x000000, "Member 'PreviewGeometry_GetActor::ReturnValue' has a wrong offset!");

// Function ModelingComponents.WeightMapSetProperties.GetWeightMapsFunc
// 0x0010 (0x0010 - 0x0000)
struct WeightMapSetProperties_GetWeightMapsFunc final
{
public:
	TArray<class FString>                         ReturnValue;                                       // 0x0000(0x0010)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};
static_assert(alignof(WeightMapSetProperties_GetWeightMapsFunc) == 0x000008, "Wrong alignment on WeightMapSetProperties_GetWeightMapsFunc");
static_assert(sizeof(WeightMapSetProperties_GetWeightMapsFunc) == 0x000010, "Wrong size on WeightMapSetProperties_GetWeightMapsFunc");
static_assert(offsetof(WeightMapSetProperties_GetWeightMapsFunc, ReturnValue) == 0x000000, "Member 'WeightMapSetProperties_GetWeightMapsFunc::ReturnValue' has a wrong offset!");

}

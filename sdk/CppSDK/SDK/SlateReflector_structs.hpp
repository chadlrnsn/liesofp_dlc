#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: SlateReflector

#include "Basic.hpp"

#include "CoreUObject_structs.hpp"


namespace SDK
{

// ScriptStruct SlateReflector.WidgetSnapshotResponse
// 0x0020 (0x0020 - 0x0000)
struct FWidgetSnapshotResponse final
{
public:
	struct FGuid                                  SnapshotRequestId;                                 // 0x0000(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                 SnapshotData;                                      // 0x0010(0x0010)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWidgetSnapshotResponse) == 0x000008, "Wrong alignment on FWidgetSnapshotResponse");
static_assert(sizeof(FWidgetSnapshotResponse) == 0x000020, "Wrong size on FWidgetSnapshotResponse");
static_assert(offsetof(FWidgetSnapshotResponse, SnapshotRequestId) == 0x000000, "Member 'FWidgetSnapshotResponse::SnapshotRequestId' has a wrong offset!");
static_assert(offsetof(FWidgetSnapshotResponse, SnapshotData) == 0x000010, "Member 'FWidgetSnapshotResponse::SnapshotData' has a wrong offset!");

// ScriptStruct SlateReflector.WidgetSnapshotRequest
// 0x0020 (0x0020 - 0x0000)
struct FWidgetSnapshotRequest final
{
public:
	struct FGuid                                  TargetInstanceId;                                  // 0x0000(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                  SnapshotRequestId;                                 // 0x0010(0x0010)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
static_assert(alignof(FWidgetSnapshotRequest) == 0x000004, "Wrong alignment on FWidgetSnapshotRequest");
static_assert(sizeof(FWidgetSnapshotRequest) == 0x000020, "Wrong size on FWidgetSnapshotRequest");
static_assert(offsetof(FWidgetSnapshotRequest, TargetInstanceId) == 0x000000, "Member 'FWidgetSnapshotRequest::TargetInstanceId' has a wrong offset!");
static_assert(offsetof(FWidgetSnapshotRequest, SnapshotRequestId) == 0x000010, "Member 'FWidgetSnapshotRequest::SnapshotRequestId' has a wrong offset!");

}

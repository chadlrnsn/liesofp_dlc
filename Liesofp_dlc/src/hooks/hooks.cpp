#include "stdafx.h"
#include "hooks.h"
#include <globals.h>
#include <minhook/include/MinHook.h>
#include <utils/utils.h>

using ProcessEvent = void(__thiscall*)(UObject*, UFunction*, void*);
//std::unique_ptr<ProcessEvent> oProcessEvent = nullptr;
ProcessEvent oProcessEvent;

using PostRender = void(__thiscall*)(UGameViewportClient*, UCanvas*);
//std::unique_ptr<PostRender> oPostRender = nullptr;
PostRender oPostRender;

void __fastcall hkProcessEvent(UObject* caller, UFunction* function, void* params) {
	LOG_DEBUG("%s %s\n", caller->GetFullName().c_str(), function->GetFullName().c_str());
	oProcessEvent(caller, function, params);
}

void ProcessEventHook()
{
	void* ProcessEventAddr = reinterpret_cast<void*>(InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent);
	LOG_DEBUG("ProcessEvent address: %llx\n", ProcessEventAddr);


	while (!globals::g_break) {
		std::this_thread::sleep_for(std::chrono::milliseconds(100));

		if (ProcessEventAddr == nullptr)
			continue;

		if ((InSDKUtils::GetImageBase() + SDK::Offsets::ProcessEvent) <= InSDKUtils::GetImageBase()) {
			LOG_ERROR("Invalid ProcessEvent address\n");
			break;
		}

		LOG_INFO("Trying to hook ProcessEvent at %llx\n", ProcessEventAddr);

		MH_STATUS status = MH_CreateHook(ProcessEventAddr, &hkProcessEvent, reinterpret_cast<LPVOID*>(&oProcessEvent));
		if (status != MH_OK) {
			LOG_ERROR("Failed to create hook: %s\n", MH_StatusToString(status));

			std::this_thread::sleep_for(std::chrono::seconds(1));
			continue;
		}

		status = MH_EnableHook(ProcessEventAddr);
		if (status != MH_OK) {
			LOG_ERROR("Failed to enable hook: %s\n", MH_StatusToString(status));
			std::this_thread::sleep_for(std::chrono::seconds(1));
			continue;
		}

		LOG_INFO("ProcessEvent hook created and enabled successfully\n");
		break;
	}
}


void __fastcall hkPostRender(UGameViewportClient* viewport, UCanvas* canvas)
{
	auto engine = UEngine::GetEngine();
	if (!engine)
		return oPostRender(viewport, canvas);

	if (canvas) {
		ue4::UE_RenderText(canvas, engine->SmallFont, L"инс", {10, 10}, {1,1}, FLinearColor(1, 1, 1, 1));
	}

	oPostRender(viewport, canvas);
}


void PostRenderHook()
{
	while (!globals::g_break) {
		std::this_thread::sleep_for(std::chrono::milliseconds(100));

		UEngine* Engine = UEngine::GetEngine();
		if (!Engine) {
			LOG_ERROR("Failed to get Engine instance\n");
			continue;
		}

		UGameViewportClient* Viewport = Engine->GameViewport;
		if (!Viewport) {
			LOG_ERROR("Failed to get GameViewport\n");
			continue;
		}

		LOG_INFO("GameViewport found: %llx\n", (uintptr_t)Viewport);

		void** VTable = *reinterpret_cast<void***>(Viewport);
		const size_t PostRenderIndex = 105;
		void* PostRenderAddress = VTable[PostRenderIndex];

		MH_STATUS status = MH_CreateHook(PostRenderAddress, &hkPostRender, reinterpret_cast<LPVOID*>(&oPostRender));
		if (status != MH_OK) {
			printf("Failed to create hook PostRender: %s\n", MH_StatusToString(status));
			Sleep(1000);
			continue;
		}

		status = MH_EnableHook(PostRenderAddress);
		if (status != MH_OK) {
			printf("Failed to enable hook PostRender: %s\n", MH_StatusToString(status));
			Sleep(1000);
			continue;
		}

		printf("PostRender hooked successfully: %llx\n", (uintptr_t)PostRenderAddress);
		return;
	}
}

bool hooks::init()
{
	MH_Initialize();
	ProcessEventHook();
	return true;
}

bool hooks::unhook()
{
	MH_DisableHook(MH_ALL_HOOKS);
	MH_RemoveHook(MH_ALL_HOOKS);
	MH_Uninitialize();
	return false;
}

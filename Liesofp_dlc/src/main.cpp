#include <stdafx.h>
#include <globals.h>
#include <dlcs/Includes.h>
#include <utils/utils.h>
#include <ConsoleHandler.h>

using namespace SDK;
using namespace globals;
FILE* f;


bool alloccoonsole();
void HandleKey();
DWORD WINAPI MainThread(HMODULE hmod, LPVOID lpParam);
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved);
void updateGlobals() noexcept;
void setupHooks();

bool alloccoonsole()
{
    if (AllocConsole()) {
        freopen_s(&f, "CONOUT$", "w", stdout);
        freopen_s(&f, "CONOUT$", "w", stderr);
        freopen_s(&f, "CONIN$", "r", stdin);

    
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        DWORD dwMode = 0;
        GetConsoleMode(hOut, &dwMode);
        dwMode |= ENABLE_VIRTUAL_TERMINAL_PROCESSING;
        SetConsoleMode(hOut, dwMode);
        return true;

    }

    return false;
}

void HandleKey()
{
    while (!g_break) {

        std::this_thread::sleep_for(std::chrono::milliseconds(100));

        if (GetAsyncKeyState(VK_F9) & 1) {
            LOG_INFO("Uninjecting...");
            g_break = true;
            break;
        }
    }
}

void updateGlobals() noexcept {

    while (!g_break) {
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        utils::UpdateGlobals();
    }

}

void setupHooks() {

}


//DWORD WINAPI MainThread(HMODULE hmod, LPVOID lpParam) {
//    
//#ifdef _DEBUG
//    alloccoonsole();
//#endif // _DEBUG
//
//    LOG_INFO("Enjoy DLC!");
//
//    std::thread keyHandle(HandleKey);
//    std::thread globUpdate(updateGlobals);
//    std::thread hooks(setupHooks);
//
//    keyHandle.detach();
//    globUpdate.detach();
//    hooks.detach();
//
//    LOG_DEBUG("Thread created! 0x%llx", &keyHandle);
//    LOG_DEBUG("Thread created! 0x%llx", &globUpdate);
//    LOG_DEBUG("Thread created! 0x%llx", &hooks);
//
//    while (!g_break)
//    {
//        if (utils::IsGameExploitable()) {
//            spdhck.Run();
//        }
//
//        std::this_thread::sleep_for(std::chrono::milliseconds(100));
//    }
//
//    LOG_INFO("Uninjected! You can close console");
//
//    FreeLibraryAndExitThread(hmod, 0);
//    return 0;
//}



DWORD WINAPI MainThread(HMODULE hmod, LPVOID lpParam) {

    if (!ConsoleHandler::Instance().Initialize()) {
        LOG_ERROR("Failed to initialize console");
    }
    
    LOG_INFO("Enjoy DLC!");

    std::vector<std::unique_ptr<std::thread>> threads;

    try {
        threads.emplace_back(std::make_unique<std::thread>(HandleKey));
        threads.emplace_back(std::make_unique<std::thread>(updateGlobals));
        threads.emplace_back(std::make_unique<std::thread>(setupHooks));

        for (const auto& thread : threads) {
            LOG_DEBUG("Thread created! 0x%llx", thread->get_id());
            thread->detach(); 
        }
    }
    catch (const std::exception& e) {
        LOG_ERROR("Failed to create threads: %s", e.what());
        throw;
    }

    while (!g_break.load(std::memory_order_relaxed)) {
        try {
            if (utils::IsGameExploitable()) {
                spdhck.Run();
            }
        }
        catch (const std::exception& e) {
            LOG_ERROR("Error in main loop: %s", e.what());
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    LOG_INFO("Uninjecting...");

    threads.clear();

    LOG_INFO("Uninjected! You can close console");

    FreeLibraryAndExitThread(hmod, 0);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) 
{
    switch (ul_reason_for_call) {

    case DLL_PROCESS_ATTACH:
        ConsoleHandler::Init();
        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, nullptr);
        break;

    case DLL_PROCESS_DETACH:

        ConsoleHandler::Cleanup();
        ConsoleHandler::Destroy();
        FreeLibrary(hModule);
        break;

    }

    return TRUE;
}



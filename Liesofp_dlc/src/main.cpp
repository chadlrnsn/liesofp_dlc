#include <stdafx.h>
#include <globals.h>

#include <dlcs/godmode.h>
#include <dlcs/CharacterSpeed.h>
#include <dlcs/noclip.h>

#include <utils/utils.h>

using namespace SDK;
using namespace globals;
FILE* f;


bool alloccoonsole();
void HandleKey();
DWORD WINAPI MainThread(LPVOID lpParam);
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved);
void updateGlobals() noexcept;

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

DWORD WINAPI MainThread(LPVOID lpParam) {
    
    alloccoonsole();

    LOG_INFO("Enjoy DLC!");

    std::thread keyHandle(HandleKey);
    std::thread globUpdate(updateGlobals);


    keyHandle.detach();
    globUpdate.detach();


    LOG_DEBUG("Thread created! 0x%llx", &keyHandle);
    LOG_DEBUG("Thread created! 0x%llx", &globUpdate);

    while (!g_break)
    {

        if (utils::IsGameExploitable()) {
            spdhck.Run(local_player);
            god.Run();
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    LOG_INFO("Uninjected! You can close console");

    FreeLibraryAndExitThread(reinterpret_cast<HMODULE>(lpParam), 0);
    return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved) 
{
    switch (ul_reason_for_call) {

    case DLL_PROCESS_ATTACH:

        DisableThreadLibraryCalls(hModule);
        CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)MainThread, hModule, 0, nullptr);
        break;

    case DLL_PROCESS_DETACH:

        FreeConsole();
        FreeLibrary(hModule);
        break;

    }

    return TRUE;
}
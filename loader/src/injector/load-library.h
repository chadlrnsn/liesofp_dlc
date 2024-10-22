#include <windows.h>
#include <stdio.h>


int InjectDLL(DWORD processID, const char* dllPath)
{
    // Открываем процесс
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processID);
    if (hProcess == NULL)
    {
        printf("Не удалось открыть процесс. Код ошибки: %d\n", GetLastError());
        return 1;
    }

    // Выделяем память в целевом процессе для пути к DLL
    LPVOID pDllPath = VirtualAllocEx(hProcess, NULL, strlen(dllPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (pDllPath == NULL)
    {
        printf("Не удалось выделить память в процессе. Код ошибки: %d\n", GetLastError());
        CloseHandle(hProcess);
        return 1;
    }

    // Записываем путь к DLL в выделенную память
    if (!WriteProcessMemory(hProcess, pDllPath, dllPath, strlen(dllPath) + 1, NULL))
    {
        printf("Не удалось записать память в процессе. Код ошибки: %d\n", GetLastError());
        VirtualFreeEx(hProcess, pDllPath, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return 1;
    }

    // Получаем адрес LoadLibraryA
    HMODULE hKernel32 = GetModuleHandleA("Kernel32");
    LPVOID pLoadLibrary = (LPVOID)GetProcAddress(hKernel32, "LoadLibraryA");

    // Создаем удаленный поток, чтобы вызвать LoadLibraryA с нашим путем к DLL
    HANDLE hThread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pLoadLibrary, pDllPath, 0, NULL);
    if (hThread == NULL)
    {
        printf("Не удалось создать поток. Код ошибки: %d\n", GetLastError());
        VirtualFreeEx(hProcess, pDllPath, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return 1;
    }

    // Ждем завершения потока
    WaitForSingleObject(hThread, INFINITE);

    // Освобождаем память и закрываем дескрипторы
    VirtualFreeEx(hProcess, pDllPath, 0, MEM_RELEASE);
    CloseHandle(hThread);
    CloseHandle(hProcess);

    printf("Инжекция DLL завершена.\n");
    return 0;
}

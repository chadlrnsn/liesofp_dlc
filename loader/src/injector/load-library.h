#include <windows.h>
#include <stdio.h>


int InjectDLL(DWORD processID, const char* dllPath)
{
    // ��������� �������
    HANDLE hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, processID);
    if (hProcess == NULL)
    {
        printf("�� ������� ������� �������. ��� ������: %d\n", GetLastError());
        return 1;
    }

    // �������� ������ � ������� �������� ��� ���� � DLL
    LPVOID pDllPath = VirtualAllocEx(hProcess, NULL, strlen(dllPath) + 1, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
    if (pDllPath == NULL)
    {
        printf("�� ������� �������� ������ � ��������. ��� ������: %d\n", GetLastError());
        CloseHandle(hProcess);
        return 1;
    }

    // ���������� ���� � DLL � ���������� ������
    if (!WriteProcessMemory(hProcess, pDllPath, dllPath, strlen(dllPath) + 1, NULL))
    {
        printf("�� ������� �������� ������ � ��������. ��� ������: %d\n", GetLastError());
        VirtualFreeEx(hProcess, pDllPath, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return 1;
    }

    // �������� ����� LoadLibraryA
    HMODULE hKernel32 = GetModuleHandleA("Kernel32");
    LPVOID pLoadLibrary = (LPVOID)GetProcAddress(hKernel32, "LoadLibraryA");

    // ������� ��������� �����, ����� ������� LoadLibraryA � ����� ����� � DLL
    HANDLE hThread = CreateRemoteThread(hProcess, NULL, 0, (LPTHREAD_START_ROUTINE)pLoadLibrary, pDllPath, 0, NULL);
    if (hThread == NULL)
    {
        printf("�� ������� ������� �����. ��� ������: %d\n", GetLastError());
        VirtualFreeEx(hProcess, pDllPath, 0, MEM_RELEASE);
        CloseHandle(hProcess);
        return 1;
    }

    // ���� ���������� ������
    WaitForSingleObject(hThread, INFINITE);

    // ����������� ������ � ��������� �����������
    VirtualFreeEx(hProcess, pDllPath, 0, MEM_RELEASE);
    CloseHandle(hThread);
    CloseHandle(hProcess);

    printf("�������� DLL ���������.\n");
    return 0;
}

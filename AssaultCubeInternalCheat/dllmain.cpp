// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include "proc.h"
#include "mem.h"


DWORD WINAPI HackThread(HMODULE hModule)
{
    //Create Console
    AllocConsole();

    FILE* f;
    freopen_s(&f, "CONOUT$", "w", stdout);

    std::cout << "Everything is working fine with the console\n";
    //get module base

    //hack loop

    //get key input

    //continuous write/freeze

    //cleanup & eject

    return 0;
}


BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    {
        CloseHandle(CreateThread(nullptr, 0, (LPTHREAD_START_ROUTINE)HackThread, hModule, 0, nullptr));
    }
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}


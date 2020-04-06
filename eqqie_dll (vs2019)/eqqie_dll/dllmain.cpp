// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"
#include<cstdio>
#include<windows.h>
#include<cstdlib>
long long count = 0;

LRESULT CALLBACK mymouse(int nCode, WPARAM wParam, LPARAM lParam)
{
    //std::cout<<"Get: "<<count<<" nCode: "<<nCode<<" wParam: "<<wParam<<" lParam: "<<lParam<<std::endl;
    printf("count: %d\n", count);
    //fflush(stdout);
    count++;
    return CallNextHookEx(NULL, nCode, wParam, lParam);
}

int go_hook() {
    printf("Go_hook!\n");
    HHOOK mouseHook = SetWindowsHookEx(WH_MOUSE_LL, mymouse, 0, 0);
    MSG msg;
    while (GetMessage(&msg, NULL, NULL, NULL)) //从系统的消息队列中取出一条消息
    {
    }
    return 1;
}

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    MessageBox(NULL, TEXT("hook~"), TEXT("钩子提示"), MB_YESNO);
    //printf("Hook!\a\n");
    go_hook();
    return TRUE;
}


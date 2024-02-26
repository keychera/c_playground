#include <windows.h>
#include <stdio.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PSTR lpCmdLine, int nCmdShow)
{
    OutputDebugStringA("Hello Windows!");
    puts("hello windows, the above does not appear sadly https://github.com/microsoft/vscode-cpptools/issues/140 https://github.com/microsoft/vscode-cpptools/issues/3276");
    
    return 0;
}
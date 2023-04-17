#include "Application.h"

void Application::DoSomething()
{
    MessageBoxA(NULL, "Hello from main application!", "Main application", MB_OK);
}

void Application::Run()
{
    HMODULE hDLL = LoadLibraryA("ExportScripts.dll");
    if (hDLL == NULL)
    {
        MessageBoxA(NULL, "Failed to load external DLL!", "Error", MB_OK);
        exit(1);
    }

    typedef std::vector<Script*> (*GetScripts)();
    GetScripts getScripts = (GetScripts)GetProcAddress(hDLL, "GetScripts");

    if (getScripts == NULL)
    {
        MessageBoxA(NULL, "Failed to load GetScripts function!", "Error", MB_OK);
        exit(1);
    }

    std::vector<Script*> scripts = getScripts();

    for (Script* script : scripts)
    {
        script->ExecuteScript();
    }

    FreeLibrary(hDLL);
}
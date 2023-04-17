#ifndef FirstScript_h
#define FirstScript_h

#include <Windows.h>
#include "../src/Script.h"
#include "../app/Application.h"

class FirstScript : public Script
{
public:
    FirstScript() { }
    ~FirstScript() { }

    void ExecuteScript() override
    {
        MessageBoxA(NULL, "Hello from external DLL! - FirstScript", "External DLL", MB_OK);
        Application::DoSomething();
    }
};

#endif // FirstScript_h

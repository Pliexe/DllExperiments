#ifndef SecondScript_h
#define SecondScript_h

#include <Windows.h>
#include "../src/Script.h"

class SecondScript : public Script
{
public:
    SecondScript() { }
    ~SecondScript() { }

    void ExecuteScript() override
    {
        MessageBoxA(NULL, "Hello from external DLL! - SecondScript", "External DLL", MB_OK);
    }
};

#endif // SecondScript_h
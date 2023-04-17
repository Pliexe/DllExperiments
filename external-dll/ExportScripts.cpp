#ifndef ExportScripts_h
#define ExportScripts_h

#include <iostream>
#include <vector>

#include "FirstScript.h"
#include "SecondScript.h"

extern "C"
{
    __declspec(dllexport) std::vector<Script*> GetScripts()
    {
        std::vector<Script*> scripts;
        scripts.push_back(new FirstScript());
        scripts.push_back(new SecondScript());
        return scripts;
    }
}

#endif // ExportScripts_h
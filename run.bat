g++ -shared -o .\build\App.dll .\src\Script.h .\app\Application.h .\app\Application.cpp
g++ -shared -o .\ExportScripts.dll .\external-dll\ExportScripts.cpp .\external-dll\FirstScript.h .\external-dll\SecondScript.h .\src\Script.h .\app\Application.h .\build\app.dll
g++ -o .\build\myapp.exe .\src\main.cpp .\build\app.dll
.\build\myapp.exe
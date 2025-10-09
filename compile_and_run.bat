@echo off
echo Compiling Browser History Manager...
g++ -o browser_history.exe main.cpp BrowserHistory.cpp
if %errorlevel% == 0 (
    echo Compilation successful!
    echo Running the program...
    echo.
    browser_history.exe
) else (
    echo Compilation failed! Make sure you have a C++ compiler installed.
    echo You can install MinGW-w64 or use Visual Studio.
)
pause
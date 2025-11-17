@echo off 
cls
echo compiling Hello...
g++ Hello.cpp -o Hello.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running Hello...
Hello.exe
pause 

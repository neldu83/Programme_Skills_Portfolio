@echo off 
cls
echo compiling BruteForceAttack...
g++ BruteForceAttack.cpp -o BruteForceAttack.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running BruteForceAttack...
BruteForceAttack.exe
pause 

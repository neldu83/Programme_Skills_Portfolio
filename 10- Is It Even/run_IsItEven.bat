@echo off 
cls
echo compiling ItIsEven...
g++ ItIsEven.cpp -o ItIsEven.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running ItIsEven...
ItIsEven.exe
pause 

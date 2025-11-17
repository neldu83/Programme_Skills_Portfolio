@echo off 
cls
echo compiling Biography...
g++ Biography.cpp -o Biography.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running Biography...
Biography.exe
pause 

@echo off 
cls
echo compiling CodingIsCool...
g++ CodingIsCool.cpp -o CodingIsCool.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running CodingIsCool...
CodingIsCool.exe
pause 

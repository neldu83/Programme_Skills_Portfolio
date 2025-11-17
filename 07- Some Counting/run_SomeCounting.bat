@echo off 
cls
echo compiling SomeCounting...
g++ SomeCounting.cpp -o SomeCounting.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running SomeCounting...
SomeCounting.exe
pause 

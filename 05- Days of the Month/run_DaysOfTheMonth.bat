@echo off 
cls
echo compiling DaysOfTheMonth...
g++ DaysOfTheMonth.cpp -o DaysOfTheMonth.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running DaysOfTheMonth...
DaysOfTheMonth.exe
pause 

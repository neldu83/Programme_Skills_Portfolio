@echo off 
cls
echo compiling SimpleSums...
g++ SimpleSums.cpp -o SimpleSums.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo RunningSimpleSums ...
SimpleSums.exe
pause 

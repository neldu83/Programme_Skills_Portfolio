@echo off 
cls
echo compiling PrimitiveQuiz...
g++ PrimitiveQuiz.cpp -o PrimitiveQuiz.exe
if %errorlevel% neq 0 (
        echo.
        echo Compilation failed!
        pause 
        exit /b
)
echo Running PrimitiveQuiz...
PrimitiveQuiz.exe
pause 

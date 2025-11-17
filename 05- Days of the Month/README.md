# Days of the Month

## Description of the program
The **Days of the Month** program is an aplication that asks the user to enter a **Month** (either by name or by number) and a **year**, then it calculates how many **days** that month has.
It also correctly identifies **leap years**, ensuring that the month of February has 29 days when applicable
This Project shows how to work with **strings, conditionals, and input validation**.


## How to Run the program 

- Open VS Code and find the project folder named **Programming Skills Portfolio**    
- Open the terminal ( Ctrl + `` or view Terminal ).  
- Compile file by typing g++ DaysOfTheMonth.cpp  -0 DaysOfTheMonth    

## Execute Program
- On Windows:
.\DaysOfTheMonth.exe

- On macOS/Linux:
./DaysOfTheMonth


## How the Program Works / Output


1. The user enters a **month name** (e.g., `February`) or a **month number** (e.g., `2`).
2. The program converts the input to **lowercase** to ensure consistent comparison.
3. It check whether the input is a **number or word** and matches it to the correct month.
4. then it asks to enter a **year**.
5. Using Conditional logic, the program determines how many days that month has.
- **31 days:** January,March,May,July,August,October,December
- **30 days:** April,June,September,November,
- **February:** 28 or 29 days (Depending on whether it`s a leap year)

## Leap Year Calculation

A year % 4 == 0 && year % 100 != 0) || (year %) 400 == 0)
Example: 2024 - Leap year - February has 29 days
Example: 2023 - Not a Leap year - February has 28 days

## Output Example

A. Enter the month (name or number 1-12): February
Enter the year: 2024
Month 2 in the year 2024 has 29 days.
B. Enter the month (name or number 1-12): 11
Enter the year: 2023 has 30 days.

## Error Handling 
If the user enters an invalid input (for example, “13” or “Hello”), the program will safely display:

Invalid month name! or Invalid month number!

This process ensures that the program does not crash and provides helpful feedback to the user.

## What I Have Learned Through this projeect

- Using transform () and lambda expressions for string manipulation.
- Using stoi() to safely convert string numbers to integers.
- Validating user input to prevent unexpected behavior.
- Implementing leap year logic correctly.
- How to use transform() to handle case-insensitive text.
- How to display diffirent results based on the month added
- Using the switch statement to handle multiple conditions.

## Academic Integrity  
I used ChatGpt only as a study tool to help me understand the task requirements and the related programming concepts.    
The final code was written and were completd by me.    

## Developer Information  
**Code Name:** Days of the Month 
**Created by;** Nelson Duarte      
**Module:** CodeLab 1     
**Programing** Skills Portfolio  
**Institution;** Bath Spa University      
**Course:** BSU Computing  

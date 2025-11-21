#include <iostream>  // Allows use of cout and cin for input and output 
#include <string>   // Allows use of std::string 
#include <algorithm>  // Provides transform () for string conversion 
using namespace std;  // Avoids needing to write std:: everywhere 

// Function to convert input to lowercase
string toLowerCase(string s) {
    transform(s.begin(), s.end(), s.begin(), // Transform each character in the string 
              [](unsigned char c){ return static_cast<char>(tolower(c)); });   
    return s;   // Return the lowercase version 
}

int main() {
    string monthInput;  // Stores user`s month input (name or number)
    int month = 0;    // It holds the numeric month (1-12)
    int year;        // Stores the year entered by the user 
    int days;      // Will store number of days in month 

    cout << "Enter the month (name or number 1-12): ";
    cin >> monthInput;  // Read the month name or number 
    monthInput = toLowerCase(monthInput);  // Convert input to lowercase for comparison 

    // Check if the first character is a digit - user entered a number 
    if (isdigit(monthInput[0])) {
        month = stoi(monthInput); // convert string number to int
    } else {
        // Convert month names into numbers 
        if (monthInput == "january") month = 1;
        else if (monthInput == "february") month = 2;
        else if (monthInput == "march") month = 3;
        else if (monthInput == "april") month = 4;
        else if (monthInput == "may") month = 5;
        else if (monthInput == "june") month = 6;
        else if (monthInput == "july") month = 7;
        else if (monthInput == "august") month = 8;
        else if (monthInput == "september") month = 9;
        else if (monthInput == "october") month = 10;
        else if (monthInput == "november") month = 11;
        else if (monthInput == "december") month = 12;
        else {
            cout << "Invalid month name!" << endl;  // If name doesn`t match any month 
            return 0;   // Stop Program 
        }
    }

    // Ask the user for the year
    cout << "Enter the year: ";
    cin >> year;   // Read year input 

    // Determine number of days in the month 
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;    // Month with 31 days 
            break;
        case 4: case 6: case 9: case 11:
            days = 30;     // Month with 30 days 
            break;
        case 2:
            // Check leap-year rules for February 
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;   // Leap year - 29 days 
            else
                days = 28;   // Otherwise - 28 days 
            break;
        default:
            cout << "Invalid month number!" << endl;  // Handles values outside 1-12
            return 0;
    }
    // Display final result
    cout << "Month " << month << " in the year " << year << " has " << days << " days." << endl;

    return 0;    // End of Progarm 
}
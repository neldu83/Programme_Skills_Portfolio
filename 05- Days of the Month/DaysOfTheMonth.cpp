#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to convert input to lowercase
string toLowerCase(string s) {
    transform(s.begin(), s.end(), s.begin(),
              [](unsigned char c){ return static_cast<char>(tolower(c)); });
    return s;
}

int main() {
    string monthInput;
    int month = 0;
    int year;
    int days;

    cout << "Enter the month (name or number 1-12): ";
    cin >> monthInput;
    monthInput = toLowerCase(monthInput);

    // Check if input is a number or month name
    if (isdigit(monthInput[0])) {
        month = stoi(monthInput); // convert string number to int
    } else {
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
            cout << "Invalid month name!" << endl;
            return 0;
        }
    }

    // Ask for year
    cout << "Enter the year: ";
    cin >> year;

    // Determine number of days
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
        default:
            cout << "Invalid month number!" << endl;
            return 0;
    }

    cout << "Month " << month << " in the year " << year << " has " << days << " days." << endl;

    return 0;
}
#include <iostream>   // Include the input/output library (cout, cin)
#include <string>     // Include the sting library so we can use std: :string
using namespace std;  // Allows using standard library names without "std::"

// Function to check even/odd
string checkEven(int num ) {  // Defines a function named checkEven That takes an integer and returns a string 
    if (num % 2 == 0) {  // Defines a function named checkEven That takes an integer and returns a string 
        return " The provided number is even"; // Returns this string if the number is even  
    } else {  // Otherwise (odd number)
        return "The provided number is odd"; // Returns this string for odd numbers 
    }

}

int main () {   // Start of the main function (program entry point)
    int number; // Declares an integer variables to store user input

    cout << "Enter a number: ";  // Prompts the user to input a number 
    cin >> number; // Reads the number from user input into number

    string result = checkEven(number); // calls the checkEven function and stores the returned string in result

    cout << result << endl; // Output the result (even or odd)

    return 0;   // Returns 0 to indicate successful program termination 

}
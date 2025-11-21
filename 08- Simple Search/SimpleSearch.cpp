#include <iostream>   // Includes The input/output stream library for cout and cin 
#include <string>    // Includes the string library for using std: :string
using namespace std; // Allows us to use standard library names without  "std::"

int main() {   // Starr of the main function (program entry point)
    const int SIZE = 6;  // Declares a constant integer SIZE with value 5 (array size)
    string names[SIZE] = {"Jake", "Zac", "Ian", "Ron", "Sam", "Dave"};
    string searchName;   // Variables to store the name entered by the user 
    bool found = false;  // Boolean flag to indicate whether the name was found 

    // Display the available names from the array 
    cout << "Available names: "; 
    for (int i = 0; i < SIZE; i++) {   // Loop through all names in the array 
        cout << names[i];   // Print the correct name 

        if (i < SIZE - 1) // Check if this is not the last name 
            cout << ", ";  // Print a coma after each name except the last

    }
    cout << endl;    // Print a newline 

    cout << "Enter a name to search for: ";   // Prompt the user to enter a name to search for
    getline(cin, searchName);    // Read the full input line into searchName 
    for (int i = 0; i < SIZE; i++) {   // Iterate through each name in the array 
        if (names[i] == searchName) {  // Compare current array name with searchName 
            // If a match is found , print the position 
            cout << "Name \"" << searchName << "\" found at position " << i << "!" << endl;
            found = true;   // Set found flag to true 
            break;  // Exit the loop since we found the name 
        }
    }
    // If the name was not found in the array, show a message
    if (!found) {   // Check if found is still false  
        cout << "Name \"" << searchName << "\" not found in the list." << endl;
    }

    return 0;  // Return 0 to indicate successful program execution 
}
#include <iostream>   // Allows use of cout and cin for input and outout 
using namespace std;  // Allows using standard library names without "std::"

int main() {
    string name, hometown;  // Variables to store the user`s name and hometown 
    int age; //  Variable to store the user`s age 

    cout << "Enter your name: ";  // Ask the user for their name 
    getline(cin, name); // Read the entire line (including spaces into name )
 
    cout << "Enter your hometown: ";  //Asks the user`s hometown 
    getline(cin, hometown);  // Read the full line into `hometown`

    cout << "Enter your age: ";  // Ask for the user`s age 
    cin >> age;  // Read the numeric age into the variable `age`
 
    // Print each piece of information on its own line 
    cout << name << endl         // Output the name 
         << hometown << endl     // Output the hometown 
         << age << endl;         // Output the age 

         return 0;               // End the program 

}

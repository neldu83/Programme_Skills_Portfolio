#include <iostream>  // Includes input/output library (cout, cin)
#include <string>   // Includes string library for std::string
using namespace std;  // Allows using standard library names without "std::"

int main() {
    const string correctPassword = "12345"; // required by the task\n
    string attempt;   // Variable to store user`s input 
    int attemptsLeft = 5;  // User has 5 attempts before lockout 

    cout << "Brute Force Attack\n";  // Display program title

    // Loop continues while the user still has attempts left
    while (attemptsLeft > 0) {  
        cout << "Enter Password (" << attemptsLeft << " attempts left): ";  // Shows how many attempts remain
        cin >> attempt;  // Read password attempt from user 
 
        if (attempt ==correctPassword) { // check if the attempt matches the real password 
        cout << "Welcome to the Secure areal!" << endl; // Success message
        return 0; //  End program when correct
    } else {      // If password is wrong:
        attemptsLeft--;  // Reduce remaining attempts by 1
        if (attemptsLeft > 0) {  // If user still has attempts keft:
            cout << "Incorrect password. Try again." << endl;
        }
    }
}
// This message only appears when attempts left reaches 0      
cout << "Too many failed attempts. The authorities have been alerted!" << endl;
return 0;  // Program Ends

}
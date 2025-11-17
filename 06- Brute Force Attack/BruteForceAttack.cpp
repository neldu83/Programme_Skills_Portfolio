#include <iostream>
#include <string>
using namespace std;

int main() {
    const string correctPassword = "12345"; // required by the task\n
    string attempt;
    int attemptsLeft = 5;

    cout << "Brute Force Attack\n";

    while (attemptsLeft > 0) { 
        cout << "Enter Password (" << attemptsLeft << " attempts left): ";
        cin >> attempt;
 
        if (attempt ==correctPassword) {
        cout << "Welcome to the Secure areal!" << endl;
        return 0; //  end program when correct
    } else {
        attemptsLeft--;
        if (attemptsLeft > 0) {
            cout << "Incorrect password. Try again." << endl;
        }
    }
}
        
cout << "Too many failed attempts. The authorities have been alerted!" << endl;
return 0;

}
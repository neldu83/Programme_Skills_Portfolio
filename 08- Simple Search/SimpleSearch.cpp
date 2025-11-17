#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string names[SIZE] = {"Sienna", "Scarlett", "Samantha", "Nelson", "Rui"};
    string searchName;
    bool found = false;

    cout << "Available names: ";
    for (int i = 0; i < SIZE; i++) {
        cout << names[i];
        if (i < SIZE - 1) cout << ", ";
    }
    cout << endl;

    cout << "Enter a name to search for: ";
    getline(cin, searchName);

    for (int i = 0; i < SIZE; i++) {
        if (names[i] == searchName) {
            cout << "Name \"" << searchName << "\" found at position " << i << "!" << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Name \"" << searchName << "\" not found in the list." << endl;
    }

    return 0;
}
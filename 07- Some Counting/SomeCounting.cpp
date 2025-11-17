#include <iostream>
using namespace std;

int main () {

    // 1. Count up 0 to 50 
    for (int i = 0; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. Count up 50 to 0
    for (int i = 50; i >= 0; i--) {
        cout << i << " ";

    }
    cout << endl;

    // 3. Count up 30 to 50
    for (int i = 30; i <= 50; i++) {
        cout << i << " ";
    }
    cout << endl;

     // 4. Count up 50 to 10
     for (int i = 50; i >= 10; i -= 2) {
        cout << i << " ";
    }
    cout << endl;

    // 5. Count up 100 to 200
     for (int i = 100; i <= 200; i += 5) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
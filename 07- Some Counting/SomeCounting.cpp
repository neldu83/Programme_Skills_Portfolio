#include <iostream>  // Include the input/output library (cout, endl)
using namespace std;  //Allow usage of standard names without prefix "std::"

int main () {  // Start of the main function (program entrypoint)

    // 1. Count up 0 to 50 
    for (int i = 0; i <= 50; i++) { // Loop starts at 0 and increments up to 50
        cout << i << " ";  // Prints the current value of i followed by a spece 
    }
    cout << endl;  // Moves to the next line

    // 2. Count up 50 to 0
    for (int i = 50; i >= 0; i--) {  // Loop starts at 50 and decrement down to 0
        cout << i << " "; // Prints the current value of i followed by a space 
 
    }
    cout << endl;    // Moves to the next line 

    // 3. Count up 30 to 50
    for (int i = 30; i <= 50; i++) {  // Loop starts at 30 and increment up to 50
        cout << i << " ";  // Prints the current value of i followed by a space 
    }  
    cout << endl;  // Moves to the next line

     // 4. Count down 50 to 10, decresing by 2 each time
     for (int i = 50; i >= 10; i -= 2) { // Loop starte at 50 and subtracts 2 each step until reaching 10
        cout << i << " ";
    }
    cout << endl;  // Moves to the next line 

    // 5. Count up 100 to 200, increasing by 5 each time 
     for (int i = 100; i <= 200; i += 5) {  // Loop starts at 100 and adds 5 each step until reaching 200
        cout << i << " ";   // Prints the current value of i followed by a space 
    }
    cout << endl;  // Moves to the next line 

    return 0;   // Returns 0 to indicate successful program exection 
}
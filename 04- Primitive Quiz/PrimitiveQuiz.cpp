#include <iostream>  // Use of cout, cin for input/output 
#include <string>   // Allows use of std::string 
#include <algorithm> // Provides transform() for lowercase conversation 
#include <cctype>    // Provides tolower() function 
using namespace std;  // Avoids writting std:: everywhere 

// Function to make input lowercase (handles PARIS / Paris / PaRis)
string normalize(string s) {
    transform(s.begin(), s.end(), s.begin(),  // Apply transformation to each char 
    [](unsigned char c){ return static_cast<char>(tolower(c)); });
    return s;   // Return the lowercase string 
    
}  

int main() {
    int score = 0;   // Tracks how many answers are correct 
    string answer;   // Stores each user response 

    cout << "Welcome to the European Capitals Quiz!" << endl;  // Title message 
    cout << " Answer the following questions:" << endl;   // Introduction 

    // 1. REQUIRED QUESTION - CAPITAL of France   
    getline(cin, answer); 
    cout << "\n1. What is the capital of France? ";  // Ask question 
    getline(cin, answer); // Read entire line from user user 
    if (normalize(answer) == "paris") {        // Compare lowercase version 
        cout << "Correct!" << endl;            // Correct answer response 
        score++;  // Increase score 
    } else {
        cout << "Wrong! The correct answer is Paris." << endl;  // Wrong answer 
    }

    // 2. Capital of Portugal
    cout << "\n2. What is the capital of Portugal? ";
    getline(cin, answer);
    if (normalize(answer) == "lisbon") {  // Check answer 
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Lisbon." << endl;
    }

     // 3. Capital of Spain
    cout << "\n3. What is the capital of Spain ? ";
    getline(cin, answer);
    if (normalize(answer) == "madrid") {  // Fixed incorrect message  
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Lisbon." << endl;
    }
    
    // 4. Capital of Italy
    cout << "\n4. What is the capital of Italy? ";
    getline(cin, answer);
    if (normalize(answer) == "rome") {  
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Rome." << endl; // Fixed small typo 
    }
    
    // 5. Capital of Germany
    cout << "\n5. What is the capital of Germany? ";
    getline(cin, answer);
    if (normalize(answer) == "berlin") {
       cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Berlin." << endl;
    }
    
    // Final results 
    cout << "\nYou got " << score << " out of 5 questions right!" << endl;

    //Calculate and display percentage 
    cout << "Your score: " << (score * 100 / 5) << "%" << endl;

    // Give feedback based on performance 
    if (score == 5)
        cout << "Excellent!" << endl;
    else if (score >= 3)
        cout << "Good job!" << endl;
    else 
        cout << "keep practicing!" << endl;

    return 0;   // End program 
}

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

// Function to make input lowercase (handles PARIS / Paris / PaRis)
string normalize(string s) {
    transform(s.begin(), s.end(), s.begin(),
    [](unsigned char c){ return static_cast<char>(tolower(c)); });
    return s;
    
}

int main() {
    int score = 0;
    string answer;

    cout << "Welcome to the European Capitals Quiz!" << endl;
    cout << " Answer the following questions:" << endl;

    // 1. REQUIRED QUESTION - CAPITAL of France 
    cout << "\n1. What is the capital of France? ";
    getline(cin, answer);
    if (normalize(answer) == "paris") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Paris." << endl;
    }

    // 2. Capital of Portugal
    cout << "\n2. What is the capital of Portugal? ";
    getline(cin, answer);
    if (normalize(answer) == "lisbon") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Lisbon." << endl;
    }

     // 3. Capital of Spain
    cout << "\n3. What is the capital of Spain ? ";
    getline(cin, answer);
    if (normalize(answer) == "madrid") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Lisbon." << endl;
    }
    
    // 4. Capital of Spain
    cout << "\n4. What is the capital of Italy? ";
    getline(cin, answer);
    if (normalize(answer) == "rome") {
        cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! Thecorrect answer is Rome." << endl;
    }
    
    // 5. Capital of Spain
    cout << "\n5. What is the capital of Germany? ";
    getline(cin, answer);
    if (normalize(answer) == "berlin") {
       cout << "Correct!" << endl;
        score++;
    } else {
        cout << "Wrong! The correct answer is Berlin." << endl;
    }

    cout << "\nYou got " << score << " out of 5 questions right!" << endl;
    cout << "Your score: " << (score * 100 / 5) << "%" << endl;

    if (score == 5)
        cout << "Excellent!" << endl;
    else if (score >= 3)
        cout << "Good job!" << endl;
    else 
        cout << "keep practicing!" << endl;

    return 0;
}

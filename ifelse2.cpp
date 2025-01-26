#include<bits/stdc++.h>
using namespace std;
// A school has following rules for grading system;
// below 25 - F 
// 25 to 45 - E 
// 45 to 49 - D 
// 50 to 59 - C 
// 60 to 79 - B 
// 80 to 100 - A 
// Ask the user to enter marks and print the correspinding grades.

int main() {
    int marks;
    cout << "Enter Your Marks : "; cin >> marks;
    if (marks>=80 && marks <=100 ) {
        cout << " You got 'A' Grade";
    }
    else if (marks >=60 && marks <=79) {
        cout << "You got 'B' Grade";
    }
    else if (marks >=50 && marks <=59) {
        cout << "You got 'C' Grade";
    }
    else if (marks >= 45 && marks <= 49) {
        cout << "You got 'D' Grade";
    }
    else if (marks>=25 && marks <= 45) {
        cout << "You got 'E' Grade";
    }
    else if (marks< 25){
        cout << "You got 'F' Grade";
    }
    else {
        cout << "Better Luck Next Time";
    }
    return 0;
}
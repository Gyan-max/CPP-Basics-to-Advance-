#include <bits/stdc++.h>
using namespace std;
// Take the age from the user and then decide accordingly
// if age is less than 18, print not eligible for job
// if age is greater than or equal to 18 and less than equal to 53, print eligible for job
// if age is less than equal to 55 and greater than equal to 57, print eligible for job but retirement soon 
// if age is greater than 57, print retirement time

int main() {
    int age;
    cout<<"Enter your age: "; cin>>age;
    if (age < 18){
        cout<<"Not Eligible for Job";
    }
    else if (age >= 18 && age<= 53) {
        cout << "Eligible for Job";
    }
    else if (age >= 55 && age <= 57) {
        cout << "Eligible for Job, But retirement soon";
    }
    else if (age > 57)
    {
        cout << "Retirement Time";
    }
    
    return 0;
}
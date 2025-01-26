#include<bits/stdc++.h>
using namespace std;
int main() {
    // write a program that takes an input of age and printts if you are adult or not
    int age;
    // cin >> age;
    cout <<"Enter your age: " ; cin >>age;
    if (age >= 18) {
        cout << "You are an adult";
    }
    else{
        cout << "You are not an adult" ;
    }
    return 0;

}
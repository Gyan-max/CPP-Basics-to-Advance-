#include<bits/stdc++.h>
using namespace std;
int main() {
    char grade;
    cout<<"Enter your grade: "; cin>>grade;
    switch(grade){
        case 'A': cout<<"You got 'A' Grade"; break;
        case 'B': cout<<"You got 'B' Grade"; break;
        case 'C': cout<<"You got 'C' Grade"; break;
        case 'D': cout<<"You got 'D' Grade"; break;
        case 'E': cout<<"You got 'E' Grade"; break;
        case 'F': cout<<"You got 'F' Grade"; break;
        default: cout<<"Invalid Input";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    char ch;
    cout<<"Enter a letter (from 'a' to 'z' or from 'A' to 'Z') : ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z'){
        cout<<"LowerCase Character\n";
    }
    else{
        cout<<"UpperCase Character\n";
    }
    return 0;
}
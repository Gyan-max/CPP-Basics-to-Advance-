//program to print reverse of a number
#include <iostream>
using namespace std;

int main() {
    int n;
    int rev = 0;
    cout<<"Enter a number: "; cin>>n;

    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n/10;

    }
    cout<<"Reverse of the number: "<<rev;
    return 0;
}
//program to print palindrome of a number
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: "; cin>>n;
    int rev = 0;
    int x = n;
    while(n>0) {
        int digit = n % 10;
        rev = rev*10 + digit;
        n = n/10;
    }
    cout<<"Reverse of the number: "<<rev<<endl;
    if (rev == x){
        cout<<"Palindrome";
    } else{
        cout<<"Not Palindrome";
    }
    return 0;

}
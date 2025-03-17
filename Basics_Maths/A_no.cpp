//program to print amstrong numbers
#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number: "; cin>>n;
    int temp = n;
    int sum = 0;

    while (n != 0) {
        int rem = n% 10;
        sum += rem * rem * rem;
        n = n /10;

    }
    if (sum == temp) {
        cout<<temp<<" is an Armstrong number";
    } else{
        cout<<temp<<" is not an Armstrong number";
    }
    return 0;
}
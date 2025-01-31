#include<bits/stdc++.h>
using namespace std;
//program to print sum of numbers from 1 to N
int main() {
    int n, sum = 0;
    cout<<"Enter a number: "; cin>>n;
    for (int i=1; i<=n; i++){
        sum += i;
    }
    cout<<"Sum of numbers from 1 to "<<n<<" is: "<<sum;
    return 0;
}
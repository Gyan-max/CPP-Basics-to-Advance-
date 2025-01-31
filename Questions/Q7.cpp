#include<bits/stdc++.h>
using namespace std;
//Program to print sum of odd numbers from 1 to N

int main() {
    int n;
    cout<<"Enter the value of N: "; 
    cin>>n;
    int sum = 0;
    for (int i=1; i<=n; i++){
        if(i%2 != 0){
            sum+=i;
        }
    }
    cout<<sum;
    return 0;
}
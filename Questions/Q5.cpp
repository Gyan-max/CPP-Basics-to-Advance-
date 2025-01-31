#include<bits/stdc++.h>
using namespace std;
//Is prime number or not
int main() {
    int x;
    cout<<"Enter a number: "; cin>>x;
    for(int i = 2; i<=(x-1); i++){
        if(x%i == 0) {
            cout<<"Not a Prime Number";
            break;
        }else{
            cout<<"Prime Number";
            break;
        }
    }
    return 0;
}
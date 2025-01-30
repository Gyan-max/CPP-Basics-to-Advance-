// Take a day number and print corresponding day of the week.
// for 1= Monday, for 2 = Tuesday and so on for 7 =sunday
#include<bits/stdc++.h>
using namespace std;
int main() {
    int day;
    cout << "Enter a number: "; cin>>day;
    switch(day){
        case 1: cout<<"Monday";
        break;
        case 2: cout<<"Tuesday";
        break;
        case 3: cout<<"Wednesday";
        break;
        case 4: cout<<"Thursday";
        break;
        case 5: cout<<"Friday";
        break;
        case 6: cout<<"Saturday";
        break;
        case 7: cout<<"Sunday";
        break;
        default: cout << "Invalid Input";
    }
    return 0;
}
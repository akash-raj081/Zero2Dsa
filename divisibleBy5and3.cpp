#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a Number : ";
    cin >> n;

    if(n%5==0 && n%3==0)
        cout << n << " It is divisible by 3 and 5 .";
    else
        cout << n << " It is not divisible by 3 and 5. ";
}

// here we use OR operator between conditions . that refers , a number which is divisible by 5 or 3 . 

// int main(){

//     int n;
//     cout << "Enter a Number : ";
//     cin >> n;

//     if(n%5==0 || n%3==0)
//         cout << n << " It is divisible by 3 and 5 .";
//     else
//         cout << n << " It is not divisible by 3 and 5. ";
// }
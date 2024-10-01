#include<iostream>
#include<cstdlib>
using namespace std;

// int main(){
//     int n;
//     cout <<"enter a number ";
//     cin>>n;

//     int r = 0;
//     n = abs(n);
//     while(n!=0)
//     {
//         r = r * 10 + (n % 10);
//         n /= 10;
//     }
//     cout << "reverse order of a number is :" << r;
// }

int main(){
    int n;
    cout <<"enter a number ";
    cin>>n;
    int x = n;

    int r = 0;
    n = abs(n);
    while(n!=0)     // this loop use for Reverse  given number .
    {
        r = r * 10 + (n % 10);
        n /= 10;
    }
    cout << "reverse order of a number is :" << r << endl;
    
    int sor_digit = 0;

    while (r!=0){    // this loop use for adding digits of a reverse number .
        sor_digit = sor_digit + (r % 10);
        r /= 10;
    }
    cout << "sum of digit of reverse number: " << sor_digit << endl;

    int son_digits = 0;
    while (x!=0){    // this loop use for adding digits of a given number .
        son_digits = son_digits + (x % 10);
        x /= 10;
    }
    cout <<"sum of digit of given number: "<< son_digits<< endl;

    if(sor_digit == son_digits){
        cout << "sum of digits of a given number and reverse number is equal." << endl;
    }
    else{
        cout << "sum of digits of a given number and reverse number is  not equal." << endl;
    }
}
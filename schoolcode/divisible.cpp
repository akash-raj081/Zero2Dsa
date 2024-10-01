#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter a number To check whether it is divisible by 5 or Not:";
    cin >> n;
    if (n%5==0)
        cout << n << " it is divisible by 5 .";
    else
        cout << n << " it is not divisible by 5 .";
}
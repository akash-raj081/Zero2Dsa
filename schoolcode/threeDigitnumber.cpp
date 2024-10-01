#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a Number: ";
    cin >> n;

    if (n > 99 && n <1000)
        cout << "It's a 3 digit Number . ";
    else
        cout << "It's not a 3 digit Number . ";
}
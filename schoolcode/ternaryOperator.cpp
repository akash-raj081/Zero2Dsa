#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter n ";
    cin >> n;

    // shorthand of {if else }statement 
    // (cndition) ? if true : if false;
    // not recommended for more than two conditions
    (n % 2 == 0) ? cout << "even" : cout << "odd";
}
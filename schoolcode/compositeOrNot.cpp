#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter a number:";
    cin >> n;
    bool flag = true; // true means prime 
    for (int i = 1; i < n / 2;i++){
        if(n%i==0){
            flag = false; // false means not prime
            break;
        }
    }
    if(n==1)
        cout << "neither prime nor composite ";
    else if(flag==true)
        cout << "prime";
    else
        cout << "composite";
}
#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter a number :";
    cin >> n;

    cout << "odd numbers by using continue statement : \n";

    for (int i = 1; i <= n;i++){
        if(i%2==0) continue;
        else
            cout << i << " ";
    }

    cout << "\neven numbers by using continue statement : \n";
    for (int i = 1; i <= n;i++){
        if(i%2!=0) continue;
        else
            cout << i << " ";
    }
}
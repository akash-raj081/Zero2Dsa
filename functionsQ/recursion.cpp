#include<iostream>
using namespace std;
// print number from 1 to N  (without any extra variable )
void print(int x ){
    if(x==0)        // base 
        return;
    print(x - 1);   // call 
    cout << x << endl; //work
}

int main(){
    int n;
    cout << "enter number :";
    cin >> n;
    print(n);
}
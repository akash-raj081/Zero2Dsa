#include<iostream>
using namespace std;

int fibo(int a ){
    if(a<=2)
        return 1; 
    return fibo(a - 1) + fibo(a - 2);
}
int main(){
    int n;
    cout << "Enter an number :" << endl;
    cin >> n;
    cout << fibo(n);
}
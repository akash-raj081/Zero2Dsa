#include<iostream>
using namespace std;
// Return type 
// return >> ye program ko khatam kr deta hai .
int sum(int a , int b ){
    return a + b;
}
int main(){
    int x, y;
    cout << "Enter x and y to calclate their sum :";
    cin >> x >> y;
    cout << sum(x, y);
}
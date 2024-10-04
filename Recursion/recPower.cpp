#include<iostream>
using namespace std;
//print 'a' raised to the power 'b' (linear approach).
int power(int a ,int b){
    if(b==0){
        return 1;
    }
    return a * power(a, b - 1);
}
int main(){
    int a, b;
    cout << "Enter base value : " << endl;
    cin >> a;
    cout << "Enter exponential value : " << endl;
    cin >> b;
    cout << power(a, b);
}
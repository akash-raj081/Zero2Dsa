#include<iostream>
using namespace std;
//print 'a' raised to the powerlog 'b' (logarithmic approach).this code will contain upto 10digits(1073741824). 

int powerlog(int a ,int b){
    if(b==0){
        return 1;
    }
    int c = powerlog(a, b / 2);
    if(b%2==0)
        return c * c;
    else
        return c * c * a;
}
int main(){
    int a, b;
    cout << "Enter base value : " << endl;
    cin >> a;
    cout << "Enter exponential value : " << endl;
    cin >> b;
    cout <<"The value of "<<a<<" to the power of "<<b<<" is : "<< powerlog(a, b);
}
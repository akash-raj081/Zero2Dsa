#include<iostream>
using namespace std;

int main(){
    float n;
    cout << "Give me a number , convert into absolute value ";
    cin >> n;
    if(n>=0)
        cout <<"Absolute value is :"<< n;
    else{
        cout <<"Absolute value is :" << -n;
    }
}

int main()
{
    int n;
    cout << "enter N:";
    cin >> n;
    // if you want to change n to its absolute value then,
    if(n<0)    n = -n;
    cout << n;
}
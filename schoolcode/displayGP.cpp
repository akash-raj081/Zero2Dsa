#include<iostream>
using namespace std;

int main()
{
    int a, r, n;
    cout << "enter a , r and n :";
    cin >> a >> r >> n;

    for (int i = 0; i < n;i++){
        cout << a << " ";
        a *= r;
    }
}
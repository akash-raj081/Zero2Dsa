#include<iostream>
using namespace std;

int main(){
    int A, l, b, P;
    cout << "Enter length and Breadth of Rectangle :";
    cin >> l >> b;
    cout << "now, we checking  Whether the area of the rectangle is greater than its perimeter.\n";

    A = l * b;
    P = 2 * (l + b);

    if(A>P)
        cout << "Yes , Area of Rectangle  is greater than its perimetere ";
    else
        cout << "Yes,Perimeter of Rectangle is greater than its Area.";
}
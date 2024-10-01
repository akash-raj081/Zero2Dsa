#include<iostream>
using namespace std;

// int main()
// {
//     int a, b, c;
//     cout << "Enter sides for Triangle: ";
//     cin >> a >> b >> c;

//     if((a+b)>c || (b+c)>a || (c+a)>b)        // instead of OR operator use AND operator
//         cout << "This is a side of Triangle .";
//     else
//         cout << "This cannot be a side of a triangle";
// }

int main()
{
    int a, b, c;
    cout << "Enter sides for Triangle: ";
    cin >> a >> b >> c;

    if((a+b)>c && (b+c)>a && (c+a)>b)
        cout << "This is a side of Triangle .";
    else
        cout << "This cannot be a side of a triangle";
}
#include<iostream>
using namespace std;

int main(){ 
    int a, b, c;
    cout << "Enter postitive integer a b c : ";
    cin >> a>> b>> c;
    a = abs(a);
    b = abs(b);
    c = abs(c);
    if(a>=b && a>=c)
        cout << "a is greater or equal";
    else if(b>=a && b>=c)
        cout << "b is greater or equal";
    else
        cout << "c is greater or equal";
}

//  Print least of them . 

// int main(){

//     int a, b, c;
//     cout << "Enter postitive integer a b c : ";
//     cin >> a >> b >> c;

//     if(a<b && a<c)
//         cout << "a is smalllest";
//     else if(b<a && b<c)
//             cout << "b is smalllest";
//          else
//             cout << "c is smalllest";
// }
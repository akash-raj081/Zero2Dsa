#include<iostream>
using namespace std;

// int main(){
//     int a;
//     cin >> a;
//     char ch;
//     cin >> ch;
//     int b;
//     cin >> b;

//     if(ch=='+')
//         cout << a + b;
//     if(ch=='-')
//         cout << a - b;
//     if(ch=='/')
//         cout << a / b;
//     if(ch=='*')
//         cout << a * b;
// }


int main(){
    int a;
    cin >> a;
    char ch;
    cin >> ch;
    int b;
    cin >> b;

    switch(ch){

        case '+':
            cout << a + b<< endl;
            break;
        case '-':
            cout << a - b<< endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        default:
            cout << "invalid operator !";
    }


}

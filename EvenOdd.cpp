#include<iostream>
using namespace std ;

// int main(){
//     int n;
//     cout << "enter n" << endl;
//     cin >> n;
//     if(n%2 == 0 )
//         cout << "It is even number ";

// }

int main()
{
    int n;
    cout << "enter n to check whether it is even or odd:" << endl;
    cin >> n;
    if(n%2==0)
        cout << n << " it is an even number ." << endl;
    else
        cout << n << " it is an odd number . " << endl;

    cout << "Thanks you .";
}
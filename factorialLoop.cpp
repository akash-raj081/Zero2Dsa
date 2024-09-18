#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number for calculate factorial : ";
//     cin >> n;
//     int p = 1;
//     if(n==0 || n==1){
//         cout << "Factorial of " << n << " is 1 ";
//     }
//     else{
//         for (int i = 1; i <= n ; i++){
//             p = p * i;
//         }
//         cout << "Factorial of " << n << " is " << p << endl;
//     }
    
// }

int main(){
    int n;
    cout << "Enter a number for calculate factorial : ";
    cin >> n;
    int p = 1;
    if(n==0 || n==1){
        cout << "Factorial of " << n << "! is 1 ";
    }
    else{
        for (int i = 1; i <= n ; i++){
            p = p * i;
            cout << i<<"!"<< "is "<< p <<"\n";
        }
    }
    
}
#include<iostream>
using namespace std;

// by manually

// int main(){

//     int n;
//     cout << "table of 19 \n";

//     for (int i = 19; i <= 190; i+=19){
//         cout << i << " ";
//     }
// }

//By user input .

int main(){

    int n;
    cout << "enter number  \n";
    cin >> n;   

    for (int i = n; i <= (n*10); i+=n){
        cout << i << " ";
    }
}

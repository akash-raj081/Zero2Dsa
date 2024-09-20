#include<iostream>
using namespace std;

// int main(){

//     for (int i = 1; i <= 100;i++){
//         cout << i << endl;
//     }
// }


// int main(){
//      cout << "even numbers between 1 to 100 \n";
//     for (int i = 1; i <= 100;i++){
//        if(i%2==0) cout << i << " ";
//     // (i % 2 == 0) ? cout << i : cout << "odd";
//     }
// }

int main(){
    cout << "odd numbers between 1 to 100 \n";
    for (int i = 1; i <= 100;i++){
       if(i%2!=0) cout << i << " ";
    // (i % 2 == 0) ? cout << i : cout << "odd";
    }
}
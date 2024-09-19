#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "enter no :";
    cin >> n;

    // for (int i = 1; i < n;i++){    // number itself not included 
    //     if(n%i==0)
    //         cout << i << " ";
    // }
    // for (int i = 1; i <= n;i++){  //number itself included 
    //     if(n%i==0)
    //         cout << i << " ";
    // }

    // for (int i = 1; i <= n/2;i++){ // efficient code , why? >> loop runs half of the number
    //     if(n%i==0)
    //         cout << i << " ";
    // }
    for (int i = n/2; i >= 1;i--){ // using break statement, for only print highest factor value  
        if(n%i==0){
           cout << i <<endl;
           break;
        }
    }
    for (int i = n/2; i >= 1;i--){ //this block print values in decreasing order  (if n = 500)   >> 250 125 100 50 25 20 10 5 4 2 1
        if(n%i==0){
           cout << i << " ";
        //    break;
        }
    }
}
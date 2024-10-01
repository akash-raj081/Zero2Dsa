#include<iostream>
using namespace std;
// // n to 1 
// // with the use of Extra parameter , print 1 to n ;
// void increasingFlow(int x , int n){ // here we use Exta parameter to print IncreasingFlow
//     if(x>n){        // base condition to stop infinite loop
//         return;
//     }
//     cout << x << endl;
//     increasingFlow(x + 1, n);       // function call itself :- recursion
//     return;
// }
// int main(){
//     int n ;
//     cout << "enter a number : ";
//     cin >> n;
//     increasingFlow(1, n);   //calling function
// }

// 1 to n 
void increasingaftercall(int n){
    if(n==0){
        return;
    }
    increasingaftercall(n - 1);         // difference between above code is this >> display after recursion
    cout << n << endl;                  // we can write a output code and it will display 1 to n , because of just small change 

}
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    increasingaftercall(n);
}

// n to 1  1 to n 

void increasingaftercall(int n){
    if(n==0){
        return;
    }
    cout << n << endl;                  // output >> n to 1.
    increasingaftercall(n - 1);         // difference between above code is this >> display after recursion
    cout << n << endl;                  // we can write a output code and it will display 1 to n , because of just small change 

}
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    increasingaftercall(n);
}
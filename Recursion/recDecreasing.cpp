#include<iostream>
using namespace std;
void decreasingflow(int n){
    if(n==0){           // this is base condition to stop infinite loop 
        return;
    }
    cout << n <<endl ;
    decreasingflow(n -1);  // here we use recusion :-  function calling itself .
    return;
}

int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;       // Taking input from user .
    n = abs(n);     // if user gave -ve number then abs() function convert it into +ve integer .
    decreasingflow(n);  // function calling  decreasing()

}
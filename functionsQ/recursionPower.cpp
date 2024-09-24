#include<iostream>
using namespace std;
int power (int a , int n ){
    if(n==0)
        return 1;

    return a * power(a, n - 1);
}
int main(){
    int a, n;
    cout << "enter a number 'a' and its power 'n' :";
    cin >> a >> n;
    cout << power(a, n);
}


/*
// not for big numbers 
#include<iostream>
using namespace std;
int power (int a , int n ){
    if(n==0) return 1;
    if(n==2) return a*a;
    if(n%2==0){
      long long int halfpower = power(a, n/2);
        return halfpower*halfpower;
    }
    else
        return a*power(a,n-1);
}
int main(){
    long int a, n;
    cout << "enter a number 'a' and its power 'n' :";
    cin >> a >> n;
    cout << power(a, n);
}
*/
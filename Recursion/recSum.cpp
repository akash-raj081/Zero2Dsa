#include<iostream>
using namespace std;
// int sum(int n , int s){
//     if(n==0){
//         cout << s << endl;
//         return 0;
//     }
//     sum(n - 1, n + s);
//     return 0;
// }
// int main(){
//     int n;
//     cout << "enter a number : ";
//     cin >> n;
//     sum(n, 0);
//}
int sum(int n){
    if(n==0){
        // cout << s << endl;
        return 0;
    } 
    n += sum(n-1);
    return n;
}
int main(){
    int n;
    cout << "enter a number : ";
    cin >> n;
    cout<< sum(n);
}
#include<iostream >
using namespace std;
int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x;i++){
        fact *= i;
    }
    return fact;
}

// int permutation(int y){
//     int permu = 1;
//     for (int i = 1; i <= y;i++){
//         permu *= i;
//     }
//     return permu;
// }
int main(){
    int n, r;
    cout << "Enter n and r :";
    cin >> n >> r;
    int a, b, c;
    if(n>=r){
    a = factorial(n);
    b = factorial(r);
    c = factorial(n - r);
    cout <<"Combination is :"<< a /(b*c)<<endl;
    cout << "Permutation is :" << a / c;
}else{
    cout << "Enter correct data 'r never greater than n '";
}
    
}
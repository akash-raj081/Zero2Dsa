#include<iostream>
using namespace std;

/*nth stair 
single step , double step 
no. of ways , so that the person reaches nth stair.*/

// int stair(int a ){
//     if(a<=2)
//         return a;
//     int totalways =  stair(a - 1) + stair(a - 2);
//     return totalways;
// }
// int main(){
//     int n;
//     cout << "Enter an number :" << endl;
//     cin >> n;
//    int ways = stair(n);
//    cout << ways;
// }



/*nth stair 
single step , double step, triple step 
no. of ways , so that the person reaches nth stair.*/

int stair(int a ){
    if(a<=3)
        return a;
    int totalways =  stair(a - 1) + stair(a - 2) + stair(a-3);
    return (totalways + 1);
}
int main(){
    int n;
    cout << "Enter an number :" << endl;
    cin >> n;
   int ways = stair(n);
   cout << ways;
}
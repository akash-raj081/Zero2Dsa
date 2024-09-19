#include<iostream>
using namespace std ;

// stars ka square  ******

int main(){
    int n , m;
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of coloums: ";
    cin >> m;

    for (int i = 1; i <= n;i++){
        for (int j = 0; j <= m; j++){
            cout <<"* ";
        }
        cout <<endl;
    }
}

// // number ka square 111111

// int main(){
//     int n , m;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     cout << "Enter number of coloums: ";
//     cin >> m;

//     for (int i = 1; i <= n;i++){
//         for (int j = 0; j <= m; j++){
//             cout <<i;
//         }
//         cout <<endl;
//     }
// }

// // alphabate ka square  ABCD..

// int main(){
//     int n , m;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     cout << "Enter number of coloums: ";
//     cin >> m;

//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= n; j++){
//             cout << (char)(j+64);
//         }
//         cout << endl ;
//     }
// }

// // alphabate ka square  abcd..

// int main(){
//     int n , m;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     cout << "Enter number of coloums: ";
//     cin >> m;

//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= n; j++){
//             cout << (char)(j+96);
//         }
//         cout << endl ;
//     }
// }

// // alphabate ka square  aaaa..

// int main(){
//     int n , m;
//     cout << "Enter number of rows: ";
//     cin >> n;
//     cout << "Enter number of coloums: ";
//     cin >> m;

//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= n; j++){
//             cout << (char)(i+96);
//         }
//         cout << endl ;
//     }
//}
// ----------------------------------------------***********----------------------------------------------------
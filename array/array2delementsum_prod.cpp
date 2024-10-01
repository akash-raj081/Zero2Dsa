#include<iostream>
using namespace std;

// Sum of a given 2d array matrix
// int main()
// {
//     int arr[][2] = {{45, 67}, {67, 90}, {99, 100}, {400, 78}};
//     int sum = 0;

//     for (int i = 0; i < 4;i++){
//         for (int j = 0; j < 2;j++){
//             sum +=arr[i][j];
//         }
//     }
    
//     cout <<sum << " ";
// }

// product of a given 2d array matrix 
int main()
{
    int arr[][2] = {{45, 67}, {67, 90}, {99, 100}, {400, 78}};
    int product = 1;

    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 2;j++){
            product *=arr[i][j];
        }
    }
    
    cout <<product << " ";
}

// // return the sum of the rectangle from cordinates (1,1) to (4,2);  same we can do for product 
// int main()
// {
//     int arr[][4] = {{45, 67,70,90}, {67, 90,89,51}, {99, 100,67,10}, {400,78,55,54}};
//     int sum = 0;

//     for (int i = 0; i < 4;i++){
//         for (int j = 0; j <4;j++){
//             if(j==1 || j==2){
//                 sum +=arr[i][j];
//             }
            
//         }
//     }
    
//     cout <<sum << " ";
// }

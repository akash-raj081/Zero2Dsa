/*Find the numbers of triplate whose sum is equal to the given value of X . */
#include<iostream>
using namespace std;

int main (){
    int arr[10] = {3, 2, 1, 4, 5, 6, 7, 8, 9,10};
    int s = sizeof(arr) / 4;
    int totalTriplates = 0;
    int x = 12; // It is a target value that determine the pair is valid to make triplate or not 
    for (int i = 0; i < s;i++){
        for (int j = i + 1; j < s;j++){
            for (int k = j + 1; k < s;k++){
                if(arr[i]+arr[j]+arr[k] == x){
                    totalTriplates++;
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")";
                }
            }
        }
    }
    cout << "\n Number of Triplates : " << totalTriplates;
}
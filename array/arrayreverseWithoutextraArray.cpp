#include<iostream>
using namespace std;
void reverseWithoutArray(int arr[] , int n){
    for (int i = 0; i < n;i++){
        // int temp = arr[i];
        arr[i] = arr[n - 1- i];
        // arr[n - i] = temp;
    }
}
int main(){
    int arr[] = {9, 4, 5, 6};
    int n = sizeof(arr) / 4;
    reverseWithoutArray(arr, n);
    for (int i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
}
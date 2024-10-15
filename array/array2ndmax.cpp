#include<iostream>
using namespace std;

int main(){
    int arr[7] = {7, 4, 5, 6, 7, 32, 3};
    int max = arr[0];
    int smax = INT8_MIN;
    int s = sizeof(arr) / 4;
    for (int i = 1; i < s;i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Largest element in this array is " << max << endl;

    for (int i = 1; i < s;i++){
        if (smax < arr[i] && arr[i]!=max){
            smax = arr[i];
        }
    }

    cout << "Second largest element in the array is " << smax;
}
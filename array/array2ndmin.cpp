#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 5, 5, 7, 5, 3, 4, 6};
    int min = arr[0];
    int smin = INT8_MAX;
    int s = sizeof(arr) / 4;
    for (int i = 1; i < s;i++){
        if(min>arr[i]){
            min = arr[i];
        }
    }
    cout << "smallest element in this array is " << min <<endl;

    for (int i = 1; i < s;i++){
        if(smin>arr[i] && arr[i]!=min){
            smin = arr[i];
        }
    }

    cout << "second smallest element in this array is " << smin;
}
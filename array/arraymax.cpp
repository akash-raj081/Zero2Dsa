#include<iostream>
using namespace std;

int maxArry(int arr[],int x){

    // 1st way >>>>
    // int max;
    // for (int i = 0 ;i<x;i++){
    //     if(arr[i+1] >arr[i]){
    //         max = arr[i + 1];
    //     }
    // }

    // 2nd way >>>>>
    // int mx = arr[0];
    // for (int i = 0; i < x;i++){
    //     if(mx < arr[i])
    //          mx = arr[i];
    // }

    // 3rd ways >>>>>
    int mx=arr[0];
    for (int i = 0; i < x;i++){
        mx = max(mx, arr[i]);
    }
        cout << "max is : ";
    return mx;
}

int main(){
    // int n ;
    // cout<<"enter size of array:";
    // cin>>n;
    // int arr[n];
    
    int arr[] = {4,56,7,8,9};
    int n = sizeof(arr)/4;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<maxArry(arr ,n);
}
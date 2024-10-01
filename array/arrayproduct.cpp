#include<iostream>
using namespace std;

int prodArry(int arr[],int x){
    int a = 1;
    for (int i = 0 ;i<x;i++){
        a *= arr[i];
    }
    return a;
}

int main(){
    // int n ;
    // cout<<"enter size of array:";
    // cin>>n;
    // int arr[n];
    
    int arr[] = {4,56,7,8};
    int n = sizeof(arr)/4;
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<prodArry(arr ,n);
}
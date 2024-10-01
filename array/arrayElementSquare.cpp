#include<iostream>
using namespace std;

int sumAry(int arr[],int x){
    for (int i = 0 ;i<x;i++){
        arr[i]*=arr[i];
    }
    return 0;
    
}

int main(){
    int n;
    cout<< "enter size of array ;";
    cin>>n;
    int arr[n];
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sumAry(arr ,n);
    cout <<"after square of each element > \n" ;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
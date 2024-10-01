#include <iostream>
using namespace std ;
void reverse(int arr[] , int empty[],int n ){
    for(int i =0 ;i<n ; i++){
        empty[i]=arr[n-1-i];
    }
}
int main()
{
    int n ;
    cout<<"enter size of an array";
    cin>>n;
    
    int arr[n], empty[n];
    for(int i =0 ;i<n ; i++){
        cin>>arr[i];
    }
    for(int i =0 ;i<n ; i++){
        cout<<arr[i] << " ";
    }
    reverse(arr,empty,n);
    cout<<endl;
    for(int i =0 ;i<n ; i++){
        cout<<empty[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;

int maxArry(int arr[],int x, int user_max){
    int count=0;
    int mx = user_max;
    for (int i = 0; i < x;i++){
        if(mx < arr[i]){
            count++;
        }
    }

    cout << "max number count  is : ";
    return count;
}

int main(){
    int user_max;
    cout<<"enter user max number :";
    cin>>user_max;
    int n ;
    cout<<"enter array length:";
    cin>>n;
    int arr[n];
    cout<< "enter elements of array :";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<maxArry(arr ,n,user_max);
}
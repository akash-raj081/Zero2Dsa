#include<iostream>
using namespace std;

int main(){
    int arr[] = {67, 89, 34, 30, 23, 67, 45, 89, 20, 30};
    for (int i = 0; i < (sizeof(arr)/4);i++){
        if(arr[i]<30){
            cout << i << endl;
        }
        
    }
}
#include<iostream>
using namespace std;

int main(){
    int n;
    int arr[n=5] = {4, 3, 2, 2, 4};

    for (int i = 0; i < n;i++){
        for (int j = i + 1; j < n;j++){
            if(arr[i]==arr[j]){
                cout<< arr[i]<<endl;
                break;
        }
    }
}
}
#include<iostream>
using namespace std;
// we can change array index's value in inside the main as well as  through outside function.
int change(int arr[]){
    cout << "inside change\n";
    arr[0] = 89;
}
int main(){
    int arr[] = {7, 6, 7, 8, 0};

    for (int i = 0; i <5;i++){
        cout << arr[i]<<" ";
    }
    
     change(arr);
        for (int i = 0; i <5;i++){
        cout << arr[i]<<" ";
    }
}
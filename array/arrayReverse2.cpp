#include<iostream>
using namespace std;
void reverse(int arr[] , int si , int ei ){
    for (int i = si, j = ei; i < j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return ;
}
int main(){
    int arr[8] = {4, 5, 6, 78, 9, 0, 4, 8};
    int s = sizeof(arr) / 4;
    int Rt;
    cout << "Enter number of rotation : " << endl;
    cin >> Rt;
    
    Rt = Rt % s;    

    reverse(arr,0,s-1);
    reverse(arr, 0, Rt - 1);
    reverse(arr, Rt, s - 1);

    cout << "after Reverse array is :" << endl;
    for (int i = 0; i < s;i++){
        cout << arr[i] << " ";
    }
}
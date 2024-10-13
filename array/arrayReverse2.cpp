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
    int arr[8];
    int s;
    cout << "Enter size of the array "<<endl;
    cin >> s;
    cout << "Enter array elemets :" << endl;
    for (int i = 0; i < s;i++){
        cin>>arr[i];
    }
    // int s = sizeof(arr) / 4;
    int Rt;
    cout << "Enter number of rotation : " << endl;
    cin >> Rt;
    
    Rt = Rt % s;
    cout << "Before Rotating array is : " << endl;
    for (int i = 0; i <s;i++){
        cout << arr[i] << " ";
    }

    reverse(arr,0,s-1);
    reverse(arr, 0, Rt - 1);
    reverse(arr, Rt, s - 1);

    cout << "\nafter Reverse array is :" << endl;
    for (int i = 0; i < s;i++){
        cout << arr[i] << " ";
    }
}
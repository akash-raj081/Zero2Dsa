#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,0};
    int s = sizeof(arr)/4;
    int totalpair = 0;
    int x = 9;
    for (int i = 0; i <s;i++){
        for (int j =0; j < s;j++){     //  for (int j = i+1 , j<s ,j++) it will remove duplicate or reverse pair from output.
            if((arr[i]+arr[j]==x)){
                totalpair++;
                cout << "(" << i << "," << j << ")";
            }
            else 
                continue;
        }
    }
    cout << "\nNumber of pairs : " << totalpair;
}
#include<iostream>
using namespace std;
int main()
{
    int arr[][2] = {{45, 67}, {67, 90}, {99, 100}, {400, 78}};
    int mx = INT32_MIN;

    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 2;j++){
            mx = max(mx , arr[i][j]);
        }
    }
    cout << "maximum element number in 2d array" << endl;
    cout << mx << " ";
    cout << endl;
    cout <<"minimum elemnet number in 2d array"<<endl;

    int mn = INT32_MAX;
    for (int i = 0; i < 4;i++){
        for (int j = 0; j < 2;j++){
            mn = min(mn , arr[i][j]);
        }
    }
    cout << mn << " ";

}
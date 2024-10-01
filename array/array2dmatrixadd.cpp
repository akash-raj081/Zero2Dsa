#include <iostream>
using namespace std;
int main()
{
    int arr[5][5];
    int brr[5][6];
    int crr[5][5];
    for(int i = 0 ;i<5;i++){
        for(int j = 0 ; j<5;j++){
             arr[i][j] = 10;
        }
        
    }
    
    for(int i = 0 ;i<5;i++){
        for(int j = 0 ; j<5;j++){
             brr[i][j] = 20;
             
        }
    }
    for(int i = 0 ;i<5;i++){
        for(int j = 0 ; j<5;j++){
            crr[i][j] = arr[i][j] + brr[i][j];
             
        }
    }
    
    for(int i = 0 ;i<5;i++){
        for(int j = 0 ; j<5;j++){
            cout << crr[i][j] << " ";
             
        }
        cout <<endl;
    }

    return 0;
}
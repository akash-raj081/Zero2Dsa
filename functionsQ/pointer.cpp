#include<iostream>
using namespace std;
// pass by reference 
void swap(int* x , int* y ){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int x = 57;
    int y = 90;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;
    
}
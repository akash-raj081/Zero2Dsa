#include<iostream>
using namespace std;
void towerofHanoi(int n ,char s, char h ,char d){
    if(n==0)
        return;
    towerofHanoi(n - 1, s, d, h);
    cout << s << "->" << d<<endl;
    towerofHanoi(n - 1, h, s, d);
}
int main(){
    int n ;
    cout << "Enter disk no : ";
    cin >> n;
    towerofHanoi(n, 'A', 'B', 'C');
}
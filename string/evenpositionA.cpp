#include<iostream>
using namespace std;

int main(){
    string name = "Akashi Yadav ji ";
    for (int i = 0; i < name.length();i++){
        cout << name[i];
    }
    cout << endl;
    for (int i = 0; i < name.length();i++){
        if(i%2==0 ){
            name[i] = 'a';
        }
    }
    cout << "after changes , string will be :" << endl;
    for (int i = 0; i < name.length();i++){
        cout << name[i];
    }
}
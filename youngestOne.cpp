#include<iostream>
using namespace std ;

int main(){

    int ram, shayam, ajay;
    cout << "Enter Ram age : ";
    cin >> ram ;
    cout << "Enter shayam age : ";
    cin >> shayam;
    cout << "Enter ajay age : ";
    cin >> ajay;

    if(ram>shayam){
        if(ram>ajay){
            cout << "Ram is youngest.";
        }
        else{
            cout << "Ajay is youngest.";
        }
    }
    else{
        if(shayam>ajay){
            cout << "Shayam is youngest.";
        }
        else{
            cout << "Ajay is youngest.";
        }
    }

}
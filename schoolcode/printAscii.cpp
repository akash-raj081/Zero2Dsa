#include<iostream>
using namespace std;

// print all ascii value and their equivalent character  of 26 alphabates using while loop

int main(){
    int i = 65;
    while(i <= 90){ 
        cout<< i <<"->" << char(i) << " , ";
         i++;
    }
}
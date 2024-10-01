#include<iostream>
using namespace std;

int main(){
    float cp, sp, profit, loss;
    cout << "Enter Cost price and Selling price of product :";
    cin >> cp >> sp;
    if(sp == cp)
        cout << "seller made no profit no loss . "<< sp-cp<<"rs"<<endl;
    else if (cp > sp){
        cout<< "seller made loss. "<<cp-sp<<"rs" << endl;
    }
        else
            cout << "seller made profit. "<< sp-cp<<"rs"<<endl;
}
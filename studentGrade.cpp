#include<iostream>
using namespace std;

int main(){

    int mark ;
    cout << "Enter marks :";
    cin >> mark;

    if(mark>=81 and mark<=100){
        cout << "very good";
    }
    else if(mark>=61){
        cout << "Good";
    }
    else if(mark>=41){
        cout << "Average.";
    }
    else{
        cout << "Fail , improve buddy";
    }
}
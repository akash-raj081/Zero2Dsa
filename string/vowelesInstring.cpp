#include<iostream>
using namespace std;
int main(){
    string s = "my name is akash kumar and i interested in to help weakness.";
    int count = 0;
    for (int i = 0; i < s.length();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' ){
            count++;
        }
    }

    cout << count;
}
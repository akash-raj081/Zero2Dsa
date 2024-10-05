#include<iostream>
using namespace std;

void preInpost(int n ){
    if(n==0)
        return;

    cout << "pre " << n<<endl;
    preInpost(n - 1);
    cout << "In " << n << endl;
    preInpost(n - 1);
    cout << "post " << n << endl;
    return;
}
int main(){
    int n = 2;
    preInpost(n);
}
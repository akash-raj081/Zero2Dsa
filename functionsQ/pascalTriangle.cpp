#include <iostream>
using namespace std;
int fact(int x ){
    int f=1;
    for(int i = 1 ; i <=x ;i++){
        f *=i;
    }
    return f;
}
int main()
{   int n ;
    cin >> n;
    
    cout<<"pascal triangle"<<endl;
    for(int i = 0; i <=n ;i++){
        
        for(int j = 0 ; j <n-i;j++){
            cout<<" ";
        }
        
        for (int j = 0; j<=i ;j++){             // print number wala pascal triangle 
            cout <<" " <<fact(i)/(fact(j)*fact(i-j));
            
        }
        // for (int j = 0; j<=i ;j++){             // prinit emojies wala pascal triangle
        //     cout <<" " <<(char)(fact(i)/(fact(j)*fact(i-j)));
            
        // }
        // for (int j = 0; j<=i ;j++){            // print alphabates wala pascal triangle 
        //     int r = fact(i) / (fact(j) * fact(i - j));
        //     cout <<" " <<(char)(r+64);     
        // }
        cout<<endl;
        
    }
    return 0;
}
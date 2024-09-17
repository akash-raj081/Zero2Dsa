#include<iostream>
#include<cstdlib>
using namespace std;

// count number of digit in a number ;

int main(){
    int n;
    cout << "enter a no. :";

    int count = 0;
    if(!(cin >> n)){
        cout << "Invalid input";
        return 1;
    }

    n = abs(n); // using absolute function here, to handle negative number 
    while (n!=0){
        n /= 10;
        count++;
    }

    cout << count;
    return 0;
}

// sum of digits of a number ;

int main(){
    int n;
    cout << "enter a no. :";
    
    int sum_of_digit = 0;

    if(!(cin >> n)){
        cout << "Invalid input";
        return 1;
    }
    
    n = abs(n); // using absolute function here, to handle negative number
    while (n!=0){
        sum_of_digit = sum_of_digit + (n%10);
        n /= 10;
    }

    cout << sum_of_digit;
    return 0;

}

// product of digits in given number (there won't be a zero in the number .)

int main(){
    int n;
    cout << "enter a no. :";
    
    int product_of_digits = 1;

    if(!(cin >> n)){
        cout << "Invalid input";
        return 1;
    }
    
    n = abs(n); // using absolute function here, to handle negative number

    while (n!=0){
         if(n%10 == 0){
           cout<<"a number contain zero" ;
           return 1;
        }
        product_of_digits = product_of_digits * (n%10);
        n /= 10;
    }

    cout << product_of_digits;
    return 0;

}

// product of digits of a even number .

int main(){
    int n;
    cout << "enter a no. :";
    
    int product_of_digits = 1;

    if(!(cin >> n)){
        cout << "Invalid input";
        return 1;
    }
    
    n = abs(n); // using absolute function here, to handle negative number
    if(n%2==0 && n != 0 ){ //  for even number , simillarly we code for odd digits  (n%2!=0 && n!=0)
        while (n!=0){
             if(n%10 == 0){
               cout<<"a number contain zero" ;
               return 1;
            }
            product_of_digits = product_of_digits * (n%10);
            n /= 10;
        }
    }

    cout << product_of_digits;
    return 0;

}

// sum of all the even digit of a given number .

int main(){
    int n;
    cout << "enter a no. :";
    cin>>n;
    
    int even_digits = 0;

    while(n!=0){
        
        if((n%10)%2==0) even_digits+=(n%10) ;
        n = n/10;
    }
    cout<<even_digits;
    return 0;
}

// sum of all the Odd digit of a given number .

int main(){
    int n;
    cout << "enter a no. :";
    cin>>n;
    
    int Odd_digits = 0;

    while(n!=0){
        
        if((n%10)%2!=0) Odd_digits+=(n%10) ; // little bit change in condition for odd digits .
        n = n/10;
    }
    cout<<Odd_digits;
    return 0;
}
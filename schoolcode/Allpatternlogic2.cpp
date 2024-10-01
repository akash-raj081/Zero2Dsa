#include <iostream>
using namespace std ;
/*
// * ** *** ****
// **** *** ** *  or 54321 4321 321 21 1
// **** *** ** *  or 12345 1234 123 12 1
// 1 12 123 1234 12345
// A AB ABC
// A BB CCC DDDD
// 1 22 333 4444
// 1 AB 124 ABCD 12345
// **** *** ** *  or 4 43 432 4321 
// **** *** ** *  or 12345 2345 345 45 5
// 1 ,23 ,456 ,7 8 9 10
// 1 01 101 0101 10101
// star plus pattern
// Hollow star box
// star cross pattern
// star Triangle Reverse.
// // star triangle reverse >> 1 12 123 1234 >> A AB ABC  >>A BB CCC DDDD 
// //  star rhombus 
// //  star diamond
// // star pyramid

*/
int main(){
    int n =5;
    // cout << "Enter number of rows: ";
    // cin >> n;
    // cout << "Enter number of coloums: ";
    // cin >> m;
    
//     // * ** *** ****
    
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<< "* ";
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//     // **** *** ** *  or 54321 4321 321 21 1
//     for (int i = n; i >= 1;i--){
//         for (int j = i; j >= 1; j--){
//             cout<< "* ";
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//      // **** *** ** *  or 12345 1234 123 12 1
//     for (int i = n; i >= 1;i--){
//         for (int j = 1; j <= i; j++){
//             cout<< j;
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//                  //    OR
    
//      // **** *** ** *  or 12345 1234 123 12 1
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= n-i+1; j++){  // small change -> (n-i+1)
//             cout<< j;
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
    
//     // 1 12 123 1234 12345
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<<j<<" ";
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//    // A AB ABC
    
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<<char(j+64)<<" ";
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//     // A BB CCC DDDD
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<<char(i+64)<<" ";
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//      // 1 22 333 4444
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<<i<<" ";
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//      // 1 AB 124 ABCD 12345
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             if(i%2==0){
//                 cout<<char(j+64)<<" ";
//             }
//             else {
//                 cout<<j<<" ";    
//             }
            
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
//      // **** *** ** *  or 4 43 432 4321 
//     for (int i = 1; i <= n;i++){
//         for (int j = n; j >= n-i+1; j--){  // small change -> (n-i+1)
//             cout<< j;
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
    
    
//      // **** *** ** *  or 12345 2345 345 45 5 
//     for (int i = n; i >= 1;i--){
//         for (int j = n-i+1; j <= n; j++){  // small change -> (n-i+1)
//             cout<< j;
//             // cout<<" ";
//         }
//         cout << endl ;
//     }
//     //  ------------------------------------------------************-----------------------
//     // 1 13 135 1357 13579  3 ways to print 
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<<2*j-1<<" ";
//         }
//         cout << endl ;
//     }
//     for (int i = 1; i <= n;i++){
//         int a = 1;
//         for (int j = 1; j <= 2*i-1; j+=2){
//             cout<<j<<" ";
//         }
//         cout << endl ;
//     }
//     for (int i = 1; i <= n;i++){
//         int a = 1;
//         for (int j = 1; j <= i; j++){
//             cout<<a<<" ";
//             a+=2;
//         }
//         cout << endl ;
//     }
//     //-----------------------------------------------------****************-------------------------------------------
    
//     // 1 ,23 ,456 ,7 8 9 10
//     int a = 1;
//     for (int i = 1; i <= n;i++){
//         for (int j = 1; j <= i; j++){
//             cout<<a++<<" ";
//         }
//         cout << endl ;
//     }


// // 1 01 101 0101 10101
// for(int i=1;i<=n;i++){
//     for(int j=1;j<=i;j++){
//         if((i+j)%2==0){
//             cout<<1;
//         }
//         else{
//             cout<<0;
//         }
//     }
//     cout << endl;
// }

// // star plus pattern     
//      for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n;j++){
//                   if(i==3 || j==3 ){
//                       cout<<" * ";
//                   }
//                     else{
//                         cout<<"   ";
//                     }
                        
//             }
//              cout<<endl;
//      }

// // Hollow star box
//      for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n;j++){
//                   if(i==n || j==n || j==1 || i==1  ){
//                       cout<<" * ";
//                   }
//                     else{
//                         cout<<"   ";
//                     }
                        
//             }
//              cout<<endl;
//      }

// // star cross pattern 
//      for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n;j++){
//                   if((i==j) || (j == n-i+1)){
//                       cout<<" * ";
//                   }
//                     else{
//                         cout<<"   ";
//                     }
                        
//             }
//              cout<<endl;
//      }

// // star Triangle Reverse.
//      for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n-i;j++){
//                     cout<<"   ";
//                 }
//                 for(int j=1 ;j<=i;j++){
//                     cout<<"  *";
//                 }
//                     cout<<endl;
//      }

// // star triangle reverse >> 1 12 123 1234 >> A AB ABC  >>A BB CCC DDDD

//      for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n-i;j++){
//                     cout<<" ";
//                 }
//                 for(int j=1 ;j<=i;j++){
//                     cout<<j;
//                 }
//                     cout<<endl;
//      }

//     //  star rhombus 

//          for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n-i;j++){
//                     cout<<" ";
//                 }
//                 for(int j=1 ;j<=n;j++){
//                     cout<<"  *";
//                 }
//                     cout<<endl;
//      }

//     //  star diamond 
//          for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n-i;j++){
//                     cout<<" ";
//                 }
//                 for(int j=1 ;j<=i;j++){
//                     if(i%2!=0)
//                     cout<<" *";
//                 }
//                 cout<<endl;
//      }
//      for(int i=n-1;i>=1;i--){
                 
//                 for(int j=n-i;j>=1;j--){
//                     cout<<" ";
//                 }
//                 for(int j=1 ;j<=i;j++){
//                     if(i%2!=0)
//                     cout<<" *";
//                 }cout<<endl;
//      }

//     // // star pyramid 
//          for(int i=1;i<=n;i++){
//                 for(int j=1;j<=n-i;j++){
//                     cout<<" ";
//                 }
//                 for(int j=1 ;j<=i;j++){
//                     if(i%2!=0)
//                     cout<<" *";
//                 }
//                     cout<<endl;
//      }

// // star Butterfly pattern 
//     // part 1,2 upside
    //      for(int i=1;i<=n;i++){
    //              for(int j=1 ;j<=i;j++){
    //                 cout<<" *";
    //             }
    //             for(int j=1;j<=(n-i);j++){
    //                 cout<<"  ";
    //             }
                
    //             for(int j=1;j<=n-i;j++)
    //                 cout<<"  ";
                    
    //             for(int j=1 ;j<=i;j++){
    //                 cout<<" *";
    //             }
    //                 cout<<endl;
    //  }
     
    //  // part 1,2 down 
    //      for(int i=n-1;i>=1;i--){
    //             for(int j=1 ;j<=i;j++)
    //                 cout<<" *";
    //             for(int j=1;j<=n-i;j++){
    //                 cout<<"  ";
    //             }
                
    //             for(int j=1 ;j<=n-i;j++){
    //                 cout<<"  ";
    //             }
    //             for(int j=1;j<=i;j++){
    //                 cout<<" *";
    //             }
    //               cout<<endl;
    //  }

}
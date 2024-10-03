 #include<iostream>
using namespace std;

// // mazepath  with 4 parameter .
// int maze(int cr , int cc , int er , int ec){
//     int rightways = 0;
//     int downways = 0;

//     if (cr==er && cc==ec) // at this time our current position is meet at goal position .
//         return 1;
//     if(cr==er){          // only moves rightway direction
//        rightways += maze(cr, cc + 1, er, ec);
//     }
//     if(cc==ec){         // only moves downward  direction
//        downways += maze(cr + 1, cc, er, ec);
//     }

//     if(cr<er && cc <ec){ // when our current position is not reach at goal position i.e it moves rightways or downward both .
//         rightways += maze(cr, cc+1, er, ec);
//         downways += maze(cr + 1, cc, er, ec);
//     }

//     int totalways = rightways + downways;
//     return totalways;
// }
// int main(){
//     int n = 3;
//     int m = 3;
//     cout << maze(1, 1, n, m);
// }

//  Maze path with 2 parameter .
int mazepath(int r ,int c){
    int rightway = 0, downway = 0;
    if(r==1 && c==1)
        return 1;
    if(r==1){
        rightway += mazepath(r, c - 1);
    }
    if(c==1){
        downway += mazepath(r - 1, c);
    }
    if(r>1 && c>1){
        rightway += mazepath(r, c - 1);
        downway += mazepath(r - 1, c);
    }
    int totalway = rightway + downway;
    return totalway;
}
int main(){
    int n;
    cout << "Enter number of row : ";
    cin >> n;
    int m ;
    cout << "Enter number of colum : ";
    cin >> m;
    
    cout << mazepath(n, m) << endl;
}
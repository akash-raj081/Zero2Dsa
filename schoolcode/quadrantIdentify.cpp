#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "Enter x :";
    cin >> x;
    cout << "Enter y :";
    cin >> y;

    if (x > 0 && y > 0)
    {
        cout << "Number lies on 1st quadrant.";
    }
    else if (x < 0 && y > 0)
    {
        cout << "Number lies on 2nd quadrant.";
    }
    else if (x < 0 && y < 0)
    {
        cout << "Number lies on 3rd quadrant.";
    }
    else if (x > 0 && y < 0)
    {
        cout << "Number lies on 4th quadrant.";
    }
    else if ((x < 0 && y == 0) || (x > 0 && y == 0))
    {
        cout << "Number lies on x-axis.";
    }
    else if((x==0 && y>0) || (x==0 && y<0)){
        cout << "Number lies on y-axis.";
    }
    else{
        cout << "Number lies on origin.";
    }
}
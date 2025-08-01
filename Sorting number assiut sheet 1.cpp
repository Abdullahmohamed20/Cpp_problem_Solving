#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a , b , c , small , mid , big;
    cin>> a >> b >> c;
    small = min(a,min(b,c));
    big = max(a,max(b,c)); 
    if (a == b || a== c || b==c)
    {
        if (a == b) 
            mid = b;
        else
            mid =c;    
    }
    else 
    {
        if ( a > small && a < big )
        {
            mid = a;
        }
        else if (b > small && b <big)
        {
            mid = b;
        }
        else 
            mid = c;
    }    
    cout << small << endl << mid << endl<< big<<endl <<endl;
    cout << a << endl << b << endl << c << endl;
    return 0;
}

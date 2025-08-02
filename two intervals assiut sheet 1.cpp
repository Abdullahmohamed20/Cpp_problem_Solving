#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int l1 , r1 , l2 , r2;
    cin>> l1 >> r1 >> l2 >> r2;
    int begin = max (l1 , l2);
    int end = min ( r1 , r2);
    if (end >= begin )
    {
        cout << begin << " " << end ;
    }
    else 
    {
        cout << -1;
    }
    return 0;
}

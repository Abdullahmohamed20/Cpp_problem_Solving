#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 160 , reverse =0 , num ;
    cin>> n;
    num = n;
    short range ;
    // length of number
    for (int i = 0 ; i<= 7; i++ )
    {
		    if (n<pow(10,i))
            {
            	range = i-1;
                break;
            }    
                
    }
    // reverse number
    for (int j= range; j>= 0 ; j--)
    {
    	reverse += (n%10)*pow(10,j);
        n/=10;
    }   
    cout << reverse << endl; 
    if (num == reverse) 
    	cout << "YES" << endl;
    else 
    	cout << "NO" << endl;    
    return 0;
}

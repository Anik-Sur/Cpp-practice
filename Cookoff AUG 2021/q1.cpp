#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t = 0;
    cin >> t;
    while (t--)
    {  
        long mark=0;
        cin >> mark;
        if ( 1600 > mark)
            {cout << '3' << endl;}

        else if (2000 <= mark)
            {cout << '1' << endl;}

        else if (1600 < mark < 2000)
            {cout << '2' << endl;}    
        
    }
}
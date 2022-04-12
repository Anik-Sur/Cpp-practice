#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin >> t;
    while (t--)
    {
        int n=0, a=0, b=0, c=0;
        cin >> n >> a >> b >> c;
        
        if (n > b)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (n > (a+c))
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}
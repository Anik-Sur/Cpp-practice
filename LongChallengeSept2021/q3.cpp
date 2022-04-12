#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int a[n];
        for (long long int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        int o=0,e=0,co=0,ce=0, ans=0;
        
        if (n%2== 1)
        o = (n/2) + 1;

        else
        o = (n/2);

        e = n - o;

        for (long long int i=0; i<n; i++)
        {
            if (a[i]%2==0)
            ce += 1;
        }

        co = n - ce;

        if (o < ce)
        {ans = ans + o;}

        else 
        {ans = ans + ce;}

        if (e < co)
        {ans = ans + e;}

        else
        {ans = ans + co;}

        cout << ans << endl;
    }
}
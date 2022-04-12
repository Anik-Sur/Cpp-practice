#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin >> n >> k;
        long long a[n];
        for(long long i=0;i<n;i++)
        {
            cin>>a[i];
        }
        long long int ma=a[0];
        long long int x=0;
        for(long long int i=0;i<n;i++)
        {
            ma=max(ma,a[i]);
        }
        for(long long int i=k-1;i<n;i++)
        {
            if(a[i]==ma)
            {
                x=x+(n-i);
            }
        }
        cout << x << endl;
    }
}
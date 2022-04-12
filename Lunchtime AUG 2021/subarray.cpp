#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,sum;
        cin >> n;
        sum = (n*(n+1))/2;
        if (sum%4 == 0)
        cout << n << endl;
        else
        cout << n-1 << endl;
    }
}
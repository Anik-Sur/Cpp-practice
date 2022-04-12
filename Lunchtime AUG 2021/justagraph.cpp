#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n ;
        int a[n];

        map<int , int> m;
        int x = 0;

        for(int i =0; i<n; i++)
        {
            cin >> a[i];
            m[a[i] - i - 1]++;
            if(m[a[i] - i - 1] == 1)
            {
                x++;
            }
        }
            cout << (n-x)+1 << endl;
    }
}
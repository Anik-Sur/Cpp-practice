#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a[2], a1[2], a2[2];
        
        for (int i = 0 ; i < 2 ; i++)
        {
            cin >> a[i];
        }
        for (int i = 0 ; i < 2 ; i++)
        {
            cin >> a1[i];
        }
        for (int i = 0 ; i < 2 ; i++)
        {
            cin >> a2[i];
        }
        int n = sizeof(a)/sizeof(a[0]);

        if ((a[0] == a1[0] && a[1] == a1[1]) || (a[1] == a1[0] && a[0] == a1[1]) )
        cout << "1" << endl;

        else if ((a[0] == a2[0] && a[1] == a2[1]) || (a[1] == a2[0] && a[0] == a2[1]) )
        cout << "2" << endl;

        else
        cout << "0" << endl;
    }

}
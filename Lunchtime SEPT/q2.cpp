#include <bits/stdc++.h>
using namespace std;
 int main()
 {
     int t;
     cin >> t;
     while (t--)
     {
        int n=0, a1=0, b1=0;
        cin >> n;
        int a[n/2], b[n/2];
        if (n%4 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            for (int i=1; i<=n; i++)
            {
                if (i<=n/4)
                {
                    a[a1]= i;
                    a1++;
                }
                else if (i>n/4 && i<=n-(n/4))
                {
                    b[b1]= i;
                    b1++;
                }
                else
                {
                    a[a1]= i;
                    a1++;
                }
            }

            for (int i=0; i<n/2; i++)
            {
                cout <<a[i] << " ";
            }
            
            cout << endl;
            
            for (int i=0; i<n/2; i++) 
            {
                cout <<b[i] << " ";
            }
            cout << endl;
        }
     }
 }
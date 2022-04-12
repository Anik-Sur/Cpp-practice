#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t=0;
    cin >> t;
    while (t--)
    {
        long long int n=0;
        cin >> n;
        long long int box[n];
        long long int total=0;
        for (int i=0; i<n; i++)
        {
            cin >> box[i];
        }
        long long int mini=box[0];

        for (int i=0; i<n; i++)
        {
            if (mini <= box[i])
                total += mini;
            
            else
            {
                mini = box[i];
                total += mini;
            }
        }
        cout << total << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int frailingzeros(int n)
{
    int nos = 0;
    for (int i=5; n/i>=1; i*=5)
    {
        nos += n/i;
    }
    return nos;
}
int main()
{
    int t=0;
    cin >> t;
    while (t--)
    {
        int x=0;
        cin >> x;
        int a = frailingzeros(x);
        cout << a << endl;
    }
}
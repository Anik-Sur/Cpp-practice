#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a=0,b=0,n=0,count=0;
        string s="";
        cin >> n >> a >> b >> s;

        for (int i=0; i< s.length(); i++)
        {
            if (s[i] == '0')
            {count = count + a;}
            else if (s[i] == '1')
            {count = count + b;}
        }
        cout << count << endl;
    }
}
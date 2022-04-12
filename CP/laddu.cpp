#include <bits/stdc++.h>
using namespace std;

int main(){
    int t=0;
    cin >> t;
    while (t--)
    {
        int n=0,lad=0,mon=0;
        cin >> n;
        string ac;
        string nat;
        cin >> nat;
        while (n--)
        {
            cin >> ac;
            if (ac== "CONTEST_WON")
            {
                int x=0;
                cin >> x;
                if (x<=20)
                {
                    lad += (300 + (20-x));
                }
                else
                    lad += 300;
            }
            else if (ac== "TOP_CONTRIBUTOR")
            {
                lad += 300;
            }
            else if (ac== "BUG_FOUND")
            {
                int x=0;
                cin >> x;
                lad += x;
            }
            else if (ac== "CONTEST_HOSTED")
            {
                lad += 50;
            }
        }
        if (nat== "INDIAN")
        {
            mon = floor(lad/200);
        }
        else if (nat== "NON_INDIAN")
        {
            mon = floor(lad/400);
        }
        cout << mon << endl;
    }

}
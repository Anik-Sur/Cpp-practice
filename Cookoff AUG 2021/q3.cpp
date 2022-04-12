#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string S;
        cin>>S;
        string T;
        cin>>T;
        int c1=0,c2=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(S[i]=='1')
                c1++;
        } 

         for(int i=0;i<n;i++)
            {
                if(T[i]=='1')
                    c2++;

            }
        int a = min(c1,c2);
        cout<<min(a,n/2)<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;
#define ld long double

int check(ld h,ld k,ld ax[],ld ay[],ld n)
{
    int steps=0;
    for(int j=0;j<n;j++)
    {
        ld xd=h-ax[j];
        ld yd=k-ay[j];
        if(xd==0 && yd==0)
        {
            steps+=0;
        }
        else if((xd==0 && yd!=0) || (xd!=0 && yd==0))
        {
            steps+=1;
        }
        else if(abs(xd)==abs(yd))
        {
            steps+=1;
        }
        else steps+=2;
    }
    return steps;
}

int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        ld ax[n],ay[n];
        ld h,k;
        for(int i=0;i<n;i++)
        {
            cin>>ax[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>ay[i];
        }
        int mins=INT_MAX;
        for(int i=0;i<n;i++)
        {
            for(int l=0;l<n;l++)
            {
                h=(ax[i]+ax[l])/2;
                k=(ay[i]+ay[l])/2;
                mins=min(mins,check(h,k,ax,ay,n));
                h=ax[i];
                k=ay[l];
                mins=min(mins,check(h,k,ax,ay,n));
                ld c1=ax[i]+ay[i];
                ld c2=ax[l]-ay[l];
                h=(c1+c2)/2;
                k=(c1-c2)/2;
                mins=min(mins,check(h,k,ax,ay,n));
                ld c3=ax[i]+ay[i];
                h=ax[l];
                k=c3-h;
                mins=min(mins,check(h,k,ax,ay,n));
                ld c4=ax[i]+ay[i];
                k=ay[l];
                h=c4-k;
                mins=min(mins,check(h,k,ax,ay,n));
                ld c5=ax[i]-ay[i];
                h=ax[l];
                k=h-c5;
                mins=min(mins,check(h,k,ax,ay,n));
                ld c6=ax[i]-ay[i];
                k=ay[l];
                h=c6+k;
                mins=min(mins,check(h,k,ax,ay,n));
            }
        }
        cout<<mins<<endl;
    }
}
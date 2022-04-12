#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        string s;
        cin>>n;
        cin>>s;
        int cao=0,cbo=0;
        int a=0,b=0,c=0;
        for(int i = 0; i<2*n; i++)
        {
            if(i%2==0)
            {	
                cao++;
                if(s[i]=='1')
                    {a++;}
            }
            else if(i%2!=0)
            {   
                cbo++;
                if(s[i]=='1')
                    {b++;}
            }
            
            if((a-b)>n-cbo)
            {
                cout<<i+1<<endl;
                c=1;
                break;
            }
            if((b-a)>n-cao)
            {
                cout<<i+1<<endl;
                c=1;
                break;
            }      
        
        }
        if(c==0)
        {
            cout<<2*n<<endl;
        }	
    }
}
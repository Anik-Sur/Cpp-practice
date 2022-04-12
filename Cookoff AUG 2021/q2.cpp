#include <bits/stdc++.h>
using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a=0;
        unordered_map<long long ,int> m;
        for(int i=0;i<n;i++){
            long long num;
            cin>>num;
            m[num]++;
            a=max(a,m[num]);
        }
        int num=0;
        if(n>2){
            if(a==1) 
                num=n-2;
            else 
                num=n-a;
        }
        cout<<num<<"\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, x, sum = 0, count = 0;
        cin >> n >> x;
        map<int,int> map,map1;
        for(int i = 0; i < n; i++)
        {
            int a,temp;
            cin >> a;
            map[a]++;
            temp = a^x;
            map1[temp] = map[a];
        }
        if(n==1)
        {
            cout << 1 << " " << 0 << endl;
            continue;
        }
        for(auto i: map)
        {
            if(i.second==n)
            {
                sum = n;
                break;
            }
            if(i.second>sum)
            {
                sum = i.second;
            }
        }
        if(x==0)
        {
            cout << sum << " " << count << endl;
            continue;
        }
        for(auto i: map)
        {
            if(map1.count(i.first))
            {
                if(i.second+map1[i.first]>sum)
                {
                    sum = i.second + map1[i.first];
                    count = min(i.second,map1[i.first]);
                }
                else if(i.second+map1[i.first]==sum)
                {
                    if(min(i.second,map1[i.first])<count)
                    {   
                        count = min(i.second,map1[i.first]);
                    }
                }
            }
        }
        cout << sum << " " << count << endl;
    }
}
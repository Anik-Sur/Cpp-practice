#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long int count= 0, count1=0;
        stack<char> st;

        for (long long int i=0; i< s.length(); i++)
        {
            if (s[i]== '<')
            {
                st.push('1');
            }
            else if (s[i]== '>')
            {
                if (st.empty())
                {
                    break;
                }
                else 
                {
                    st.pop();
                    count = i+1;
                }
                if (st.empty())
                {
                    count1 = count;
                }

            }
        }
        cout << count1 << endl;
    }

}
#include <bits/stdc++.h>
using namespace std;

unsigned long long int fib (int n) {
    if (n==0)
        return 0;

    vector<unsigned long long int> table(n+1,0);
    table[1]=1;
    for (int i=2; i<=n; i++){
        // table[i+1] += table[i];
        // table[i+2] += table[i];
        table[i] = table[i-1] + table[i-2];
    }
    return table[n];
}

int main(){
    int n=0;
    cout << "enter place of fibonnachi" << endl;
    cin >> n;
    unsigned long long int ans = fib(n);
    cout << ans;
}

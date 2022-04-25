#include <bits/stdc++.h>
using namespace std;

unsigned long long int fib (int n) {

    static map <int, unsigned long long int> memo;
    if (n<=2){
        return 1;
    }
    if (memo.count(n) > 0) {
        return memo[n];
    }
    else
    {
        memo[n] = fib(n-1) + fib(n-2);
        return memo[n];
    }
}

int main(){
    int n=0;
    cout << "enter place of fibonnachi" << endl;
    cin >> n;
    unsigned long long int ans = fib(n);
    cout << ans;
}

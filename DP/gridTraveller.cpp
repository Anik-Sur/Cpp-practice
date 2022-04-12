#include <bits/stdc++.h>
using namespace std;

long long int gridTraveller(int m,int n){

    static map <string ,long long int> memo;
    string key = to_string(m) + ',' + to_string(n);

    if (m==1 && n==1){
        return 1;
    }
    if (m==0 || n==0){
        return 0;
    }
    if (memo.count(key) > 0){
        return memo[key];
    }
    else
    memo[key] = gridTraveller(m-1,n) + gridTraveller(m, n-1);
    return memo[key];
}

int main(){
    int m=0;
    int n=0;
    cout << "Enter m then n" << endl;
    cin >> m >> n;
    cout << gridTraveller(m,n);
}
#include <bits/stdc++.h>
using namespace std;

long long int gridTraveller(int m, int n){
    if (n==0 || m==0)
        return 0;

    long long int grid[m+1][n+1] = {0};
    grid[1][1] = 1;
    // cout << grid[2][2] << endl;
    for (int i=1; i<=m; i++){
        for (int j=1; j<=n; j++){
            if (n>=j+1){
                grid[i][j+1] += grid[i][j];
            }
            if (m>=i+1){
                grid[i+1][j] += grid[i][j];
            }
        }
    }
    return grid[m][n];
}

int main(){
    int m=0;
    int n=0;
    cout << "Enter m then n" << endl;
    cin >> m >> n;
    cout << gridTraveller(m,n);
}
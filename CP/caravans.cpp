#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--){
        int n,speedf=0,num=0,speedp=0;
        cin >> n;
        for (int i=0; i<n; i++) {
            cin >> speedf;
            if (i==0){
                num++;
                speedp=speedf;
            }
            else if(speedf<=speedp){
                num++;
                speedp=speedf;
            }
            else {
                speedp=speedf;
            }
        }
    
        cout << num << endl;
    }
}
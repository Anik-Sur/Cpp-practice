#include <bits/stdc++.h>
using namespace std;

bool canSum (int total,int nums[], int size ){

    static map <int, bool> memo;

    if (memo.count(total) > 0){
        return memo[total];
    }
    if(total==0)
    return true;

    if(total<0)
    return false;

    for (int i=0; i< size;  i++){
        int remainder = total - nums[i];
        if (canSum(remainder, nums, size) == true){
            memo[total] = true;
            return true;
        }
    }
    memo[total]= false;
    return false;
}

int main(){

    int total =0;
    int size =0;
    cout << "enter total: ";
    cin >> total;
    cout << "enter size of array: ";
    cin >> size ;
    cout << "enter array numbers: ";
    int nums[size] = {};
    for (int i=0; i<size; i++){
        int temp = 0;
        cin >> temp ;
        nums[i] = temp;
    }
    if (canSum(total, nums, size))
    cout << "TRUE";
    else
    cout << "FALSE";
}
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> candidate;
vector<int> ds;
vector<int> shortest = {};

void bestSum(int i, int target, vector<int>& candidate, vector<vector<int>>& ans, vector<int>& ds){

    if (i == candidate.size()){
        if (target == 0){
            ans.push_back(ds);
            
            if (shortest.size()==0 || shortest.size() > ans.back().size()){
                shortest = ans.back();
            }
        }
        return;
    }
    
    if (candidate[i] <= target){
        ds.push_back(candidate[i]);
        bestSum(i , target - candidate[i], candidate, ans, ds);
        ds.pop_back();
    }
    bestSum(i+1, target, candidate, ans, ds);
}

int main(){
    int target =0;
    int size = 0;
    int temp= 0;
    cout<< "Enter target: ";
    cin >> target;
    cout << "Enter size of array: ";
    cin >> size;
    cout << "Enter array: ";

    for (int i=0; i<size; i++){
        cin >> temp;
        candidate.push_back(temp);
    }
    // cout << "SIZE " << candidate.size();

    bestSum(0, target, candidate, ans, ds);

    cout << "==============" << endl << "{ ";
    for (int i=0; i<shortest.size(); i++){
        cout << shortest[i] << " ";
    }
    cout << "}";

}
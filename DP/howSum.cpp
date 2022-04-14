#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
vector<int> candidate;
vector<int> ds;

void combinations(int i, int target, vector<int>& candidate, vector<vector<int>>& ans, vector<int>& ds){

    if (i==sizeof(candidate)){
        if (target == 0){
            ans.push_back(ds);
        }
        return;
    }

    if (candidate[i] <= target){
        ds.push_back(candidate[i]);
        combinations(i , target - candidate[i], candidate, ans, ds);
        ds.pop_back();
    }
    combinations(i+1, target, candidate, ans, ds);
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

    combinations(0, target, candidate, ans, ds);

    cout << endl << "==============" << endl;
    for (int i = 0; i < ans.size(); i++) {
        cout << "{";
        for (int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "}";
        cout << endl;
    }

}
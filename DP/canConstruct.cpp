#include <bits/stdc++.h>
using namespace std;

bool canConstruct (string word, vector<string>& wordbank){

    map<string, bool> memo;

    if (memo.count(word) > 0){
        return memo[word];
    }
    if (word == ""){
        return true;
    }

    for (int i=0; i< wordbank.size(); i++){
        if (word.find(wordbank[i])==0){
            string suf = word.substr(wordbank[i].length());
            if (canConstruct(suf, wordbank)){
                memo[word] = true;
                // cout << memo[word];
                return true;
            }
        }
    }
    memo[word] = false;
    // cout << memo[word];
    return false;
}

int main(){
    vector<string> wordbank = {"e","eee","eeeeeeee", "eeeeeeeee", "eeeeeeeeeee"};
    string word = "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeef";

    if (canConstruct(word, wordbank)){
        cout << endl << endl << "YES";
    }
    else
        cout <<endl << endl<< "NO";
}
#include <bits/stdc++.h>
using namespace std;

int canConstruct(string word, vector<string>& wordbank){

    static map <string, int> memo;
    if (memo.count(word)>0){
        return memo[word];
    }
    if (word == ""){
        return 1;
    }
    int ans = 0;
    for (int i=0; i< wordbank.size(); i++){
        if (word.find(wordbank[i]) == 0){
            string suffix = word.substr(wordbank[i].length());
            ans += canConstruct(suffix, wordbank);
        }
    }
    memo[word] = ans;
    cout << word << " " << memo[word] << endl;
    return ans;
}

int main(){
    vector <string> wordbank = {"eee", "eeeee", "eeeeeee", "eeeeeeeeeee", "e"};
    string word= "eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee";
    int fin = canConstruct(word, wordbank);
    cout << "NO OF WAYS: " << fin;
}
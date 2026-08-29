#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        int idx=-1;

        for(string word: words){
            idx++;
            for(char ch: word){
                if(ch==x){
                    ans.push_back(idx);
                    break;
                }
            }
        }

        return ans;
    }
};
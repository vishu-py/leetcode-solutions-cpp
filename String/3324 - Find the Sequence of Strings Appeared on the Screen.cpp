#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> ans;
        string s = "";

        for (char c : target) {
            s += 'a';

            for (char ch = 'a'; ch <= c; ch++) {
                s.back() = ch;
                ans.push_back(s);
            }
        }

        return ans;
    }
};
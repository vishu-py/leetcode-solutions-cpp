#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected;
        int count=0;

        for(int el: heights){
            expected.push_back(el);
        }

        sort(expected.begin(), expected.end());

        for(int i=0; i<heights.size(); i++){
            if(heights[i]!=expected[i]){
                count++;
            }
        }

        return count;
    }
};
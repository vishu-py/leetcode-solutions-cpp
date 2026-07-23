#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        for(int num: nums){
            freq[num]++;
        }

        vector<pair<int, int>> v;
        for(auto x: freq){
            v.push_back(x);
        }

        sort(v.begin(), v.end(), [](auto a, auto b){
            return a.second > b.second;
        });

        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(v[i].first);
        }

        return ans;
    }
};
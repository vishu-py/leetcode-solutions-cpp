#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void findCombination(int idx, int target, vector<int>& arr, vector<int>& ds, vector<vector<int>>& ans){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        if(idx==arr.size()){
            return;
        }
        if(arr[idx]>target){
            return;
        }
        if(arr[idx]<=target){
            ds.push_back(arr[idx]);
            findCombination(idx+1, target-arr[idx], arr, ds, ans);
            ds.pop_back();
        }
        while(idx<arr.size()-1 && arr[idx]==arr[idx+1]){
            idx++;
        }
        findCombination(idx+1, target, arr, ds, ans);
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findCombination(0, target, candidates, ds, ans);
        return ans;
    }
};
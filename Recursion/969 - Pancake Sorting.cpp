#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        vector<int> ans;

        solve(arr, arr.size(), ans);
        return ans;
    }

    void solve(vector<int>& arr, int n, vector<int>& ans){
        if(n<=1){
            return;
        }

        int maxIdx=0;
        for(int i=1; i<n; i++){
            if(arr[i]>arr[maxIdx]){
                maxIdx=i;
            }
        }

        if(maxIdx!=n-1){
            if(maxIdx!=0){
                reverse(arr.begin(), arr.begin()+maxIdx+1);
                ans.push_back(maxIdx+1);
            }
            
            reverse(arr.begin(), arr.begin()+n);
            ans.push_back(n);
        }
        
        solve(arr, n-1, ans);
    }
};
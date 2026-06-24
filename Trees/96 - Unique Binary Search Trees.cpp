#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> dp;

    int solve(int start, int end){
        if(start>end){
            return 1;
        }

        if (dp[start][end] != -1)
            return dp[start][end];

        int ans=0;
        for(int root=start; root<=end; root++){
            int left=solve(start, root-1);
            int right=solve(root+1, end);

            ans+=left*right;
        }

        return dp[start][end]=ans;
    }

    int numTrees(int n) {
        dp.assign(n+1, vector<int>(n+1, -1));
        return solve(1, n);
    }
};
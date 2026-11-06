#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> dp(n, 0);
        int mini= prices[0];

        dp[0]=0;
        for(int i=1; i<n; i++){
            dp[i]=prices[i]-mini;
            mini=min(prices[i], mini);
        }

        return *max_element(dp.begin(), dp.end());
    }
};
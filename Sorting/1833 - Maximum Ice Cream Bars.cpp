#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {

        // Sorting
        int n=costs.size();
        int maxVal= *max_element(costs.begin(), costs.end());
        vector<int> count(maxVal+1, 0);

        for(int el: costs){
            count[el]++;
        }

        int idx=0;
        for(int i=1; i<=maxVal; i++){
            while(count[i]>0){
                costs[idx]=i;
                count[i]--;
                idx++;
            }
        }

        int j=0;
        int maxCount=0;
        while(j<n && coins>=costs[j]){
            maxCount++;
            coins=coins-costs[j];
            j++;
        }

        return maxCount;
    }
};
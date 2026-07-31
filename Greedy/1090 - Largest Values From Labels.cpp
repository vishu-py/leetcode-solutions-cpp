#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
        int n=values.size();
        vector<pair<int,int>> items;

        for(int i=0;i<n;i++){
            items.push_back({values[i], labels[i]});
        }

        sort(items.begin(), items.end(), greater<pair<int,int>>());

        unordered_map<int, int> used;
        int sum=0;
        int count=0;

        for(int i=0; i<n && count<numWanted; i++){
            int value=items[i].first;
            int label=items[i].second;

            if(used[label]<useLimit){
                sum+=value;
                count++;
                used[label]++;
            }
        }
        return sum;
    }
};
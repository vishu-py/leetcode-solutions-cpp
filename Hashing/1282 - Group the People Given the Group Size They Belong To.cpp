#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();

        unordered_map<int, vector<int>> groupNo;
        vector<vector<int>> ans;

        for(int i=0; i<n; i++){
            groupNo[groupSizes[i]].push_back(i);
        }

        for(auto el: groupNo){
            int size=el.first;
            vector<int>& people= el.second;

            for(int i=0; i<people.size(); i+=size){
                vector<int> group;

                for(int j=i; j<i+size; j++){
                    group.push_back(people[j]);
                }

                ans.push_back(group);
            }
        }

        return ans;
    }
};
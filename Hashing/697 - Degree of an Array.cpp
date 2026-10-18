#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> freq;
        unordered_map<int, int> first;
        unordered_map<int, int> last;

        for(int i=0; i<nums.size(); i++){
            freq[nums[i]]++;

            if(first.find(nums[i])==first.end()){
                first[nums[i]]=i;
            }

            last[nums[i]]=i;
        }

        int deg=0;
        for(auto p: freq){
            deg=max(deg, p.second);
        }

        int ans=nums.size();

        for(auto p: freq){
            if(p.second==deg){
                int x= p.first;
                int len= last[x]-first[x]+1;
                ans=min(ans, len);
            }
        }

        return ans;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;

        int pos=0;
        int neg=0;

        while(ans.size()<n){
            while(nums[pos]<0){
                pos++;
            }

            while(nums[neg]>0){
                neg++;
            }

            ans.push_back(nums[pos]);
            ans.push_back(nums[neg]);

            pos++;
            neg++;
        }

        return ans;

    }

};
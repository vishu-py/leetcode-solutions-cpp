#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size();
        vector<int> ans;
        int idx1=0;
        int idx2=n-1;

        while(idx1<idx2){
            if(numbers[idx1]+numbers[idx2]==target){
                ans.push_back(idx1+1);
                ans.push_back(idx2+1);
                return ans;
            }
            else if(numbers[idx1]+numbers[idx2]<target){
                idx1++;
            }
            else{
                idx2--;
            }
        }

        return ans;
    }
};
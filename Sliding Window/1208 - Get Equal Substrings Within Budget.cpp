#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        vector<int> diff(s.size(), 0);
        int count=0;

        for(int i=0; i<s.size(); i++){
            diff[i]=abs(s[i]-t[i]);
        }

        int left=0;
        int right=left;
        int sum=0;
        int maxLen=0;

        while(right<s.size()){
            sum+=diff[right];

            while(sum>maxCost){
                sum-=diff[left];
                left++;
            }
 
            maxLen=max(maxLen, right-left+1);
            right++;
        }

        return maxLen;
    }
};
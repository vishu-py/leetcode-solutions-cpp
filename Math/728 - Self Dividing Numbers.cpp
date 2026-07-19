#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i=left; i<=right; i++){
            int num=i;
            bool found=true;
            while(num>0){
                int digit=num%10;

                if(digit==0){
                    found=false;
                    break;
                }

                if(i%digit!=0){
                    found=false;
                    break;
                }
                num=num/10;
            }

            if(found)
                ans.push_back(i);
        }

        return ans;
    }
};
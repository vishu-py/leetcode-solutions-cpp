#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        long long hg=*max_element(piles.begin(), piles.end());
        int k=hg;

        while(l<=hg){
            int mid=l+(hg-l)/2;
            long long hours=0;
            for(int pile: piles){
                hours+= (pile+mid-1)/mid;
            }
            if(hours<=h){
                k=mid;
                hg=mid-1;
            }
            else{
                l=mid+1;
            }
            
        }
        return k;
    }
};
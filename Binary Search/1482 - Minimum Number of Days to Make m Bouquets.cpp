#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int l=1;
        int h=*max_element(bloomDay.begin(), bloomDay.end());
        int min=-1;

        if((long long)m * k > bloomDay.size()){
            return -1;
        }

        while(l<=h){
            int mid=l+(h-l)/2;
            int consecutive=0;
            int bouquet=0;
            for(int i=0; i<n; i++){
                if(bloomDay[i]<=mid){
                    consecutive++;
                }
                else{
                    consecutive=0;
                }
                if(consecutive==k){
                    bouquet++;
                    consecutive=0;
                }
            }
            if(bouquet>=m){
                min=mid;
                h=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return min;
    }
};
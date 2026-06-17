#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int p=0;
        int q=height.size()-1;
        long long area=0;

        while(p<q){
            long long temp=(q-p)*(min(height[p], height[q]));
            area=max(area, temp);
            if(height[p]<height[q]){
                p++;
            }
            else{
                q--;
            }
        }
        return (int)area;
    }
};
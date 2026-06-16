#include <bits/stdc++.h>
using namespace std;

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        long long h=n;
        long long ans=h;
        while(l<=h){
            long long mid=l+(h-l)/2;
            if(isBadVersion(mid)==false){
                l=mid+1;
            }
            else{
                ans=mid;
                h=mid-1;
            }
        }

        return (int)ans;
    }
};
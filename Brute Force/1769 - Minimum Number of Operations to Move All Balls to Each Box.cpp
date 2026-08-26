#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n=boxes.size();
        int l=0;
        int r=0;
        vector<int> answer(n, 0);

        while(l<n){
            r=0;
            while(r<n){
                if(boxes[r]=='1'){
                    answer[l]+=abs(r-l);
                }
                r++;
            }
            l++;
        }

        return answer;
    }
};
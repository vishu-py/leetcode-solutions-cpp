#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxDistinct(string s) {
        int n=s.size();
        unordered_map<char, int> seen;
        int count=0;

        for(int i=0; i<n; i++){
            if(seen[s[i]]==0){
                seen[s[i]]=1;
                count++;
            }
        }

        return count;
    }
};
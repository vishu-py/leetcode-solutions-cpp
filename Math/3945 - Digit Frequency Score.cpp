#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int digitFrequencyScore(int n) {
        int d=n;
        int score=0;
        while(d>0){
            score+=d%10;
            d=d/10;
        }

        return score;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        else if(n>=1000 && n<=99999){
            return n-999;
        }

        return 99000+1;
    }
};
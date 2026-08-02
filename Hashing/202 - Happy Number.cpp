#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int, bool> map;

        int num=n;
        while(num!=1){
            n=0;
            while(num>0){
                int digit= num%10;
                n+= digit*digit;
                num=num/10;
            }

            if(map[n]==true){
                return false;
            }

            map[n]=true;
            num=n;
        }

        return true;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rotatedDigits(int n) {
        int count=0;

        if(n==1){
            return count;
        }

        for(int i=2; i<=n; i++){
            int valid=0;
            int changes=0;
            string num= to_string(i);

            for(int j=0; j<num.size(); j++){
                int digit=num[j]-'0';
                if(digit==0 || digit==1 || digit==8){
                    valid++;
                }
                else if(digit==2 ||digit==5){
                    valid++;
                    changes++;
                }
                else if(digit==6 ||digit==9){
                    valid++;
                    changes++;
                }
                else{
                    break;
                }
            }

            if(changes>=1 && valid==num.size()){
                count++;
            }
        }
        return count;
    }
};
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n,true);

        if(n<=2){
            return 0;
        }

        prime[0]=false;
        prime[1]=false;
        int count=0;

        for(int i=2; i*i<n; i++){
            if(prime[i]){
                for(long long j=i*i; j<n; j+=i){
                    prime[j]=false;
                }
            }
            else{
                continue;
            }
        }

        for(int i=0; i<n; i++){
            if(prime[i]==true){
                count++;
            }
        }

        return count;
    }  
};
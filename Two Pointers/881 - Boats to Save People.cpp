#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int count=0;

        sort(people.begin(), people.end());
        int p=0;
        int q=people.size()-1;

        while(p<=q){
            if(people[q]==limit){
                count++;
                q--;
            }
            else if(people[p]+people[q]<=limit){
                count++;
                p++;
                q--;
            }
            else{
                count++;
                q--;
            }
        }

        return count;
    }
};
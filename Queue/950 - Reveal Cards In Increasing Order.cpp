#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n=deck.size();
        vector<int> ans(n);

        sort(deck.begin(), deck.end());

        queue<int> q;
        for(int i=0; i<n; i++){
            q.push(i);
        }

        for(int i=0; i<n; i++){
            int idx=q.front();
            q.pop();

            ans[idx]=deck[i];
            if(!q.empty()) {
                q.push(q.front());
                q.pop();
            }
        }

        return ans;
    }
};
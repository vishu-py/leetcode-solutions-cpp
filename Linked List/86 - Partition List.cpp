#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* h1=NULL;
        ListNode* h2=NULL;
        ListNode* t1=NULL;
        ListNode* t2=NULL;

        ListNode* curr=head;
        
        while(curr!=NULL){
            if(curr->val<x){
                if(h1==NULL){
                    h1=curr;
                    t1=curr;
                }
                else{
                    t1->next=curr;
                    t1=t1->next;
                }
            }
            else{
                if(h2==NULL){
                    h2=curr;
                    t2=curr;
                }
                else{
                    t2->next=curr;
                    t2=t2->next;
                }
                
            }
            curr=curr->next;
        }

        if(t2 != NULL)
            t2->next = NULL;

        if(h1 == NULL)
            return h2;

        t1->next=h2;
        return h1;
    }
};
#include <bits/stdc++.h>
using namespace std;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        int leftHeight=height(root->left);
        int rightHeight=height(root->right);

        if(abs(leftHeight-rightHeight)>1){
            return false;
        }
        
        return isBalanced(root->left) && isBalanced(root->right);
    }

    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }

        int leftHt=height(root->left);
        int rightHt=height(root->right);

        return max(leftHt, rightHt)+1;
    }
};
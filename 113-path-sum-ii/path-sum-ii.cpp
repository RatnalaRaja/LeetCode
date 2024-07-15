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
    void helper(TreeNode* root,vector<vector<int>>&patu,vector<int>&sumu,int sum){
        if(root==nullptr)return;
        sumu.push_back(root->val);
        if(root->left==NULL and  root->right==NULL and sum==root->val) patu.push_back(sumu);
        if(root->left!=NULL)helper(root->left,patu,sumu,sum-root->val);
        if(root->right!=NULL)helper(root->right,patu,sumu,sum-root->val);
        sumu.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>patu;
        vector<int>sumu;
        helper(root,patu,sumu,targetSum);
        return patu;
        
    }
};
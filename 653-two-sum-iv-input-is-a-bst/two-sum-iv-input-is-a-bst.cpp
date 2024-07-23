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
      void Inord(TreeNode* root,vector<int>&v){
        if (root==nullptr)return;
        Inord(root->left,v);
        v.push_back(root->val);
        Inord(root->right,v);
    }
    bool findTarget(TreeNode* root, int target) {
        vector<int>v;
        Inord(root,v);
        int s=0;
        int e=v.size()-1;
        while(s<e){
            int sum=v[s]+v[e];
            if(sum<target){
                s++;
            }
            else if (sum>target){
                e--;
            }
            else{
                return true;
            }
        }
        return false;
    }
};
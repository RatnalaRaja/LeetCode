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
    void inord(TreeNode* root,int &s){
        if(root==nullptr)return;
        inord(root->right,s);
        s+=root->val;
        root->val=s;
        inord(root->left,s);
    }
    TreeNode* convertBST(TreeNode* root) {
        int s=0;
        inord(root,s);
        return root;
    }
};
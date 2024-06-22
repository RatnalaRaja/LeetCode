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

    int maxD(TreeNode* root,int &maxi){

        if(root==NULL)return 0;

        int left=max(0,maxD(root->left,maxi));
        int rightt=max(0,maxD(root->right,maxi));

        maxi=max(maxi,left+rightt+root ->val);

        return max(left,rightt)+root->val;

    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxD(root,maxi);
        return maxi;
    }
};
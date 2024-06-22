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
        return maxDepth(root)!=-1;
    }
    int maxDepth(TreeNode* root){
        if(root == NULL)return 0;
        int lf=maxDepth(root->left);
        //if(lf==-1)return -1;
        int rf=maxDepth(root->right);
        if(rf==-1 or lf==-1)return -1;

        if(abs(lf-rf)>1)return -1;
        return max(lf,rf) +1 ;

    }
};
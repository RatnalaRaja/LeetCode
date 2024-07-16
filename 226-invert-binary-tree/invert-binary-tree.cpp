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
    void Swaptree(TreeNode* swapp){
        if(swapp==NULL)return;
        Swaptree(swapp->left);
        Swaptree(swapp->right);

        TreeNode*swapuu;
        swapuu=swapp->left;
        swapp->left=swapp->right;
        swapp->right=swapuu;
    }
    TreeNode* invertTree(TreeNode* root) {
        Swaptree(root);
        return root;
    }
};
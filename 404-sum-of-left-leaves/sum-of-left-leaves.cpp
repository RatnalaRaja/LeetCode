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
    void sumii(TreeNode* root,int &sum){
        if(root==NULL) return;


        if (root->left != nullptr && root->left->left == nullptr && root->left->right == nullptr) {
            sum += root->left->val;
        }

        
            sumii(root->left,sum);
            sumii(root->right,sum);
    }

    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        sumii(root,sum);
        return sum;
    }
};
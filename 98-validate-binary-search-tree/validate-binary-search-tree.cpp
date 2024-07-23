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
    bool solv(TreeNode* root,long long int mini,long long int maxi){
        if(root==NULL)return true;

        if(root->val>mini && root->val<maxi){
            bool lefti=solv(root->left,mini,root->val);
            bool right=solv(root->right,root->val,maxi);
            return lefti && right;
        }
        else{
            return false;
        }
    }

    bool isValidBST(TreeNode* root) {
        long long int maxi=LLONG_MAX;
        long long int mini=LLONG_MIN;
        bool checked=solv(root,mini,maxi);
        return checked;
    }
};
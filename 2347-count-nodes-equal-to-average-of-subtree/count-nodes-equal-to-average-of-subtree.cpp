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
    void solve(TreeNode* root,int &res,int &sum,int &count){
        if(root==NULL){
            sum=0;
            count=0;
            return;
        }
        int left=0,right=0,lsum=0,rsum=0;
        solve(root->left,res,lsum,left);
        solve(root->right,res,rsum,right);
        sum=lsum+rsum+root->val;
        count=left+right+1;
        if((sum/count)==root->val)res++;
    }
    int averageOfSubtree(TreeNode* root) {
        int res=0;
        int sum=0;
        int count=0;
        solve(root,res,sum,count);
        return res;
    }
};
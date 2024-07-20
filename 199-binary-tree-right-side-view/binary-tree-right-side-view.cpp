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
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        if(root==NULL)return ans;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            int righti;
            for(int i=0;i<s;i++){
            TreeNode*temp=q.front();q.pop();
            if(temp->left)q.push(temp->left);
            if(temp->right)q.push(temp->right);
            righti=temp->val;
            }
            ans.push_back(righti);

        }
        return ans;
    }
};
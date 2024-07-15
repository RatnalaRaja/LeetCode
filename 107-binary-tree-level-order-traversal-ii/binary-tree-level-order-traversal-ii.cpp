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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>lOb;
        queue<TreeNode*>q;
        q.push(root);
        if(root==NULL)return lOb;

        while(!q.empty()){
            vector<int>v;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* node=q.front();q.pop();
                v.push_back(node->val);
                if(node->left!=nullptr)q.push(node->left);
                if(node->right!=nullptr)q.push(node->right);
                
                
            }
            lOb.push_back(v);
            
        }
        reverse(lOb.begin(),lOb.end());
        return lOb;
    }
};
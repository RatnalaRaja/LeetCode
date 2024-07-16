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
    TreeNode* buildi(vector<int>& preorder,int preps,int prepe, vector<int>& inorder,int inst,int inee,unordered_map<int,int>&mp){
        if(preps>prepe or inst>inee)return nullptr;
        TreeNode* root= new TreeNode(preorder[preps]);
        int root_indi=mp[preorder[preps]];
        int n_left=root_indi-inst;
        root->left=buildi(preorder,preps+1,prepe+n_left,inorder,inst,root_indi-1,mp);
        root->right= buildi(preorder,preps+n_left+1,prepe,inorder,root_indi+1,inee,mp);
        return root;

    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=inorder.size();
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[inorder[i]]=i;
        }
        return buildi(preorder,0,n-1,inorder,0,n-1,mp);
    }
};
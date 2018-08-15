/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        
        if(root == 0)
            return vector<int>();
            
        vector<int> res;
        
        res.push_back(root->val);
        vector<int> p = preorderTraversal(root->left);
        for(int i=0;i<p.size();i++)
            res.push_back(p[i]);
        
        vector<int> q = preorderTraversal(root->right);
        for(int j=0;j<q.size();j++)
            res.push_back(q[j]);
        
        return res;
    }
};
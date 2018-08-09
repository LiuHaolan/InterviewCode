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
    vector<int> inorderTraversal(TreeNode* root) {
        
        if(root == 0)
            return vector<int>();
        
        vector<int> s;
        
        vector<int> left = inorderTraversal(root->left);
        for(auto it = left.begin();it!=left.end();it++)
            s.push_back(*it);
        s.push_back(root->val);
        vector<int> right = inorderTraversal(root->right);
         for(auto it = right.begin();it!=right.end();it++)
            s.push_back(*it);
     
        return s;
    }
};
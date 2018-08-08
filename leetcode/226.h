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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)
            return 0;
        
        TreeNode* tmp;
        if(root->right)
            tmp = root->right;
        if(root->left)
            root->right = invertTree(root->left);
        else
            root->right = 0;
        if(tmp)
            root->left = invertTree(tmp);
        else
            root->left = 0;
        
        return root;
        
    }
};
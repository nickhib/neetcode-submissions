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
    int helper(TreeNode* root)
    {
        if(!root)
            return 0;

        int left = helper(root->left);
        int right = helper(root->right);

        return right > left ? right+1 : left+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int right = helper(root->right);
        int left = helper(root->left);
        if(abs(right-left) >1)
            return false;
        

        return isBalanced(root->left) && isBalanced(root->right);
    }
};

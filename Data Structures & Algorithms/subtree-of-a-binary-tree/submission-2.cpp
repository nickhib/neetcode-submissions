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
    bool helper(TreeNode* tree1, TreeNode* subRoot)
    {
        if(!tree1 && !subRoot)
            return true;
        if(!tree1 || !subRoot)
        {
            return false;
        }
        if(tree1->val != subRoot->val)
        {
            return false;
        }
        bool right = helper(tree1->right, subRoot->right);
        bool left = helper(tree1->left,subRoot->left);
        return right && left;
     
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(!root)
        {
            return false;
        }
        if(helper(root,subRoot))
            return true;

       return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};

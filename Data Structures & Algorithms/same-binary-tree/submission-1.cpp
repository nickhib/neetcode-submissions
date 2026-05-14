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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(!p && !q)
        {
            return true;
        }
        if(!p || !q)
            return false;
        bool left = isSameTree(p->left,q->left);
        bool right = isSameTree(p->right, q->right);

        return (p->val == q->val)&& left && right;
    }
    /*
        basically we compare the nodes of both trees if both are null at the same time
        then we can return true because they are the same.
        however what if one is null and the other isnt.
         the next null condition check if either one is null so if one is null and the
         other isnt we return false;
         we then use recursion to go left then right
         we can then return a condition that checks the q and p values to make sure
         they are equal, and a condition to make sure the left and right trees are 
         true or false
    */
};

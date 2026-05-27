# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def helper(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not root and not subRoot:
            return True;
        if not root or not subRoot:
            return False;
        if root.val != subRoot.val:
            return False;

        right = self.helper(root.right,subRoot.right);
        left = self.helper(root.left,subRoot.left);
        return right and left;
    
        
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if not root:
            return False;
        if self.helper(root,subRoot):
            return True;

        return self.isSubtree(root.right, subRoot) or self.isSubtree(root.left,subRoot);

        
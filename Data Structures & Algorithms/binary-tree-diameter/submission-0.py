# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    count = -1
    def helper(self,root: Optional[TreeNode]) -> int:
        if root is None:
            return 0
        left = self.helper(root.left)
        right = self.helper(root.right)
        self.count = max(self.count, (left+right))
        return max(left,right)+1


    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        one = self.helper(root)

        return self.count
        
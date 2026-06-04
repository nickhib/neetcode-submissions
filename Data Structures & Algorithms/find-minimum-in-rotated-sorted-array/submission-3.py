class Solution:
    def findMin(self, nums: List[int]) -> int:
        stack = []
        for c in nums:
            if not stack:
                stack.append(c)
            if stack[-1] > c:
                stack.append(c)
        return stack[-1]
        
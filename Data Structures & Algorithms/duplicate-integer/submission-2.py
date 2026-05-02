class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        keys = {}
        for n in nums:
            if n not in keys:
                keys[n] = 1
            else:
                return True
        return False 
        
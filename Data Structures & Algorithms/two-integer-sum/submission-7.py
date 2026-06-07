class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        check = {}
        for i in range(len(nums)):
            check[nums[i]] = i
        for i in range(len(nums)):
            if (target - nums[i]) in check and check[(target- nums[i])] != i:
                return ([i,check[(target-nums[i])]])
        return []

        
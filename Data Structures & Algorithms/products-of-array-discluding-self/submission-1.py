class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        
        answer = []
        for i in range(len(nums)):
            cur = 1
            for j in range(len(nums)):
                if j == i :
                    continue
                cur *= nums[j]
            answer.append(cur)
        return answer

                

        
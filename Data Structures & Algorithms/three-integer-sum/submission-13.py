class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        answer = []
        for i ,val in enumerate(nums):
            if val > 0:
                break;
            if i>0 and val == nums[i-1]:
                continue
            r = len(nums)-1
            l = i+1
            while(l < r):
                sub = val + nums[l]+nums[r]
                if sub < 0:
                    l+=1
                elif sub > 0:
                    r-=1
                else:
                    answer.append([val ,nums[l],nums[r]])
                    l+=1
                    r-=1
                    while nums[l] == nums[l-1] and l <r:
                        l+=1
        return answer

  
        



        
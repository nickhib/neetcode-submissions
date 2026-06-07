class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        umap = {}
        for n in nums:
            umap[n] = 1
        maxL = 0
        for n in nums:
            i = 1
            length = 1
            while n+i in umap:
                length += 1
                i += 1
            if maxL < length:
                maxL = length
        return maxL


        

        
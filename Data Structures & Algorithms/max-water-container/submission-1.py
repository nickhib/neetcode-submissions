class Solution:
    def maxArea(self, heights: List[int]) -> int:

        r = len(heights)-1
        l = 0
        maxArea = 0
        while l < r:
            height = min(heights[l],heights[r])
            width = r-l;
            area = height*width
            if heights[l] > heights[r]:
                r-=1
            elif heights[r] > heights[l]:
                l+=1
            else:
                l+=1
                r-=1
            if area > maxArea:
                maxArea = area
            

        return maxArea

        
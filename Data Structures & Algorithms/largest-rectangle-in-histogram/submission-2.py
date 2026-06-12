class Solution:
    def largestRectangleArea(self, heights: List[int]) -> int:
        stack = []
        maxArea = 0;
        for i,val in enumerate(heights):
            start =i; 
            while stack and stack[-1][1] > val:
                index, height = stack.pop()
                width = (i - index)
                area = height*width
                if area >= maxArea:
                    maxArea = area
                start = index
            stack.append((start,val))
        for i, h in stack:
            maxArea = max(maxArea, h*(len(heights)-i))
        return maxArea

                

                

                


        
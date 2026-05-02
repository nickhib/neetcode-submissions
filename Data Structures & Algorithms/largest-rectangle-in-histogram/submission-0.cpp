

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> uconsid;
        int n = heights.size();
        int maxArea =0;
        for(int i =0; i <= heights.size();i++)
        {
            while(!uconsid.empty() && (i==n||heights[uconsid.top()] >= heights[i]))
            {
                int height = heights[uconsid.top()];
                uconsid.pop();
                int width = uconsid.empty() ? i : i - uconsid.top()-1;
                int area = height*width;
                maxArea = max(area, maxArea);
            }
            uconsid.push(i);
        }
        return  maxArea;

        
    }
};

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> left(height.size(),0);
        vector<int> right(height.size(),0);
        if(height.size() < 2)
            return 0;
        int h =1;
        int j = height.size()-2;
        left[0] = height[0];
        right[height.size()-1] = height[height.size()-1];
        while(h < height.size())
        {
            left[h] = max(height[h],left[h-1]);
            right[j] = max(height[j],right[j+1]);
            h++;
            j--;
        }
        int maxArea = 0;
        for(int i=0;i <height.size();i++)
        {
            int area = min(left[i],right[i]) - height[i];
            if(area >= 0)
                maxArea+= area;
        }
        return maxArea;
    }
};

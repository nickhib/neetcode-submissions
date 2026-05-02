class Solution {
public:
    int maxArea(vector<int>& heights) {

        stack<int> s;
        int l = 0, r= heights.size()-1;
        int mArea = 0;

        while(l < r)
        {
            int area = 0;
            int width = 1;
            int height = 0;
            cout << heights[l] << " " << heights[r] << endl;
            height = min(heights[l],heights[r]);
            width = (r-l);
            area = height *width;
            cout << area << endl;
            if(heights[l] > heights[r])
            {
                r--;
            }
            else if(heights[r] > heights[l])
            {
                l++;
            }
            else
            {
                l++;
                r--;
            }
            
            if(area > mArea)
                mArea = area;
        }
        return mArea;

        
    }
};

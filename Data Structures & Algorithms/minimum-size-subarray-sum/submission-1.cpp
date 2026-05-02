class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l = 0;
        int r = 0;
        int minLength = INT_MAX;
        int sum = nums[0];
        while(r< nums.size())
        {
            if(sum >= target)
            {
                minLength = min(minLength,((r+1)-l));
                sum -= nums[l];
                l++;
            }
            else
            {
                r++;
                sum+=nums[r];
            }

        }
        if(minLength > nums.size())
            return 0; 
        return minLength;
    }
};
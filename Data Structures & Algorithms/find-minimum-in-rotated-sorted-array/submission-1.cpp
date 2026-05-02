class Solution {
public:
    int findMin(vector<int> &nums) {
        int high = nums.size()-1;
        int low = 1;
        int min = nums[0];
        for(int i =1; i < nums.size();i++)
        {
            if(nums[i-1] > nums[i])
            {
                return nums[i] < nums[0] ? nums[i] : nums[0];
            }
        }
        return nums[0];
        
    }
};

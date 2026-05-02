class Solution {
public:
    int findMin(vector<int> &nums) {
        int high = nums.size()-1;
        int low = 0;
        int min1 = nums[0];
        while(high >= low)
        {
            if(nums[low] < nums[high]){
                min1 =min(min1,nums[low]);
            }
            int mid = low + (high-low)/2;
            if(nums[mid] < min1)
            {
                min1 = nums[mid];
            }
            if(nums[mid]>= nums[low])
            {
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return min1;
    }
};

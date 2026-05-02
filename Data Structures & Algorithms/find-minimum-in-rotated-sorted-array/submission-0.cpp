class Solution {
public:
    int findMin(vector<int> &nums) {
        int high = nums.size()-1;
        int low = 1;
        int min = nums[0];
        sort(nums.begin(),nums.end());
        return nums[0];
        
    }
};

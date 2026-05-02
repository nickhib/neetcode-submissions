class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> umap;
        for(int i =0; i <nums.size();i++)
        {
            if(!umap.count(nums[i]))
            {
                umap[nums[i]];
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};
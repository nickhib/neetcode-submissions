class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(),nums.end());

        return uset.size() < nums.size();

    }
};
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> uset;
        for(int i :nums)
        {
            if(uset.contains(i))
            {
                return i;
            }
             uset.insert(i);
        }
        return -1;
        
    }
};

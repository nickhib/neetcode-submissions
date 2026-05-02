class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
            return 0;
        sort(nums.begin(),nums.end());
        int count =1;
        int maxcount =1;
        vector<int> check;
        unordered_map<int, int> umap;
        for(int n : nums)
        {
            if(!umap.count(n))
            {
                umap[n];
                check.push_back(n);
            }
        }
        if(check.size()>1)
        for(int i = 1 ; i < check.size();i++)
        {
            int prev = check[i-1];

            if(check[i] - prev == 1)
            {
                count++;
            }
            else
            {
                if(count > maxcount)
                    maxcount = count;
                count =1;
            }

            
        }
        else{
            return 1;
        }
        if(count > maxcount)
        {
            maxcount = count;
        }
        return maxcount;
        
    }
};

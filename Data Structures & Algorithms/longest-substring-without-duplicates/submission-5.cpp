class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> check;
        int maxCount =0;
        int l = 0;
        for(int r =0;r < s.size();r++)
        {
            if(check.count(s[r]) ==0)
            {
                check.insert(s[r]);
            }
            else
            {
                maxCount = max(maxCount,(int)check.size());
                while(check.count(s[r]) > 0)
                {
                    auto itr = check.find(s[l]);
                    check.erase(itr);
                    l++;
                }
                check.insert(s[r]);
            }
            
        }
        maxCount = max(maxCount,(int)check.size());
     
        return maxCount;
        
    }
};

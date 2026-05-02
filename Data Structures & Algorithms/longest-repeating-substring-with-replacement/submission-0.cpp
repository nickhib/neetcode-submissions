class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int,int> umap;
        char maxLet;
        int maxCount = 0;
        int l =0;
        int maxAns = 0;
        for(int r = 0;  r< s.size();r++)
        {
            umap[s[r]]++;
            if(umap[s[r]] > maxCount)
            {
                maxCount = umap[s[r]];
                maxLet = s[r];
            }
            if(((r-l)+1) - maxCount  <= k)
            {
                maxAns = max(maxAns,(r-l)+1);
            }
            else
            {
                if(s[l] == maxLet)
                {
                    maxCount--;
                }
                umap[s[l]]--;
                l++;
            }
        }
        return maxAns;    
    }
};

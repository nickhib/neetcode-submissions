class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,int> umap;
        vector<string> secondStr;
        int count= 0;
        for(int i = 0; i < strs.size();i++)
        {
            string words = strs[i];
            sort(words.begin(),words.end());
            secondStr.push_back(words);
        }
        for(int i =0; i < secondStr.size();i++)
        {
            if(!umap.count(secondStr[i]))
            {
                umap[secondStr[i]] = count;
                count++;
            }
        }
        vector<vector<string>> answer(count);
        for(int i =0;i<strs.size();i++)
        {
            answer[umap[secondStr[i]]].push_back(strs[i]);
        }
        return answer;
    
        
    }
};

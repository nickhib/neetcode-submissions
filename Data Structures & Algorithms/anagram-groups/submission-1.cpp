class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> umap;
        vector<vector<string>> answer;
        for(string s : strs)
        {
           string cur = s;
            sort(cur.begin(),cur.end());
           umap[cur].push_back(s);
        }
        for(auto pair : umap)
        {
            answer.push_back(pair.second);
        }
        return answer;

    }
  
    

};

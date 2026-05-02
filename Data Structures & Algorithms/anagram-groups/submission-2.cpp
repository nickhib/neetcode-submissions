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
    /*
        to find an anagram we can rely on the nature of maps; 
        using a unordered map we can look at each string in the vector;
        and determine if we can group them together a simple method for
        this is to sort each string that way all anagram strings will become =
        when we do this we can push them onto a map. this means
        we will only have as many keys as we do different anagrams
        so we can then cycle through the map and add all vectors
        or subgroups to the vector. then return. 
    
    */
  
    

};

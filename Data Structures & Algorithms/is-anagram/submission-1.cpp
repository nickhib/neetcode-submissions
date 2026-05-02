class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        unordered_map<char,int> umap1;
        unordered_map<char,int> umap2;
        int i =0;
        while(i < s.size() && i < t.size())
        {
                umap1[s[i]]++;
                umap2[t[i]]++;
                cout << s[i] << " " << t[i] << endl;
            i++;
        }

        for(int j = 0; j <t.size();j++)
        {
            if(umap2[s[j]] != umap1[s[j]]){
                return false;
            }

        }
        return true;
        
        
    }
};

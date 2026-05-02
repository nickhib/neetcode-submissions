class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> umap;
        unordered_map<char,int> check;
        int need = 0;
        for(int i =0; i < t.size();i++)
        {
            if(!umap.count(t[i]))
            {
                check[t[i]]=0;
                need++;
            }
            umap[t[i]]++;
        }// now we have the letters and freq
        int l = 0;
        int length = s.size()+1;
        string minWin = "";


        for(int r = 0; r < s.size();r++)
        {
            if(umap.count(s[r])){
            check[s[r]]++;
                if(check[s[r]] == umap[s[r]])
                {
                    need--;
                }
            }
            while(need == 0&& l <= r)
            {
                if(length > r-l+1)
                {
                    length = r-l+1;
                    minWin = s.substr(l,length);
                }
                if(umap.count(s[l])){
                    if(check[s[l]] >= umap[s[l]])
                    {
                        check[s[l]]--;
                        cout << s[l] << endl;
                        if(check[s[l]] < umap[s[l]])
                        {
                            need++;
                        }
                    }
                }
                    l++;
            }
        }

        cout << length << endl;
        return minWin;
    }
};

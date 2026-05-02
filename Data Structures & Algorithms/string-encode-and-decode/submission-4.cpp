class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty())
            return "";
        string answer = "";
        
        for(int i = 0; i < strs.size();i++)
        {
            answer+= to_string(strs[i].size());
                answer+=",";
        }
        answer+= "#";
        for(int i =0;i < strs.size();i++)
        {
            answer+= strs[i];
        }
        return answer;
    }

    vector<string> decode(string s) {
        if (s.empty()) return {};
        
        int i =0;
        vector<int> sizes;
        while(s[i]!= '#')
        {
            string number="";
            while(s[i]!= ',')
            {
                number+= s[i];
                i++;
            }
            cout << number << endl;
            sizes.push_back(stoi(number));
            i++;
        }
        i++;
        vector<string> answer;
        for(int n : sizes)
        {
            answer.push_back(s.substr(i,n));
            i+=n;
        }
        return answer;
    }
};

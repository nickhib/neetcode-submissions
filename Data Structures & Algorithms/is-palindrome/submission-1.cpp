class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i < j)
        {
            while(i < j && !alphaNum(s[i]))
            {
                i++;
            }
            while(j> i && !alphaNum(s[j]))
            {
                j--;
            }
            if(tolower(s[i]) != tolower(s[j]))
                return false;
            j--;i++;

        }
        return true;

    }
    bool alphaNum(char c)
    {
        if((c >='a' && c<='z')|| (c >='A' && c<='Z') || (c>='0' && c <='9'))
            return true;
        return false;
    }
};

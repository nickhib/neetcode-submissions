class Solution {
public:
    bool isPalindrome(string s) {
        string answer = "";
        for(char c : s)
        {
            if((c >= 'a' && c <='z') || (c >='A' && c<='Z') || (c>='0' && c<='9'))
            {
                answer+=tolower(c);
            }
        }
        int i = 0;
        int j = answer.size() -1;
        while(i < j)
        {
            if(answer[i]!=answer[j])
            {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};

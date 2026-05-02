class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s)
        {
            if(c == '(' || c==')'|| c=='[' || c==']'|| c=='{' || c=='}')
            {

                    if(c==')' || c==']'|| c=='}')
                    {
                        if(!st.empty())
                        {
                            if(c==')')
                            {
                                if(st.top() != '(')
                                    return false;
                            }
                            else if(c==']')
                            {
                                if(st.top() != '[')
                                {
                                    return false;
                                }
                            }
                            else if(c=='}')
                            {
                                cout<< st.top() << endl;
                                if(st.top() != '{'){
                                    return false;
                                }
                            }
                            st.pop();
                        }
                        else
                            return false;

                    }
                    else
                    {
                        st.push(c);
                    }

            }
        }
        if(!st.empty())
            return false;
        return true;
        
    }
};

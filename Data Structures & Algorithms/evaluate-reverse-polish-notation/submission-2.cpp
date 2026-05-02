class Solution {
public:
    stack<string> s;
    int evalRPN(vector<string>& tokens) {
        int answer = 0;

        unordered_set<string> operations = {"+","-","/","*"}; 
        for(string st : tokens)
        {
            if(operations.count(st)>0)
            {
                int count;
                if(st == "+")
                {
                    int first= stoi(s.top());
                    s.pop();
                    int second = stoi(s.top());
                    s.pop();
                    count = first+second;
                }
                else if(st =="-")
                {
                    int first= stoi(s.top());
                    s.pop();
                    int second = stoi(s.top());
                    s.pop();
                    count = second-first;
                }
                else if(st =="/")
                {
                    int first= stoi(s.top());
                    s.pop();
                    int second = stoi(s.top());
                    s.pop();
                    count = second/first;
                }
                else if(st =="*")
                {
                    int first= stoi(s.top());
                    s.pop();
                    int second = stoi(s.top());
                    s.pop();
                    count = first*second;
                }
                s.push(to_string(count));
            }
            else
            {
                s.push(st);
            }
        }
        return stoi(s.top());
    }
};

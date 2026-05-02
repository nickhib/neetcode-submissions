class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        
        stack<pair<int,int>> s;
        vector<int> answer(temperatures.size(), 0);
        for(int i = 0; i < temperatures.size();i++)
        {
            int cur = -1;
            while(!s.empty() && temperatures[i] > s.top().second)
            {
                cout << i << " " << s.top().first << endl;
                answer[s.top().first]= (i-s.top().first);
                s.pop();
            }
            s.push({i,temperatures[i]});
        }
        return answer;
    }
};

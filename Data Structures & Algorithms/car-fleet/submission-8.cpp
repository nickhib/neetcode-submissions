class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> ans;
        if(position.size() ==1)
            return 1;
        for(int i =0; i < position.size();i++)
        {
            ans.push_back({position[i],speed[i]});
        }
        sort(ans.rbegin(), ans.rend());
        int fleet = 0;
        double prevTime = 0;
        for(int i = 0 ;i < ans.size();i++)
        {
            double time = (target - (double)ans[i].first)/(double)ans[i].second;
            if(time > prevTime)
            {
                fleet++;
                prevTime = time;
            }
        }
      
        return fleet;
    }
};

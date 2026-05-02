class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> umap;
        priority_queue<pair<int,int>> answer;
        for(int i = 0; i < nums.size();i++)
        {
            umap[nums[i]]++;
        }
        for(auto p : umap)
        {
            answer.push({p.second,p.first});
        }
        vector<int> answer2;
        for(int i = 0; i < k;i++)
        {
            answer2.push_back(answer.top().second);
            answer.pop();
        }
        
        return answer2;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int> umap;
        vector<pair<int,int>> subAnswer;
        int max = INT_MIN;
        for(int i = 0; i < nums.size();i++)
        {
            umap[nums[i]]++;
        }
        for(auto p : umap)
        {
            subAnswer.push_back({p.second,p.first});
        }
        sort(subAnswer.begin(),subAnswer.end());
        vector<int> answer;
        int j = subAnswer.size()-1;
        for(int i = 0; i < k;i++)
        {

            answer.push_back(subAnswer[j].second);
            j--;
        }







        return answer;
    }
};

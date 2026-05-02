class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int curMax = 0;
        deque<int> q;
        int l = 0;
        vector<int> answer(nums.size()- k +1,0);
        for(int r = 0; r < nums.size();r++)
        {
            while(!q.empty() && nums[r] > nums[q.back()])
                q.pop_back();
            q.push_back(r);
            if(l > q.front())
                q.pop_front();
            if((r+1) >=k)
            {
                answer[l] = nums[q.front()];
                l++;
            }
            
        }
    return answer;
        
    }
};

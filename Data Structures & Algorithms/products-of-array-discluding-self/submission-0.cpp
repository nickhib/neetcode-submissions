class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> answer;
        for(int i =0; i < nums.size();i++)
        {
            int num =1;
            for(int j =0; j < nums.size();j++)
            {
                if(j==i)
                    continue;
                num*= nums[j];
            }
            answer.push_back(num);
        }
        return answer;

    }
};

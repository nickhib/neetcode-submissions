class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> answer;
        for(int i = 0; i < n;i++){
            int k = i+1;
            int j = n-1;
            if(i > 0 && nums[i] == nums[i-1])
                continue;



            
            while(k < j&& j >k)
            {
                int sum = nums[i]+ nums[j]+nums[k];
                if(sum < 0)
                {
                    k++;

                }
                else if(sum > 0)
                {
                    j--;
                }
                else
                {
                    answer.push_back({nums[i], nums[k], nums[j]});

                    k++;
                    j--;
                    while(k < j && nums[k] == nums[k-1])
                    {
                        k++;
                    }
                }
            }
        }
        return answer;
    }
};

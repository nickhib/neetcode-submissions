class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        for(int i =0;i < numbers.size();i++)
        {
            int rest = target - numbers[i];
            for(int j =0;j < numbers.size();j++)
            {
                if(rest - numbers[j]==0 && j!=i)
                {
                    return {i+1, j+1};
                }
            }
        }
        return {};
    }
};

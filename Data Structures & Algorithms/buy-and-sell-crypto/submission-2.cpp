class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cur = prices[0];
        int profit = 0;
        for(int num : prices)
        {
            cur = min(cur,num);
            profit = max(profit, num - cur);
        }
        return profit;
    }
};

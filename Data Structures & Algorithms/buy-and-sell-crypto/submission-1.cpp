class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = prices.size()-1;
        int cur = prices[i];
        int profit = 0;
        while(i >= 0)
        {
            if(prices[i] > cur)
                cur = prices[i];
            else
            {
                if((cur-prices[i]) > profit)
                    profit = (cur-prices[i]);
            }


            i--;
        }
        return profit;
    }
};

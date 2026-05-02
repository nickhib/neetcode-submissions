class Solution {
public:
    int returnHours(vector<int>& piles, int amt)
    {
        int hrs = 0;
        for(int i = 0; i < piles.size();i++)
        {
            hrs+=((piles[i]+amt-1)/amt);
        }
        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int fullCount = 0;
        int max = 0;
        for(int num : piles)
        {
            if(num > max)
                max = num;
        }
        vector<int> rate;
        int low = 1;
        int high = max;
        int cur = 0;
        while(low <= high)
        {
            int mid = low + (high-low)/2;
            if(returnHours(piles,mid) > h)
            {
                low = mid+1;
            }
            else if(returnHours(piles,mid) <= h)
            {
                cur =mid;
                high = mid-1;
            }
        }
        return cur;
    }
};

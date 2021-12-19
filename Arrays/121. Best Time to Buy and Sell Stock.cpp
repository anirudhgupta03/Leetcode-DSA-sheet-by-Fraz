class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int mincost = INT_MAX, maxprofit = INT_MIN;
        
        for(int i = 0; i < prices.size(); i++){
            
            if(prices[i] < mincost) mincost = prices[i];
            
            maxprofit = max(maxprofit, prices[i] - mincost);
        }
        return maxprofit;
    }
};

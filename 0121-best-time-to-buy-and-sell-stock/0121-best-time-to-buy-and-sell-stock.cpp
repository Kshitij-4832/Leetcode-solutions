class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyprice = prices[0],profit = 0,n = prices.size();
        for(int i = 0;i<n;i++){
            buyprice = min(buyprice,prices[i]);
            profit = max(profit,prices[i]-buyprice);
        }
        return profit;
    }
};
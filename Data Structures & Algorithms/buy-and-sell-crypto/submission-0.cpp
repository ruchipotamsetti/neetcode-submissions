class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxProfit = 0;

        int minBuy = prices[0];
        int i=1;
        while(i<n){
            maxProfit = max(maxProfit, prices[i]-minBuy);
            minBuy = min(minBuy, prices[i]);
            i++;
        }
        return maxProfit;
    }
};

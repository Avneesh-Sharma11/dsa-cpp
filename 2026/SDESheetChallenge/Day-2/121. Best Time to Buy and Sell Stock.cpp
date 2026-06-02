class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = buy;
        int ans = sell - buy;
        for (int i = 1; i < prices.size(); i++) {
            if (buy > prices[i]) {
                buy = prices[i];
                sell = prices[i];
            } else {
                sell = max(sell, prices[i]);
            }
            ans = max(ans, (sell - buy));
        }
        return ans;
    }
};
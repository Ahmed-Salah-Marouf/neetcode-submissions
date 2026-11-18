class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mn = INT_MAX, ans = 0;
        for(int i = 0; i < n; i++) {
            if (prices[i] > mn) {
                ans = max(ans, prices[i] - mn);
            } else {
                mn = prices[i];
            }
        }
        return ans;
    }
};

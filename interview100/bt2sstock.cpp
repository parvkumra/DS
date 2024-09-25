#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
       
        vector<vector<int>> dp(n,vector<int>(2, -1));

        return helper(0, 0, prices, dp); 
    }

private:
    int helper(int i, int buy, const vector<int>& prices, vector<vector<int>>& dp) {
        if (i >= prices.size()) {
            return 0; 
        }
        if (dp[i][buy] != -1) {
            return dp[i][buy]; }

        if (buy == 0) {
            
            int buyi = helper(i + 1, 1, prices, dp) - prices[i];
            int skip = helper(i + 1, 0, prices, dp);
            dp[i][buy] = max(buyi, skip); 
        } else {
            
            int sell = helper(i + 1, 0, prices, dp) + prices[i];
            int skipi = helper(i + 1, 1, prices, dp);
            dp[i][buy] =max(sell, skipi); }

        return dp[i][buy]; 
    }
};
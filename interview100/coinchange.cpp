class Solution {
public:
int helper(int i,int t,vector<int>& coins,vector<vector<int>>&dp){
    if(i==0){
        if(t%coins[0]==0) return t/coins[0];
        else return 1e9;}
        if(dp[i][t]!=-1) return dp[i][t];
        int note=0+helper(i-1,t,coins,dp);
        int tak=INT_MAX;
        if(coins[i]<=t){
            tak=1+helper(i,t-coins[i],coins,dp);
        }
        return dp[i][t]=min(note,tak);

        
    }

    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        int ans=helper(n-1,amount,coins,dp);
        if(ans>=1e9) return -1;
        return ans;
    }
};
#include<vector>

using namespace std;

class Solution {
public:
int helper(int i,vector<int>&dp,vector<int>& nums){
  if(i<0)return 0;
  if(dp[i]!=-1)return dp[i];
 int steal=nums[i]+helper(i-2,dp,nums);
 int skip=helper(i-1,dp,nums);
 return dp[i]= max(steal,skip);

}
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int>dp(n,-1);
        return helper(n-1,dp,nums);
    }
};
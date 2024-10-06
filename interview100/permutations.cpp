class Solution {
public:
void helper(vector<int>& nums,vector<int>&sans,vector<vector<int>>&ans,vector<int>&vis){
       if(sans.size()==nums.size()){
         ans.push_back(sans);
         return;
       }
       for(int i=0;i<nums.size();i++){
        if(vis[i]==0){
            sans.push_back(nums[i]);
            vis[i]=1;
            helper(nums,sans,ans,vis);
            sans.pop_back();
            vis[i]=0;
        }
       }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        vector<int>vis(n,0);
        vector<int>sans;
        helper(nums,sans,ans,vis);
        return ans;
    }
};
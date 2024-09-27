class Solution {
public:
void helper(int i,vector<int>& nums,vector<int>sans,vector<vector<int>>&ans){
 if(i>=nums.size()){
    ans.push_back(sans);
    return;
 }
    sans.push_back(nums[i]);
    helper(i+1,nums,sans,ans);
    sans.pop_back();
    helper(i+1,nums,sans,ans);
}
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int>>ans;
       vector<int>sans;
       helper(0,nums,sans,ans);
       return ans; 
    }
};
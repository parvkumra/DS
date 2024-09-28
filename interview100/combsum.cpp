class Solution {
public:

void helper(int i,vector<int>sans,vector<vector<int>>&ans,vector<int>& candidates,int target){
    
    if(i>=candidates.size()){
       return;
    }
    if(target==0){
        ans.push_back(sans);
        return;
    }
   

   helper(i+1,sans,ans,candidates,target);
   if(candidates[i]<=target){
   sans.push_back(candidates[i]);
   helper(i,sans,ans,candidates,target-candidates[i]);
   sans.pop_back();
   }
  



}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>sans;
       helper(0,sans,ans,candidates,target) ;
       return ans;
    }
};
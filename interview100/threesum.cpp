class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i=0;i<nums.size()-2;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
          int start=i+1;
          int end=nums.size()-1;
          while(start<end){
            int n_target=nums[start]+nums[end];
            if(nums[i]+n_target>0)end--;
            else if(nums[i]+n_target<0)start++;
            else {
                ans.push_back({nums[i],nums[start],nums[end]});
                while(start<end && nums[start]==nums[start+1])start++;
                while(start<end && nums[end]==nums[end-1])end--;
                start++;
                end--;
                }
          }
        }

        return ans;
    }
};
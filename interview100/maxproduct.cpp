class Solution {
public:
    int maxProduct(vector<int>& nums) {
     int ans=nums[0];
     int leftProduct=1;
     int rightProduct=1;
     int n=nums.size();
     for(int i=0;i<n;i++){
        leftProduct=leftProduct==0?1:leftProduct;
        rightProduct=rightProduct==0?1:rightProduct;
        leftProduct*=nums[i];
        rightProduct*=nums[n-i-1];
        ans=max({ans,leftProduct,rightProduct});
     }   
     return ans;
    }
};
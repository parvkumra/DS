#include<vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int major=nums[0];
      int count=1;  
    for(int i=1;i<nums.size();i++){
        if(nums[i]==major)count++;
        else count--;
        if(count<0){
           major=nums[i];
           count=1; 
        }
    }
    count=0;
    for(int j=0;j<nums.size();j++){
        if(nums[j]==major)count++;
    }
    int n=nums.size();
    if(count>n/2)return major;
    return -1;
    }
};
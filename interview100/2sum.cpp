#include<vector>
#include<map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,int>mp;

   for(int i=0;i<nums.size();i++){
    int new_target=target-nums[i];
    if(mp.find(new_target)!=mp.end()) return {i,mp[new_target]};
    else mp[nums[i]]=i;
   }
   return {};
    }
};



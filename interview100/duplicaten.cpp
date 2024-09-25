#include<map>
#include<vector>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int>mp;
        for(int num : nums){
            mp[num]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++){
              if(it->second>1)return true;
        }
        return false;
    }
};
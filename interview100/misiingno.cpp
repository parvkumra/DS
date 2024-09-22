#include<vector>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int sum=0;
        for(int i=0;i<=nums.size();i++){
            sum+=i;
        }
        int asum=0;
        for(int j=0;j<nums.size();j++ ){
            asum+=nums[j];
        }
        return sum-asum;
    }
};
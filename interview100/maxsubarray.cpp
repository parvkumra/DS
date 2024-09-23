#include<vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int csum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            csum = max(csum + nums[i], nums[i]);
            maxi = max(maxi, csum);
        }
        return maxi;
    }
};
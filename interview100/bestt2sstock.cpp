#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxi=INT_MIN;
        for(int i=1;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            else maxi=max(maxi,prices[i]-min);
        }
        return (maxi==INT_MIN)?0:maxi;
    }
};
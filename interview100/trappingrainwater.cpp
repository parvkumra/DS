class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0; 
        
        vector<int> leftmax(n);
        vector<int> rightmax(n);
        int lmaxi = height[0];
        int rmaxi = height[n-1];
        
        for (int i = 0; i < n; i++) {
            leftmax[i] = lmaxi;
            lmaxi = max(height[i], lmaxi);
        }
        
    
        for (int j = n - 1; j >= 0; j--) {
            rightmax[j] = rmaxi;
            rmaxi = max(height[j], rmaxi);
        }
        
      
        int ans = 0;
        for (int k = 0; k < n; k++) {
            int water_level = min(leftmax[k], rightmax[k]);
            if (water_level > height[k]) {
                ans += water_level - height[k];
            }
        }
        return ans;}};
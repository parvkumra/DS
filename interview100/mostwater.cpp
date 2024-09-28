class Solution {
public:
    int maxArea(vector<int>& height) {
     int max_water=INT_MIN;
     int start=0;
     int end=height.size()-1;
     while(start<end){
        int min_water=min(height[start],height[end]);
        int area=min_water*(end-start);
        max_water=max(max_water,area);
        if (height[start] < height[end]) {
                start++;
            } else {
                end--;
            }
     }  
     return max_water; 
    }
};
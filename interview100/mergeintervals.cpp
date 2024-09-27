class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int start_interval=intervals[0][0];
        int end_interval=intervals[0][1];
      vector<vector<int>>ans;

        for(int i=0;i<intervals.size();i++){
            int start=intervals[i][0];
            int end=intervals[i][1];
            if(start<=end_interval){
                start_interval=min(start_interval,start);
                end_interval=max(end_interval,end);
            }else{
               ans.push_back({start_interval,end_interval});
               start_interval=start;
               end_interval=end;
               
            }
            if(i==intervals.size()-1){
                ans.push_back({start_interval,end_interval});
               }
        }

        return ans;
    }
};
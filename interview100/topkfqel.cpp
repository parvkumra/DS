class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>mp;
        vector<int>ans;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>minh;
        for(int num : nums){
            mp[num]++;
        }
     for(auto it=mp.begin();it!=mp.end();it++){
        minh.push({it->second,it->first});
        if(minh.size()>k)minh.pop();
    

     }
      while(!minh.empty()){
        int t=minh.top().second;
        ans.push_back(t);
        minh.pop();
      }
      return ans;
    }
};
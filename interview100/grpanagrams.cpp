class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp; 

        for (string st : strs) {
            string sti = st;
            sort(sti.begin(), sti.end());
            mp[sti].push_back(st); 
        }

        vector<vector<string>> ans; 
        for (auto it = mp.begin(); it != mp.end(); it++) {
            ans.push_back(it->second);
        }
        return ans;
    }
};
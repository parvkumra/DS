class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;  
        int maxi = 0;       
        int i = 0;          

        for (int j = 0; j < s.size(); j++) {
            
            if (mp.find(s[j]) != mp.end() && mp[s[j]] >= i) {
                
                i = mp[s[j]] + 1;
            }
            
            mp[s[j]] = j;

           
            maxi = max(maxi, j - i + 1);
        }

        return maxi;
    }
};
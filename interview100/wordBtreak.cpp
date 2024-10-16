#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    unordered_set<string> st;

    bool solve(int idx, string &s, vector<int>& dp) {
        if (idx == s.size()) return true;
        if (dp[idx] != -1) return dp[idx];

        for (int i = 1; i <= s.size() - idx; i++) {
            string temp = s.substr(idx, i);
            if (st.find(temp) != st.end() && solve(idx + i, s, dp)) {
                return dp[idx] = true;
            }
        }
        return dp[idx] = false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        for (const string &word : wordDict) {
            st.insert(word);
        }

        vector<int> dp(s.size(), -1);
        return solve(0, s, dp);
    }
};

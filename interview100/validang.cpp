#include<string>
#include<vector>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>v(26,0);
        for(int i=0;i<s.size();i++){
         v[s[i]-'a']++;
        }
        for(int j=0;j<t.size();j++){
            v[t[j]-'a']--;
        }

        for(int k=0;k<26;k++){
            if(v[k]!=0)return false;
        }
        return true;
    }
};
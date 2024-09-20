#include<stack>
#include<string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='['|| s[i]=='{')st.push(s[i]);
            else{
                if(st.empty())return false;
                char top_element=st.top();
                if(  (s[i]==')' && top_element=='(') ||
                    (s[i]==']' && top_element=='[') ||
                    (s[i]=='}' && top_element=='{') ){
                        st.pop();
                        continue;
                    }else return false;
            }
        }
        return (st.empty())?true:false;
    }
};
#include<vector>
using namespace std;
class Solution {
public:
 void swap(int start,int end,vector<char>&s){
    char temp=s[start];
    s[start]=s[end];
    s[end]=temp;
 }
    void reverseString(vector<char>& s) {
        int start=0;
        int end=s.size()-1;
        while(start<end){
            swap(start,end,s);
            start++;
            end--;
        } 
    }
};
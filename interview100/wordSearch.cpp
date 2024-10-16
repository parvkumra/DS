class Solution {
public:
bool solve(int i,int j,int k,vector<vector<char>>&board,string &word,vector<vector<int>>&vis){
    if(k>=word.size())return true;
   if(i<0 || i>=board.size()||j<0 || j>=board[0].size()  || board[i][j]!=word[k] || vis[i][j]==1 )return false;
    vis[i][j]=1;
    
    bool up=solve(i-1,j,k+1,board,word,vis);
    bool down=solve(i+1,j,k+1,board,word,vis);
    bool right=solve(i,j+1,k+1,board,word,vis);
    bool left=solve(i,j-1,k+1,board,word,vis);
    vis[i][j]=0;
    return up || down || right || left;

}
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();

        vector<vector<int>>vis(m,vector<int>(n,0));
         
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0] && solve(i,j,0,board,word,vis)){
                    return true;
                }
            }
        }
        return false;
    }
};
class Solution {
public:
int r[4] = {0, 0, -1, 1};
int c[4] = {1, -1, 0, 0};
void helper(int i,int j,vector<vector<char>>&grid,vector<vector<int>>&vis){

    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j]==1 || grid[i][j]=='0')return;
  vis[i][j]=1;
for(int l=0;l<4;l++){
    int nr=i+r[l];
    int nc=j+c[l];
    helper(nr,nc,grid,vis);
}
}
    int numIslands(vector<vector<char>>& grid) {
        
        int count=0;
        vector<vector<int>>vis(grid.size(),vector<int>(grid[0].size(),0));
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]=='1' && vis[i][j]!=1){
                    helper(i,j,grid,vis);
                    count++;
                }
            }
        }
       return count;
    }
};
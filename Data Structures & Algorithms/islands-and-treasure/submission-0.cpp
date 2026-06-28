class Solution {
public:
void dfs(vector<vector<int> >&g,int i,int j,int r,int c,int ct)
{
     if(i<0||j<0||i>=r||j>=c||g[i][j]<ct)
     return;

     g[i][j]=ct;
        
            dfs(g,i+1,j,r,c,ct+1);
            dfs(g,i-1,j,r,c,ct+1);
            dfs(g,i,j+1,r,c,ct+1);
            dfs(g,i,j-1,r,c,ct+1);
            

}
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ct=0;
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                  dfs(grid,i,j,n,m,ct);
            }
         }
      
        
    }
};

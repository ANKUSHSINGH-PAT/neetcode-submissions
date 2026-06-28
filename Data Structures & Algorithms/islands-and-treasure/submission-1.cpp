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
        vector<pair<int,int> >dir;
        dir.push_back({1,0});
        dir.push_back({-1,0});
        dir.push_back({0,1});
        dir.push_back({0,-1});
        queue<pair<int,int> >q;
        
         for(int i=0;i<n;i++)
         {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==0)
                {
                 // dfs(grid,i,j,n,m,ct);
                 q.push({i,j});
                }
            }
         }

         while(q.empty()!=1)
         {
            auto p=q.front();
            q.pop();
            int x=p.first;
            int y=p.second;
            for(int i=0;i<dir.size();i++)
            {
                int X=x+dir[i].first;
                int Y=y+dir[i].second;

            if(X>=0&&Y>=0&&X<n&&Y<m&&grid[X][Y]==2147483647)
            {
                grid[X][Y]=1+grid[x][y];
                q.push({X,Y});
            }
            }

           
         }
      
        
    }
};

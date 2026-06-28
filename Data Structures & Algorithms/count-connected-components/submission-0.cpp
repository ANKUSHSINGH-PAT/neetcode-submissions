class Solution {
public:
void dfs(int i,vector<vector<int>>&adj,vector<int>&vis)
{
    if(vis[i]==1)
    return;
    if(vis[i]==0)
    vis[i]=1;

    for(auto x:adj[i])
    {
        if(vis[x]==0)
        dfs(x,adj,vis);
    }
}
    int countComponents(int n, vector<vector<int>>& e) {
        vector<vector<int> >adj(n);
        int ans=0;

        for(int i=0;i<e.size();i++)
        {
            adj[e[i][0]].push_back(e[i][1]);
            adj[e[i][1]].push_back(e[i][0]);
        }

        vector<int>vis(n+1,0);
        for(int i=0;i<n;i++)
        {
             if(vis[i]==0)
             {
                dfs(i,adj,vis);
                ans++;
             }
        }
        return ans;

    }
};

class Solution {
public:
bool dfs(int i,int p,vector<vector<int> >&adj,vector<int>&vis)
{
    vis[i]=1;

    for(auto x:adj[i])
    {
        if(vis[x]==0)
        {
        bool c=dfs(x,i,adj,vis);
        if(c)
        return true;

        }
        else if(x!=p)
        return true;

        

    }
    return false;

}
    bool validTree(int n, vector<vector<int>>& e) {
        if(e.size()!=n-1)
        return false;

        vector<vector<int> >adj(n);
    
        vector<int>vis(n,0);
        for(auto x:e)
        {
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
         bool f=dfs(0,-1,adj,vis);

            if(f==true)
            return false;
        

        for(auto x:vis)
        if(x==0)
        return false;

       

        return true;

    }
};

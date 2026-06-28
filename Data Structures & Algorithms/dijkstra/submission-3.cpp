class Solution {
public:
    unordered_map<int, int> shortestPath(int n, vector<vector<int>>& edges, int src) {

        vector<vector<int> >v(n+1,vector<int>(n+1,INT_MAX/2));
         for (int i = 0; i < n; ++i) v[i][i] = 0;

        for(auto &x:edges)
        {
            int u=x[0];
            int vi=x[1];
            int dist=x[2];

            v[u][vi]=dist;
        }

        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<n;j++)
                {
                    if(v[i][j]>v[i][k]+v[k][j])
                    v[i][j]=v[i][k]+v[k][j];
                }
            }
        }
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            if(v[src][i]<INT_MAX/2)
            mp[i]=v[src][i];
            else
            mp[i]=-1;
        }
        return mp;
        
    }
};

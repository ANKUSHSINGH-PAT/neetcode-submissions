class Solution:
    def dfs(self,i,vis,adj):
        if vis[i]==1:
            return
        if vis[i]==0:
            vis[i]=1
        for x in adj[i]:
            if vis[x]==0:
                self.dfs(x,vis,adj)
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        m=len(edges)
        adj=[[] for _ in range(n+1)]
        for x in edges:
            u=x[0]
            v=x[1]
            adj[u].append(v)
            adj[v].append(u)
        vis=[0]*(n+1)
        ans=0
        for i in range(0,n):
            if vis[i]==0:
                self.dfs(i,vis,adj)
                ans+=1
        return ans
        
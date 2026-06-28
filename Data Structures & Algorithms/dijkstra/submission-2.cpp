class Solution {
public:
    unordered_map<int, int> shortestPath(int n, vector<vector<int>>& edges, int src) {
        const int INF = INT_MAX / 2;
        vector<vector<int>> v(n, vector<int>(n, INF));

        // Self-distance is 0
        for (int i = 0; i < n; ++i) v[i][i] = 0;

        for (auto &x : edges) {
            int u = x[0], vi = x[1], dist = x[2];
            v[u][vi] = dist;
        }

        // Floyd-Warshall Algorithm
        for (int k = 0; k < n; ++k)
            for (int i = 0; i < n; ++i)
                for (int j = 0; j < n; ++j)
                    if (v[i][j] > v[i][k] + v[k][j])
                        v[i][j] = v[i][k] + v[k][j];

        unordered_map<int, int> mp;
        for (int i = 0; i < n; ++i)
            mp[i] = (v[src][i] < INF ? v[src][i] : -1);

        return mp;
    }
};

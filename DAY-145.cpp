class Solution {
    void dfs(vector<vector<int>> &g,int a,vector<bool> &v) 
    {
        v[a]=true;
        for (auto i:g[a]) 
        {
            if (!v[i])
                dfs(g,i,v);
        }
    }
    vector<vector<int>> construct(int V,vector<vector<int>> &edges,int c,int d) 
    {
        vector<vector<int>> g(V); 
        for (auto &a:edges) 
        {
            if ((a[0]==c && a[1]==d) || (a[0]==d && a[1]==c))
                continue;
            g[a[0]].push_back(a[1]);
            g[a[1]].push_back(a[0]);
        }
        return g;
    }
  public:
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) 
    {
        vector<vector<int>> g=construct(V,edges,c,d);
        vector<bool> v(V, false);
        dfs(g,c,v);
        return !v[d];
    }
};

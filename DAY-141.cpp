class Solution {
    bool cycle(int V,vector<vector<int>> &g,vector<bool> &v,int p)
    {
        v[V]=true;
        for (int i:g[V])
        {
            if (!v[i])
            {
                if (cycle(i,g,v,V))
                    return true;
            }
            else if (i!=p)
                return true;
        }
        return false;
    }
    vector<vector<int>> construct(int V,vector<vector<int>> &edges)
    {
        vector<vector<int>> g(V);
        for (auto i:edges)
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        return g;
    }
  public:
    bool isCycle(int V, vector<vector<int>>& edges) 
    {
        vector<vector<int>> g=construct(V,edges);
        vector<bool> v(V,false);
        for (int i= 0;i<V;i++)
        {
            if (!v[i])
            {
                if (cycle(i,g,v,-1))
                    return true;
            }
        }
        return false;
    }
};

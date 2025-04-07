class Solution {
    bool cycle(vector<vector<int>> &g,int i,vector<bool> &v,vector<bool> &r)
    {
        if (r[i])
            return true;
        if (v[i])
            return false;
        v[i]=true;
        r[i]=true;
        for (int j:g[i])
            if (cycle(g,j,v,r))
                return true;
        r[i]=false;
        return false;
    }
    vector<vector<int>> construct(int V,vector<vector<int>> &edges)
    {
        vector<vector<int>> g(V);
        for (auto &i:edges)
            g[i[0]].push_back(i[1]);
        return g;
    }
  public:
    bool isCyclic(int V, vector<vector<int>> &edges) 
    {
        vector<vector<int>> g=construct(V,edges);
        vector<bool> v(V, false),r(V,false);
        for (int i=0;i<V;i++)
        {
            if (!v[i] && cycle(g,i,v,r))
                return true;
        }
        return false;
    }
};

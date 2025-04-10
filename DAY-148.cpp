class Solution {
    vector<vector<vector<int>>> construct(vector<vector<int>> &edges,int V)
    {
        vector<vector<vector<int>>> g(V); 
        for (auto &e:edges) 
        {
            int i=e[0],j=e[1],k=e[2];
            g[i].push_back({j,k});
            g[j].push_back({i,k}); 
        }
        return g;
    }
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) 
    {
        vector<vector<vector<int>>> g=construct(edges,V);
        set<pair<int,int>>s;
        vector<int> d(V,INT_MAX);
        d[src]=0;
        s.insert({0,src});
        while (!s.empty()) 
        {
            auto i=*(s.begin());
            int j=i.second;
            s.erase(i); 
            for (auto k:g[j]) 
            {
                int l=k[0],w=k[1];
                if (d[l]>d[j]+w) 
                {
                    if (d[l]!=INT_MAX)
                        s.erase({d[l],l});
                    d[l]=d[j]+w;
                    s.insert({d[l],l});
                }
            }
        }
        return d;
    }
};

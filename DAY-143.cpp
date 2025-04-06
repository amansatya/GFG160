class Solution {
    void topologicalsort(int i,vector<vector<int>> &g,vector<bool> &v,stack<int> &s)
    {
        v[i]=true;
        for (int j:g[i])
        {
            if (!v[j])
                topologicalsort(j,g,v,s);
        }
        s.push(i);
    }
    vector<vector<int>> construct(int V,vector<vector<int>> &edges)
    {
    
        vector<vector<int>> g(V);
        for (auto i:edges)
            g[i[0]].push_back(i[1]);
        return g;
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) 
    {
        stack<int> s;
        vector<bool> v(V, false);
        vector<vector<int>> g=construct(V, edges);
        for (int i=0;i<V;i++)
        {
            if (!v[i])
                topologicalsort(i,g,v,s);
        }
        vector<int> ans;
        while (!s.empty())
        {
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};

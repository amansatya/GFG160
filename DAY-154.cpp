class Solution {
    vector<vector<vector<int>>> construct(int V,vector<vector<int>>& edges) 
    {
        vector<vector<vector<int>>> g(V);
        for (auto& e:edges) 
        {
            int i=e[0],j=e[1],w=e[2];
            g[i].push_back({j,w});
            g[j].push_back({i,w});
        }
        return g;
    }
    int shortestpath(int V,vector<vector<vector<int>>>& g,int i,int j)
    {
        vector<int> d(V,INT_MAX);
        d[i]=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> q;
        q.push({0,i});
        while (!q.empty()) 
        {
            pair<int,int> t=q.top(); 
            q.pop();
            int k=t.first,l=t.second;
            if (k>d[l]) 
                continue;
            for (auto& n:g[l]) 
            {
                int v=n[0],w=n[1];
                if ((l==i && v==j) || (l==j && v==i)) 
                    continue;
                if (d[v]>d[l]+w) 
                {
                    d[v]=d[l]+w;
                    q.push({d[v],v});
                }
            }
        }
        return d[j];
    }
  public:
    int findMinCycle(int V,vector<vector<int>>& edges) 
    {
        vector<vector<vector<int>>> g=construct(V,edges);
        int ans=INT_MAX;
        for (auto& e:edges) 
        {
           int i=e[0],j=e[1],w=e[2],d=shortestpath(V,g,i,j);
           if (d!=INT_MAX)
               ans=min(ans,d+w);
        }
        return ans;
    }
};

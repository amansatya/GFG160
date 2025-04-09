class Solution {
    vector<vector<int>> construct(int V,vector<vector<int>> &edges) 
    {
        vector<vector<int>> g(V); 
        for (auto &e:edges) 
        {
           
            g[e[0]].push_back(e[1]);
            g[e[1]].push_back(e[0]);
        }
        return g;
    }
    void findPoints(vector<vector<int>> &g,int i,vector<int> &v,vector<int> &d,vector<int> &l,int &t,int p,vector<int> &a) 
    {
        v[i]=1;
        d[i]=l[i]=++t;
        int c=0; 
        for (int e:g[i]) 
        {
            if (!v[e]) 
            {
                c++;
                findPoints(g,e,v,d,l,t,i,a);
                l[i]=min(l[i],l[e]);
                if (p!=-1 && l[e]>=d[i])
                    a[i]=1;
            } 
            else if (e!=p)
                l[i]=min(l[i],d[e]);
        }
        if (p==-1 && c>1)
            a[i]=1;
    }
  public:
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) 
    {
        vector<vector<int>> g=construct(V,edges);
        vector<int> d(V,0),l(V,0),v(V,0),a(V,0);
        int t=0; 
        for (int i=0;i<V;i++) 
        {
            if (!v[i])
                findPoints(g,i,v,d,l,t,-1,a);
        }
        vector<int> ans;
        for (int i=0;i<V;i++) 
        {
            if (a[i])
                ans.push_back(i);
        }
        return ans.empty()?vector<int>{-1}:ans;
    }
};

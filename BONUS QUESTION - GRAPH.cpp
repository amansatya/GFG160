//QUESTION 1
class Solution {
    bool dfs(int n,vector<vector<int>>& g,vector<int>& v,vector<int>& ans) 
    {
        v[n]=1; 
        for (int a:g[n]) 
        {
            if (v[a]==1)
                return false; 
            else if (v[a]==0) 
            {
                if (!dfs(a,g,v,ans))
                    return false; 
            }
        }
        v[n]=2; 
        ans.push_back(n);
        return true;
    }
  public:
    vector<int> findOrder(int n, vector<vector<int>> prerequisites) 
    {
        vector<vector<int>> g(n);
        for (auto& p:prerequisites) 
        {
            int d=p[0],s=p[1];
            g[s].push_back(d);
        }
        vector<int> v(n,0),ans;
        for (int i=0;i<n;i++) 
        {
            if (v[i]==0) 
            {
                if (!dfs(i,g,v,ans))
                    return {}; 
            }
        }
        reverse(ans.begin(),ans.end()); 
        return ans;
    }
};

//QUESTION 2
class Solution {
    vector<vector<int>> construct(int V,vector<vector<int>> &edges)
    {
        vector<vector<int>> g(V);
        for(auto i:edges)
        {
            g[i[0]].push_back(i[1]);
            g[i[1]].push_back(i[0]);
        }
        return g;
    }
  public:
    bool isBipartite(int V,vector<vector<int>> &edges) 
    {
        vector<int> c(V,-1);
        vector<vector<int>> g=construct(V,edges);
        queue<int> q;
        for(int i=0;i<V;i++) 
        {
            if(c[i]==-1) 
            {
                c[i]=0;
                q.push(i);
                while(!q.empty()) 
                {
                    int u=q.front();
                    q.pop();
                    for(auto &v:g[u]) 
                    {
                        if(c[v]==-1) 
                        {
                            c[v]=1-c[u];
                            q.push(v);
                        }
                        else if(c[v]==c[u])
                            return false;
                    }
                }
            }
        }
        return true;
    }
};

//QUESTION 3
class Solution {
   int findparent(vector<int>& p,int x) 
   {
        if (p[x] != x)
            p[x] = findparent(p, p[x]);
        return p[x];
    }
    void unionsets(vector<int>& p,vector<int>& r,int x,int y) 
    {
        int i=findparent(p,x),j=findparent(p,y);
        if (i!=j) 
        {
            if (r[i]<r[j])
                p[i]=j;
            else if (r[i]>r[j])
                p[j]=i;
            else 
            {
                p[j]=i;
                r[i]++;
            }
        }
    }
  public:
    vector<vector<int>> getComponents(int V,vector<vector<int>>& edges) 
    {
        vector<int> p(V),r(V,0);
        for (int i=0;i<V;i++)
            p[i]=i;
        for (auto& e:edges)
            unionsets(p,r,e[0],e[1]);
        for (int i=0;i<V;i++)
            p[i]=findparent(p,i);
        unordered_map<int,vector<int>> m;
        for (int i=0;i<V;i++)
            m[p[i]].push_back(i);
        vector<vector<int>> ans;
        for (auto& e:m)
            ans.push_back(e.second);
        return ans;
    }
};

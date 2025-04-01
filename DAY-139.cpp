class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) 
    {
        vector<int> ans;
        queue<int> q;
        vector<bool> visited(adj.size(),false);
        visited[0]=true;
        q.push(0);
        while(!q.empty())
        {
            int n=q.front();
            q.pop();
            ans.push_back(n);
            for(int a:adj[n])
            {
                if(!visited[a])
                {
                    visited[a]=true;
                    q.push(a);
                }
            }
        }
        return ans;
    }
};

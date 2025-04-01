class Solution {
    void DFS(vector<vector<int>>& adj,vector<int> &ans,
    vector<bool> &visited,int i)
    {
        visited[i]=true;
        ans.push_back(i);
        for(int j:adj[i])
        {
            if(visited[j]==false)
                DFS(adj,ans,visited,j);
        }
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) 
    {
        vector<int> ans;
        vector<bool> visited(adj.size(),false);
        DFS(adj,ans,visited,0);
        return ans;
    }
};

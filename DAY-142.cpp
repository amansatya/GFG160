class Solution {
    bool issafe(vector<vector<char>>& grid,int i,int j,vector<vector<bool>>& v) 
    {
        int r=grid.size(),c=grid[0].size();
        return (i>=0) && (i<r) && (j>=0) && (j<c) && (grid[i][j]=='L' && !v[i][j]);
    }
    void dfs(vector<vector<char>>& grid,int i,int j,vector<vector<bool>>& v) 
    {
        vector<int> r={-1,-1,-1,0,0,1,1,1},c={-1,0,1,-1,1,-1,0,1};
        v[i][j]=true;
        for (int k=0;k<8;k++) 
        {
            int n1=i+r[k],n2=j+c[k];
            if (issafe(grid,n1,n2,v))
                dfs(grid,n1,n2,v);
        }
    }
  public:
    int countIslands(vector<vector<char>>& grid) 
    {
        int r=grid.size(),c=grid[0].size(),ans=0;
        vector<vector<bool>> v(r,vector<bool>(c,false));
        for (int i=0;i<r;i++) 
        {
            for (int j=0;j<c;j++) 
            {
                if (grid[i][j]=='L' && !v[i][j]) 
                {
                    dfs(grid,i,j,v);
                    ans++;
                }
            }
        }
        return ans;
    }
};

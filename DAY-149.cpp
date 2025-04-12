class Solution {
    void dfs(vector<vector<int>>& i,int x,int y,int o,int n) 
    {
        if (x<0 || x>=i.size() || y<0 || y>=i[0].size() || i[x][y]!=o)
            return; 
        i[x][y]=n;
        dfs(i,x+1,y,o,n); 
        dfs(i,x-1,y,o,n); 
        dfs(i,x,y+1,o,n); 
        dfs(i,x,y-1,o,n); 
    }
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& i,int sr,int sc,int n) 
    {
        if (i[sr][sc]==n)
            return i;
        int o=i[sr][sc];
        dfs(i,sr,sc,o,n);
        return i;
    }
};

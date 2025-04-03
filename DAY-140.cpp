class Solution {
    bool issafe(int i,int j,int n,int m)
    {
        return (i>=0 && i<n && j>=0 && j<m);
    }
  public:
    int orangesRotting(vector<vector<int>>& mat) 
    {
        int n=mat.size(),m=mat[0].size(),t=0;
        vector<vector<int>> d={{1,0},{0,1},{-1,0},{0,-1}};
        queue<vector<int>> q;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (mat[i][j]==2)
                    q.push({i,j});
            }
        }
        while (!q.empty())
        {
            t++;
            int l=q.size();
            while (l--)
            {
                vector<int> c=q.front();
                q.pop();
                int i=c[0],j=c[1];
                for (auto a:d)
                {
                    int x=i+a[0],y=j+a[1];
                    if (issafe(x,y,n,m) && mat[x][y]==1)
                    {
                        mat[x][y]=2;
                        q.push({x,y});
                    }
                }
            }
        }
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<m;j++)
            {
                if (mat[i][j]==1)
                    return -1;
            }
        }
        return max(0,t-1);
    }
};

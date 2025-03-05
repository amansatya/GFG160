class Solution {
  public:
    int lcs(string &s1, string &s2) 
    {
        int n=s1.size(),m=s2.size();
        vector<vector<int>> d(n+1,vector<int>(m+1,0));
        for (int i=1;i<=n;i++) 
        {
            for (int j=1;j<=m;j++) 
            {
                if (s1[i-1]==s2[j-1])
                    d[i][j]=d[i-1][j-1]+1;
                else
                    d[i][j]=max(d[i-1][j],d[i][j-1]);
            }
        }
        return d[n][m];
    }
};

class Solution {
  public:
    int editDistance(string& s1,string& s2) 
    {
        int n=s1.size(),m=s2.size();
        vector<vector<int>> d(n+1,vector<int>(m+1));
        for (int i=0;i<=n;i++) 
            d[i][0]=i;
        for (int i=0;i<=m;i++) 
            d[0][i]=i;
        for (int i=1;i<=n;i++) 
        {
            for (int j=1;j<=m;j++) 
            {
                if (s1[i-1]==s2[j-1])
                    d[i][j]=d[i-1][j-1];
                else
                    d[i][j]=1+min({d[i][j-1],d[i-1][j],d[i-1][j-1]});
            }
        }
        return d[n][m];
    }
};

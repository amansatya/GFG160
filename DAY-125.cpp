class Solution {
  public:
    int maxProfit(vector<int>& p, int k) 
    {
        int n=p.size();
        if (n==0 || k==0)
            return 0;
        vector<vector<int>> c(k+1,vector<int>(2,0));
        vector<vector<int>> nx(k+1,vector<int>(2,0));
        for (int i=n-1;i>=0;i--)
        {
            for (int j=1;j<=k;j++)
            {
                c[j][1]=max(-p[i]+nx[j][0],nx[j][1]);
                c[j][0]=max(p[i]+nx[j-1][1],nx[j][0]);
            }
            nx=c;
        }
        return c[k][1];
    }
};

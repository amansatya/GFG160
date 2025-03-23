class Solution {
  public:
    int countWays(string &d) 
    {
        int n=d.size();
        vector<int> dp(n+1,0);
        dp[n]=1;
        for (int i=n-1;i>=0;i--)
        {
            if (d[i]!='0')
                dp[i]=dp[i+1];
            if ((i+1<n) && ((d[i]=='1' && d[i+1]<='9') || (d[i]=='2' && d[i+1]<='6')))
                dp[i]+=dp[i+2];
        }
        return dp[0];
    }
};

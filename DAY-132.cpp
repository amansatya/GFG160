class Solution {
  public:
    bool wordBreak(string &s, vector<string> &dictionary) 
    {
        int n=s.size();
        vector<bool> dp(n+1,0);
        dp[0]=1;
        for (int i=1;i<=n;i++)
        {
            for (string &a:dictionary)
            {
                int j=i-a.size();
                if (j>=0 && dp[j] && s.substr(j,a.size())==a)
                {
                    dp[i]=1;
                    break;
                }
            }
        }
        return dp[n];
    }
};

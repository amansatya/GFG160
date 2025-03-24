class Solution {
    bool perform(int a,int b,char c)
    {
        if (c=='&')
            return a&b;
        if (c=='|')
            return a|b;
        return a^b;
    }
  public:
    int countWays(string &s) 
    {
        int n = s.length();
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(n,vector<int>(2,0)));
        for (int i=0;i<n;i+=2)
        {
            dp[i][i][1] = (s[i] == 'T');
            dp[i][i][0] = (s[i] == 'F');
        }
        for (int i=2;i<n;i+=2)
        {    
            for (int j=0;j<n-i;j+=2)
            {
                int k=j+i;
                dp[j][k][0]=dp[j][k][1]=0; 
                for (int l=j+1;l<k;l+=2)
                { 
                    char c=s[l];
                    int lt=dp[j][l-1][1],lf=dp[j][l-1][0];
                    int rt=dp[l+1][k][1],rf=dp[l+1][k][0];
                    if (perform(1,1,c))
                        dp[j][k][1]+=lt*rt;
                    if (perform(1,0,c))
                        dp[j][k][1]+=lt*rf;
                    if (perform(0,1,c))
                        dp[j][k][1]+=lf*rt;
                    if (perform(0,0,c))
                        dp[j][k][1]+=lf*rf;
                    if (!perform(1,1,c))
                        dp[j][k][0]+=lt*rt;
                    if (!perform(1,0,c))
                        dp[j][k][0]+=lt*rf;
                    if (!perform(0,1,c))
                        dp[j][k][0]+=lf*rt;
                    if (!perform(0,0,c))
                        dp[j][k][0]+=lf*rf;
                }
            }
        }
        return dp[0][n-1][1]; 
    }
};

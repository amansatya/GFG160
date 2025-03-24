class Solution {
  public:
    int matrixMultiplication(vector<int> &arr) 
    {
        int n = arr.size();
        vector<vector<int>> dp(n, vector<int>(n, 0));
        for (int i=2;i<n;i++)
        {
            for (int j=0;j<n-i;j++)
            {
                int k=j+i;
                dp[j][k]=INT_MAX;
                for (int l=j+1;l<k;l++)
                {
                    int c=dp[j][l]+dp[l][k]+arr[j]*arr[l]*arr[k];
                    dp[j][k]=min(dp[j][k],c);
                }
            }
        }
        return dp[0][n-1];
    }
};

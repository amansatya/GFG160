class Solution {
  public:
    int minCoins(vector<int> &coins, int sum) 
    {
        vector<int> d(sum+1, INT_MAX);
        d[0]=0; 
        for (int i=coins.size()-1;i>=0;i--) 
        {
            for (int j=1;j<=sum;j++) 
            {
                int t=INT_MAX,nt=INT_MAX;
                if (j-coins[i]>=0 && coins[i]>0) 
                {
                    t=d[j-coins[i]]; 
                    if (t!=INT_MAX) 
                        t++; 
                }
                if (i+1<coins.size())
                    nt=d[j]; 
                d[j]=min(t,nt);
            }
        }
        if (d[sum]!=INT_MAX) 
            return d[sum];
        return -1;
    }
};

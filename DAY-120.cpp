class Solution {
  public:
    int count(vector<int>& coins, int sum) 
    {
        int n=coins.size();
        vector<int> d(sum + 1);
        d[0]=1;
        for (int i=0;i<n;i++)
        {
            for (int j=coins[i];j<=sum;j++)
                d[j]+=d[j-coins[i]];
        }
        return d[sum];
    }
};

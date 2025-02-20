int maximumProfit(vector<int> &a) 
    {
        int n=a.size();
        int profit=0,buy=a[0];
        for (int i=1;i<n;i++)
        {
            if (a[i]>buy)
                profit+=a[i]-buy;
            buy=a[i];
        }
        return profit;
    }

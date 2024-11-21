//cpp
int maximumProfit(vector<int> &a) 
    {
        int buy=a[0],profit=0,n=a.size();
        for (int i=1;i<n;i++)
        {
            if (a[i]>buy)
                profit=max(profit,(a[i]-buy));
            buy=min(buy,a[i]);
        }
        return profit;
    }

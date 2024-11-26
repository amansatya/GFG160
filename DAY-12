int circularSubarraySum(vector<int> &arr) 
    {
        int n=arr.size(),minsum=INT_MAX,maxsum=INT_MIN,ts1=0,ts2=0,ts=0;
        for(int i=0;i<n;i++)
        {
            ts+=arr[i];
            ts1+=arr[i];
            ts2+=arr[i];
            maxsum=max(maxsum,ts1);
            minsum=min(minsum,ts2);
            if(ts1<0)
                ts1=0;
            if(ts2>0)
                ts2=0;
        }
        if(ts-minsum==0)
            return maxsum;
        return max(maxsum,ts-minsum);
    }

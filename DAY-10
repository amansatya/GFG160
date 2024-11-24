//cpp
int maxSubarraySum(vector<int> &arr) 
    {
        int maxsum=arr[0],current=0,n=arr.size();
        for(int i=0;i<n;i++)
        {
            current+=arr[i];
            maxsum=max(maxsum,current);
            current=max(0,current);
        }
        return maxsum;
    }

class Solution {
  public:
    int maxWater(vector<int> &arr) 
    {
        int n=arr.size(),maxl=arr[0],maxr=arr[n-1],i=1,j=n-2,ans=0;
        while(i<=j)
        {
            if(maxl<maxr)
            {
                ans+=max(0,maxl-arr[i]);
                maxl=max(maxl,arr[i]);
                i++;
            }
            else
            {
                ans+=max(0,maxr-arr[j]);
                maxr=max(maxr,arr[j]);
                j--;
            }
        }
        return ans;
    }
};

class Solution {
  public:
    bool isvalid(vector<int> &a,int n,int m,int mid)
    {
        int stut=1,page=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>mid)
                return false;
            if(page+a[i]<=mid)
                page+=a[i];
            else
            {
                stut++;
                page=a[i];
            }
        }
        return stut<=m;
    }
    int findPages(vector<int> &a, int m) 
    {
        int n=a.size();
        if(m>n)
            return -1;
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=a[i];
        int s=0,e=sum,ans=-1;
        while(s<=e)
        {
            int mid=s+(e-s)/2;
            if(isvalid(a,n,m,mid))
            {
                ans=mid;
                e=mid-1;
            }
            else
                s=mid+1;
        }
        return ans;
    }
};

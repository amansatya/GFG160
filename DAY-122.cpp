class Solution {
  public:
    int minJumps(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int> d(n, INT_MAX);
        d[n-1]=0;
        for (int i=n-2;i>=0;i--) 
        {
            for (int j=i+1;j<=i+arr[i] && j<n;j++) 
            {
                if (d[j]!=INT_MAX)
                    d[i]=min(d[i],1+d[j]);
            }
        }
        if (d[0]==INT_MAX)
            return -1;
        return d[0];
    }
};

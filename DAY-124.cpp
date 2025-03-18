class Solution {
  public:
    bool equalPartition(vector<int>& arr) 
    {
        int s=accumulate(arr.begin(),arr.end(),0);
        if (s%2!=0) 
            return false;
        s=s/2;
        int n=arr.size();
        vector<bool> p(s+1,false),c(s+1);
        p[0]=true;
        for (int i=1;i<=n;i++) 
        {
            for (int j=0;j<=s;j++) 
            {
                if (j<arr[i-1])
                    c[j]=p[j];
                else
                    c[j]=(p[j] || p[j-arr[i-1]]);
            }
            p=c;
        }
        return p[s];
    }
};

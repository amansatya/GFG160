class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) 
    {
        int n=arr.size();
        vector<int> r(n,1);
        for(int i=1;i<n;i++)
            r[i]=r[i-1]*arr[i-1];
        int s=1;
        for(int i=n-2;i>=0;i--)
        {
            s*=arr[i+1];
            r[i]*=s;
        }
        return r;
    }
};

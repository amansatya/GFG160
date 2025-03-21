class Solution {
  public:
    int findMaxSum(vector<int>& arr) 
    {
        int n = arr.size();
        vector<int> d(n+1,0);
        d[0]=0;
        d[1]=arr[0];
        for (int i=2;i<=n;i++) 
            d[i]=max(arr[i-1]+d[i-2],d[i-1]);
        return d[n];
    }
};

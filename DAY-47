class Solution {
  public:
    int longestConsecutive(vector<int>& arr) 
    {
        vector<int> f(100001,0);
        int c=0,m=INT_MIN,ans=INT_MIN;
        for(int i=0;i<arr.size();i++)
        {
            f[arr[i]]++;
            m=max(m,arr[i]);
        }
        for(int i=0;i<=m;i++)
        {
            if(f[i]>0)
                c++;
            else
            {
                ans=max(ans,c);
                c=0;
            }
        }
        ans=max(ans,c);
        return ans;
    }
};

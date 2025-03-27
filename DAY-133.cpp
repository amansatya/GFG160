class Solution {
  public:
    int findPlatform(vector<int>& arr, vector<int>& dep) 
    {
        int n=arr.size(),ans=0;
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int c=0;
        for (int i=0,j=0;i<n;i++) 
        {
            while (j<n && dep[j]<arr[i]) 
            {
                c--;
                j++;
            } 
            c++;
            ans=max(ans,c);
        }
        return ans;
    }
};

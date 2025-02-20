class Solution {
  public:
    int maxWater(vector<int> &arr) 
    {
        int l=0,r=arr.size()-1,ans=0;
        while(l<r)
        {
            int w=r-l,h=min(arr[l],arr[r]);
            int a=h*w;
            ans=max(ans,a);
            arr[l]<arr[r]?l++:r--;
        }
        return ans;
    }
};

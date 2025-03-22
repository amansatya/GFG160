class Solution {
    int maxValTab(int i,int j,vector<int> &arr) 
    {
        int n=arr.size(),p2=arr[i],p1=max(arr[i],arr[i+1]);
        for (int k=i+2;k<=j;k++) 
        {
            int t=arr[k]+p2,nt=p1;
            int c=max(t,nt);
            p2=p1;
            p1=c;
        }
        return p1;
    }
  public:
    int maxValue(vector<int>& arr) 
    {
        int n=arr.size();
        if (n==0) 
            return 0;
        if (n==1) 
            return arr[0];
        int ans = 0;
        ans=max(ans,maxValTab(0,n-2,arr));
        ans=max(ans, maxValTab(1,n-1,arr));
        return ans;
    }
};

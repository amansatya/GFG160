class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int t) 
    {
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int i=0,j=n-1,d=INT_MAX;
        vector<int> ans;
        while(i<j)
        {
            int sum=arr[i]+arr[j];
            if(abs(t-sum)<d)
            {
                d=abs(t-sum);
                ans={arr[i],arr[j]};
            }
            if(sum<t)
                i++;
            else if(sum>t)
                j--;
            else
                return ans;
        }
        return ans;
    }
};

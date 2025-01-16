class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) 
    {
        int s=0,ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            s+=arr[i];
            if(m.find(s)==m.end())
                m[s]=i;
            if(s==k)
                ans=max(ans,i+1);
            if(m.find(s-k)!=m.end())
                ans=max(ans,i-m[s-k]);
        }
        return ans;
    }
};

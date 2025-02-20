class Solution {
  public:
    int maxLen(vector<int> &arr) 
    {
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0)
                arr[i]=-1;
        }
        int s=0,ans=0;
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            s+=arr[i];
            if(s==0)
                ans=max(ans,i+1);
            if(m.find(s)==m.end())
                m[s]=i;
            if(m.find(s-0)!=m.end())
                ans=max(ans,i-m[s-0]);
        }
        return ans;
    }
};

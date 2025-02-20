class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) 
    {
        unordered_map<int,int> m;
        int c=0,s=0;
        for(int i=0;i<arr.size();i++)
        {
            s+=arr[i];
            if(s==k)
                c++;
            if(m.find(s-k)!=m.end())
                c+=m[s-k];
            m[s]++;
        }
        return c;
    }
};

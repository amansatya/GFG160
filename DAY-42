class Solution {
  public:
    bool twoSum(vector<int>& arr, int t) 
    {
        int n=arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            m[arr[i]]=i;
        for(int i=0;i<n;i++)
        {
            if(m.find(t-arr[i])!=m.end()&&m[t-arr[i]]!=i)
                return true;
        }
        return false;
    }
};

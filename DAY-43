class Solution {
  public: 
    int countPairs(vector<int> &arr, int t) 
    {
        int n=arr.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++)
            m[arr[i]]++;
        int c=0;
        for (int i = 0; i < n; i++) 
        {
            int a=t-arr[i];
            m[arr[i]]--;
            if (m.find(a)!=m.end())
                c+=m[a];
        }
        return c;
    }
};

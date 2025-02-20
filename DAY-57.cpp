class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) 
    {
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i=0;i<k;i++)
            m[arr[i]]++;
        ans.push_back(m.size());
        for(int i=k;i<arr.size();i++)
        {
            m[arr[i-k]]--;
            if(m[arr[i-k]]==0)
                m.erase(arr[i-k]);
            m[arr[i]]++;
            ans.push_back(m.size());
        }
        return ans;
    }
};

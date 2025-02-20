class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) 
    {
        unordered_map<string,vector<string>> m;
        for(int i=0;i<arr.size();i++)
        {
            string t=arr[i];
            sort(t.begin(),t.end());
            m[t].push_back(arr[i]);
        }
        vector<vector<string>> ans;
        for(auto i:m)
            ans.push_back(i.second);
        return ans;
    }
};

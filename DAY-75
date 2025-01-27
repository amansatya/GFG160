class Solution {
  public:
    void permutation(vector<char>& arr,int i,vector<string>&ans)
    {
        if(i == arr.size())
        {
            ans.push_back(string(arr.begin(), arr.end()));
            return;
        }
        unordered_set<char> s;
        for(int j = i; j < arr.size(); j++)
        {
            if (s.find(arr[j]) != s.end()) 
                continue;
            s.insert(arr[j]); 
            swap(arr[i], arr[j]);
            permutation(arr, i + 1, ans);  
            swap(arr[i], arr[j]);
        }
    }
    vector<string> findPermutation(string &s)
    {
        vector<string>ans;
        vector<char> arr(s.begin(), s.end());
        permutation(arr,0,ans);
        return ans;
    }
};

class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) 
    {
        vector<int> ans;
        priority_queue<int> m(arr.begin(),arr.end());
        for(int i=1;i<=k;i++)
        {
            ans.push_back(m.top());
            m.pop();
        }
        return ans;
    }
};

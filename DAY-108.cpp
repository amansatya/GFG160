class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr,int k) 
    {
        vector<int> ans;
        priority_queue<pair<int, int>> m;
        for (int i=0;i<k;i++)
            m.push({arr[i],i});
        ans.push_back(m.top().first);
        for (int i = k; i < arr.size(); i++) 
        {
            m.push({arr[i],i});
            while (!m.empty() && m.top().second<=i-k)
                m.pop();
            ans.push_back(m.top().first);
        }
        return ans;
    }
};

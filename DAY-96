class Solution {
  public:
    int distance(vector<int> &arr)
    {
        return (arr[0]*arr[0])+(arr[1]*arr[1]);
    }
    vector<vector<int>> kClosest(vector<vector<int>>& arr, int k) 
    {
        priority_queue<pair<int,vector<int>>> m;
        for(int i=0;i<arr.size();i++)
        {
            int n=distance(arr[i]);
            if(m.size()<k)
                m.push({n,arr[i]});
            else
            {
                if(n<m.top().first)
                {
                    m.pop();
                    m.push({n,arr[i]});
                }
            }
        }
        vector<vector<int>> ans;
        while(!m.empty())
        {
            ans.push_back(m.top().second);
            m.pop();
        }
        return ans;
    }
};

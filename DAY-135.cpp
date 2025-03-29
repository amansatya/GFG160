class Solution {
  public:
    vector<int> jobSequencing(vector<int> &d,vector<int> &p) 
    {
        int n=d.size();
        vector<int>ans={0,0};
        vector<pair<int,int>> j;
        for (int i=0;i<n;i++)
            j.push_back({d[i],p[i]});
        sort(j.begin(),j.end());
        priority_queue<int,vector<int>,greater<int>> q;
        for (auto &a:j) 
        {
            if (a.first>q.size())
                q.push(a.second);
            else if (!q.empty() && q.top()<a.second) 
            {
                q.pop();
                q.push(a.second);
            }
        }
        while (!q.empty()) 
        {
            ans[1]+=q.top();
            q.pop();
            ans[0]++;
        }
        return ans;
    }
};

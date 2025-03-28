class Solution {
  public:
    int activitySelection(vector<int> &s,vector<int> &f) 
    {
        int ans=0,c=INT_MIN;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        for (int i=0;i<s.size();i++)
            p.push({f[i],s[i]});
        while (!p.empty())
        {
            pair<int,int> a=p.top();
            p.pop();
            if (a.second>c)
            {
                c=a.first;
                ans++;
            }
        }
        return ans;
    }
};

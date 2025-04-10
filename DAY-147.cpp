class Solution {
    int manhattandistance(vector<int>& a, vector<int>& b) 
    {
        return abs(a[0]-b[0])+abs(a[1]-b[1]);
    }
  public:
    int minCost(vector<vector<int>>& houses) 
    {
        int n=houses.size(),ans=0;
        priority_queue<pair<int,int>,vector<pair<int, int>>,greater<>> m;
        vector<bool> v(n,false);
        m.push({0,0});
        while (!m.empty()) 
        {
            pair<int,int> p=m.top(); 
            m.pop();
            int i=p.first,j=p.second;
            if (v[j]) 
                continue;
            v[j]=true;
            ans+=i;
            for (int k=0;k<n;k++) 
            {
                if (!v[k]) 
                {
                    int d=manhattandistance(houses[j],houses[k]);
                    m.push({d,k});
                }
            }
        }
        return ans;
    }
};

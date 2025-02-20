class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &nums) 
    {
        int n=nums.size();
        unordered_map<int,vector<pair<int,int>>> m;
        set<vector<int>> s;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
                m[nums[i]+nums[j]].push_back({i,j});
        }
        for(int i=0;i<n;i++)
        {
            int p=-nums[i];
            if(m.find(p)!=m.end())
            {
                vector<pair<int,int>> b=m[p];
                for(auto c: b)
                {
                    if(c.first!=i&&c.second!=i)
                    {
                        vector<int> temp={i,c.first,c.second};
                        sort(temp.begin(),temp.end());
                        s.insert(temp);
                    }
                }
            }
        }
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};
